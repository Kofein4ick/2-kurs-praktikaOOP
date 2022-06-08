#include "Classes.h"
#pragma once

namespace ПрактикаООП {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ReadersList
	/// </summary>
	public ref class ReadersList : public System::Windows::Forms::Form
	{
	public:
		ReadersList(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ReadersList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ CodeHeader;
	private: System::Windows::Forms::ColumnHeader^ NameHeader;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->CodeHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->NameHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->CodeHeader, this->NameHeader });
			this->listView1->Location = System::Drawing::Point(17, 15);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(411, 383);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// CodeHeader
			// 
			this->CodeHeader->Text = L"Код";
			this->CodeHeader->Width = 71;
			// 
			// NameHeader
			// 
			this->NameHeader->Text = L"ФИО читателя";
			this->NameHeader->Width = 335;
			// 
			// ReadersList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(452, 414);
			this->Controls->Add(this->listView1);
			this->Name = L"ReadersList";
			this->Text = L"ReadersList";
			this->Load += gcnew System::EventHandler(this, &ReadersList::ReadersList_Load);
			this->ResumeLayout(false);

		}
		//Вывод списка читателей
		int ReadersListFunc()
		{
			reader Reader;//объект читатель	
			publishing_house* pBASE;//указатель базового класса
			FILE* Readers;//файл с информацией о читателях
			ListViewItem^ item;//элемент списка
			ListViewItem::ListViewSubItem^ subitem;//подэлемент списка
			System::String^ str;//строка
			Readers = fopen("Readers.bin", "rb+");
			bool flag = 0;//флаг
			pBASE = &Reader;//работаем с методами класса Reader
			if (Readers == NULL)//проверка на существование и успешное открытие файла
			{
				MessageBox::Show("Не удалось открыть файл Readers.bin", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return 1;
			}
			while (pBASE->ReadFile(Readers) == 0)//чтение файла
			{
				flag = 1;
				item = gcnew ListViewItem();
				subitem = gcnew ListViewItem::ListViewSubItem();
				//заполняем элементы
				item->Text = Convert::ToString(Reader.GetCodeReader());//преобразуем число в строку
				str = gcnew System::String(Reader.GetName());
				subitem->Text = str;
				//добавляем элементы в список
				item->SubItems->Add(subitem);
				listView1->Items->Add(item);
			}
			if (flag == 0)//если файл пуст
			{
				MessageBox::Show("Читатели не найдены", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				fclose(Readers);
				return 2;
			}
			fclose(Readers);
			return 0;
		}
#pragma endregion
		//при загрузке формы
	private: System::Void ReadersList_Load(System::Object^ sender, System::EventArgs^ e) {
		switch (ReadersListFunc())
		{
		case 1:exit(1);//ошибка открытия файла-выход из программы
		case 2: {ReadersList::Close(); break; }//файл пуст - закрытие текущей формы
		case 0:break;//корректная работа
		}
	}
	};
}
