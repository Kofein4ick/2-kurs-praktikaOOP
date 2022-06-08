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
	/// Сводка для FindBadReader
	/// </summary>
	public ref class FindBadReader : public System::Windows::Forms::Form
	{
	public:
		FindBadReader(void)
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
		~FindBadReader()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ ReaderCodeHeader;
	private: System::Windows::Forms::ColumnHeader^ ReaderNameHeader;
	private: System::Windows::Forms::ColumnHeader^ BookCodeHeader;
	private: System::Windows::Forms::ColumnHeader^ AuthorHeader;
	private: System::Windows::Forms::ColumnHeader^ BookNameHEader;
	protected:

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
			this->ReaderCodeHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->ReaderNameHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->BookCodeHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->AuthorHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->BookNameHEader = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->ReaderCodeHeader,
					this->ReaderNameHeader, this->BookCodeHeader, this->AuthorHeader, this->BookNameHEader
			});
			this->listView1->Location = System::Drawing::Point(12, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(803, 400);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// ReaderCodeHeader
			// 
			this->ReaderCodeHeader->Text = L"Код читателя";
			this->ReaderCodeHeader->Width = 105;
			// 
			// ReaderNameHeader
			// 
			this->ReaderNameHeader->Text = L"ФИО читателя";
			this->ReaderNameHeader->Width = 173;
			// 
			// BookCodeHeader
			// 
			this->BookCodeHeader->Text = L"Код книги";
			this->BookCodeHeader->Width = 76;
			// 
			// AuthorHeader
			// 
			this->AuthorHeader->Text = L"Автор";
			this->AuthorHeader->Width = 126;
			// 
			// BookNameHEader
			// 
			this->BookNameHEader->Text = L"Название книги";
			this->BookNameHEader->Width = 320;
			// 
			// FindBadReader
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(820, 424);
			this->Controls->Add(this->listView1);
			this->Name = L"FindBadReader";
			this->Text = L"Поиск должников";
			this->Load += gcnew System::EventHandler(this, &FindBadReader::FindBadReader_Load);
			this->ResumeLayout(false);

		}
	//Поиск читателей-должников
	int FindBadReaderFunc()
	{
		give_out give_Out;//объект класса выдача
		reader Reader;//объект класса читатель
		publishing_house* pBASE;//указатель базового класса
		book Book;//объект класса читатель
		FILE* Books;//указатель для файла с иформацией о книгах
		FILE* Give_Out;//указатель для файла с иформацией о выдаче
		FILE* Readers;//указатель для файла с иформацией о читателях
		System::String^ str;//строка
		ListViewItem^ item;//элемента списка
		//подэлементы списка
		ListViewItem::ListViewSubItem^ subitem1;
		ListViewItem::ListViewSubItem^ subitem2;
		ListViewItem::ListViewSubItem^ subitem3;
		ListViewItem::ListViewSubItem^ subitem4;
		//Открытие файлов, проверка на существование и открытие
		Give_Out = fopen("Give_Out.bin", "rb+");
		if (Give_Out == NULL)//проверка открытия файла
		{
			MessageBox::Show("Не удалось открыть файл Give_Out.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			return 1;
		}
		Readers = fopen("Readers.bin", "rb+");
		if (Readers == NULL)//проверка открытия файла
		{

			MessageBox::Show("Не удалось открыть файл Readers.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			fclose(Give_Out);
			return 2;
		}
		Books = fopen("Books.bin", "rb+");
		if (Books == NULL)//проверка открытия файла
		{

			MessageBox::Show("Не удалось открыть файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			fclose(Give_Out);
			fclose(Readers);
			return 3;
		}
		//Берем текущую дату
		time_t now = time(0);
		tm* gmtm = gmtime(&now);
		pBASE = &give_Out;//работаем с методами класса выдача
		bool flag = 0;//флаг
		bool flag2 = false;//Флаг нахождения должника
		while (pBASE->ReadFile(Give_Out) == 0)//чтение файла выдачи
		{
			//сравнение требуемой даты сдачи с текущей
			if ((give_Out.GetDelivery_date().tm_year < gmtm->tm_year) || ((give_Out.GetDelivery_date().tm_year == gmtm->tm_year)&&(give_Out.GetDelivery_date().tm_mday < gmtm->tm_mday)) || ((give_Out.GetDelivery_date().tm_mday < gmtm->tm_mday)&&(give_Out.GetDelivery_date().tm_mon <= gmtm->tm_mon)))
			{
				pBASE = &Reader;//работаем с методами класса читатель
				while (pBASE->ReadFile(Readers) == 0)// чтение файла читателей
				{
					if (Reader.GetCodeReader() == give_Out.GetCodeReader())//поиск читателя должника в файле читатели
					{
						pBASE = &Book;//работаем с методами класса книга
						while (pBASE->ReadFile(Books) == 0)//чтение файла книг
							if (Book.GetBookCode() == give_Out.GetBookCode())//поиск книги в файле по коду
							{
								flag = 1;
								break;
							}
						fseek(Books, 0, SEEK_SET);//перестановка указателя в начало файла
						pBASE = &Reader;//работаем с методами класса читатель
					}
					if (flag == 1)//если все нашли
					{
						//заполняем элементы и подэлементы и добавляем их в список
						item = gcnew ListViewItem();
						subitem1 = gcnew ListViewItem::ListViewSubItem();
						subitem2 = gcnew ListViewItem::ListViewSubItem();
						subitem3 = gcnew ListViewItem::ListViewSubItem();
						subitem4 = gcnew ListViewItem::ListViewSubItem();
						item->Text = Convert::ToString(Reader.GetCodeReader());str = gcnew String(Reader.GetName());
						subitem1->Text = str; subitem2->Text = Convert::ToString(Book.GetBookCode());
						str = gcnew String(Book.GetAuthor());subitem3->Text = str;
						str = gcnew String(Book.GetBook_Name()); subitem4->Text = str;
						item->SubItems->Add(subitem1); item->SubItems->Add(subitem2);
						item->SubItems->Add(subitem3); item->SubItems->Add(subitem4);
						listView1->Items->Add(item);
						flag = 0;
						flag2 = true;
						break;
					}
				}
				fseek(Readers, 0, SEEK_SET);//перестановка указателя в начало файла
				pBASE = &give_Out;//работаем с методами класса выдача
			}
		}
		if (flag2 == false)
		{
			MessageBox::Show("Читателей-должников нет", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
			return 4;
		}
		fclose(Give_Out);
		fclose(Readers);
		fclose(Books);
		Book.~book();
		Reader.~reader();
		give_Out.~give_out();
		return 0;
	}
#pragma endregion
	//при загрузке формы
	private: System::Void FindBadReader_Load(System::Object^ sender, System::EventArgs^ e) {
		switch (FindBadReaderFunc())
		{
		//ошибки работы с файлами - выход из программы
		case 1:exit(1);
		case 2:exit(2);
		case 3:exit(3);
		case 4: {FindBadReader::Close(); break; }//должников нет-закрытие формы
		}
	}
};
}
