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
	/// Сводка для FindReader
	/// </summary>
	public ref class FindReader : public System::Windows::Forms::Form
	{
	public:
		FindReader(void)
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
		~FindReader()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ OK_Button;
	protected:

	private: System::Windows::Forms::TextBox^ ReaderNameTextBox;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ ReaderLab;
	private: System::Windows::Forms::Label^ ReaderCodelab;
	private: System::Windows::Forms::Label^ ReaderNameLab;
	private: System::Windows::Forms::Label^ CountLab;
	private: System::Windows::Forms::Label^ BooksCOutLab;
	private: System::Windows::Forms::Label^ LastBookLab;

	private: System::Windows::Forms::Label^ AuthorLab;
	private: System::Windows::Forms::Label^ AuthorNameLab;
	private: System::Windows::Forms::Label^ BookLab;
	private: System::Windows::Forms::Label^ BookNameLAb;


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
			this->OK_Button = (gcnew System::Windows::Forms::Button());
			this->ReaderNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ReaderLab = (gcnew System::Windows::Forms::Label());
			this->ReaderCodelab = (gcnew System::Windows::Forms::Label());
			this->ReaderNameLab = (gcnew System::Windows::Forms::Label());
			this->CountLab = (gcnew System::Windows::Forms::Label());
			this->BooksCOutLab = (gcnew System::Windows::Forms::Label());
			this->LastBookLab = (gcnew System::Windows::Forms::Label());
			this->AuthorLab = (gcnew System::Windows::Forms::Label());
			this->AuthorNameLab = (gcnew System::Windows::Forms::Label());
			this->BookLab = (gcnew System::Windows::Forms::Label());
			this->BookNameLAb = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// OK_Button
			// 
			this->OK_Button->Location = System::Drawing::Point(546, 228);
			this->OK_Button->Name = L"OK_Button";
			this->OK_Button->Size = System::Drawing::Size(107, 33);
			this->OK_Button->TabIndex = 0;
			this->OK_Button->Text = L"OK";
			this->OK_Button->UseVisualStyleBackColor = true;
			this->OK_Button->Click += gcnew System::EventHandler(this, &FindReader::OK_Button_Click);
			// 
			// ReaderNameTextBox
			// 
			this->ReaderNameTextBox->Location = System::Drawing::Point(210, 30);
			this->ReaderNameTextBox->Name = L"ReaderNameTextBox";
			this->ReaderNameTextBox->Size = System::Drawing::Size(443, 22);
			this->ReaderNameTextBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите ФИО читателя";
			// 
			// ReaderLab
			// 
			this->ReaderLab->AutoSize = true;
			this->ReaderLab->Location = System::Drawing::Point(12, 65);
			this->ReaderLab->Name = L"ReaderLab";
			this->ReaderLab->Size = System::Drawing::Size(46, 17);
			this->ReaderLab->TabIndex = 3;
			this->ReaderLab->Text = L"label2";
			// 
			// ReaderCodelab
			// 
			this->ReaderCodelab->AutoSize = true;
			this->ReaderCodelab->Location = System::Drawing::Point(121, 65);
			this->ReaderCodelab->Name = L"ReaderCodelab";
			this->ReaderCodelab->Size = System::Drawing::Size(46, 17);
			this->ReaderCodelab->TabIndex = 4;
			this->ReaderCodelab->Text = L"label3";
			// 
			// ReaderNameLab
			// 
			this->ReaderNameLab->AutoSize = true;
			this->ReaderNameLab->Location = System::Drawing::Point(173, 65);
			this->ReaderNameLab->Name = L"ReaderNameLab";
			this->ReaderNameLab->Size = System::Drawing::Size(46, 17);
			this->ReaderNameLab->TabIndex = 5;
			this->ReaderNameLab->Text = L"label4";
			// 
			// CountLab
			// 
			this->CountLab->AutoSize = true;
			this->CountLab->Location = System::Drawing::Point(12, 98);
			this->CountLab->Name = L"CountLab";
			this->CountLab->Size = System::Drawing::Size(46, 17);
			this->CountLab->TabIndex = 6;
			this->CountLab->Text = L"label5";
			// 
			// BooksCOutLab
			// 
			this->BooksCOutLab->AutoSize = true;
			this->BooksCOutLab->Location = System::Drawing::Point(121, 98);
			this->BooksCOutLab->Name = L"BooksCOutLab";
			this->BooksCOutLab->Size = System::Drawing::Size(46, 17);
			this->BooksCOutLab->TabIndex = 7;
			this->BooksCOutLab->Text = L"label6";
			// 
			// LastBookLab
			// 
			this->LastBookLab->AutoSize = true;
			this->LastBookLab->Location = System::Drawing::Point(12, 129);
			this->LastBookLab->Name = L"LastBookLab";
			this->LastBookLab->Size = System::Drawing::Size(46, 17);
			this->LastBookLab->TabIndex = 8;
			this->LastBookLab->Text = L"label7";
			// 
			// AuthorLab
			// 
			this->AuthorLab->AutoSize = true;
			this->AuthorLab->Location = System::Drawing::Point(12, 158);
			this->AuthorLab->Name = L"AuthorLab";
			this->AuthorLab->Size = System::Drawing::Size(46, 17);
			this->AuthorLab->TabIndex = 9;
			this->AuthorLab->Text = L"label8";
			// 
			// AuthorNameLab
			// 
			this->AuthorNameLab->AutoSize = true;
			this->AuthorNameLab->Location = System::Drawing::Point(121, 158);
			this->AuthorNameLab->Name = L"AuthorNameLab";
			this->AuthorNameLab->Size = System::Drawing::Size(46, 17);
			this->AuthorNameLab->TabIndex = 10;
			this->AuthorNameLab->Text = L"label9";
			// 
			// BookLab
			// 
			this->BookLab->AutoSize = true;
			this->BookLab->Location = System::Drawing::Point(12, 192);
			this->BookLab->Name = L"BookLab";
			this->BookLab->Size = System::Drawing::Size(54, 17);
			this->BookLab->TabIndex = 11;
			this->BookLab->Text = L"label10";
			// 
			// BookNameLAb
			// 
			this->BookNameLAb->AutoSize = true;
			this->BookNameLAb->Location = System::Drawing::Point(121, 192);
			this->BookNameLAb->Name = L"BookNameLAb";
			this->BookNameLAb->Size = System::Drawing::Size(58, 17);
			this->BookNameLAb->TabIndex = 12;
			this->BookNameLAb->Text = L"lable 11";
			// 
			// FindReader
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 268);
			this->Controls->Add(this->BookNameLAb);
			this->Controls->Add(this->BookLab);
			this->Controls->Add(this->AuthorNameLab);
			this->Controls->Add(this->AuthorLab);
			this->Controls->Add(this->LastBookLab);
			this->Controls->Add(this->BooksCOutLab);
			this->Controls->Add(this->CountLab);
			this->Controls->Add(this->ReaderNameLab);
			this->Controls->Add(this->ReaderCodelab);
			this->Controls->Add(this->ReaderLab);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ReaderNameTextBox);
			this->Controls->Add(this->OK_Button);
			this->Name = L"FindReader";
			this->Text = L"Поиск читателя";
			this->Load += gcnew System::EventHandler(this, &FindReader::FindReader_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//Вывод информации о запрошенном читателе
		int FindReaderFunc()
		{
			reader Reader;//объект класса читатель
			give_out give_Out;//объект класса выдача
			publishing_house* pBASE;//указатель базового класса
			book Book;//объект класса книга
			int ReaderCode;//код читателя
			int BookCode;//код книги
			wchar_t Reader_Name[40];//имя читателя
			memset(Reader_Name, 0, sizeof(wchar_t) * 40);//очистка массива
			System::String^ str;//строка
			FILE* Books;//указатель для файла с информацией о книгах
			FILE* Give_Out;//указатель для файла с информацией о выдаче
			FILE* Readers;//указатель для файла с информацией о читателях
			unsigned short count = 0;//счётчик взятых книг
			//проверка корректности ввода
			if ((ReaderNameTextBox->Text->Length < 40) && (ReaderNameTextBox->Text->Length > 0))
			{
				for (int i = 0; i < ReaderNameTextBox->Text->Length; i++)
					Reader_Name[i] = ReaderNameTextBox->Text->ToCharArray()[i];
			}
			else
			{
				MessageBox::Show("Некорректный ввод ФИО читателя(Превышена длина или пустая строка)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				ReaderNameTextBox->Clear();
				return 1;
			}
			Books = fopen("Books.bin", "rb+");
			if (Books == NULL)//проверка открытия файла
			{
				MessageBox::Show("Не удалось открыть файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return 2;
			}
			Give_Out = fopen("Give_Out.bin", "rb+");
			if (Give_Out == NULL)//проверка открытия файла
			{
				MessageBox::Show("Не удалось открыть файл Give_Out.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				fclose(Books);
				return 3;
			}
			Readers = fopen("Readers.bin", "rb+");
			if (Readers == NULL)//проверка открытия файла
			{
				MessageBox::Show("Не удалось открыть файл Readers.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				fclose(Books);
				fclose(Give_Out);
				return 4;
			}
			pBASE = &Reader;//работаем с методами класса читатель
			bool flag = 0;
			while (pBASE->ReadFile(Readers) == 0)//Ищем читателя
				if (wcscmp(Reader.GetName(), Reader_Name) == 0)//сравнение строк
				{
					ReaderCode = Reader.GetCodeReader();
					flag = 1;
					break;
				}
			if (flag == 0)
			{
				MessageBox::Show("Запрошенный читатель не найден", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
				return 5;
			}
			fclose(Readers);
			pBASE = &give_Out;//работаем с методами класса выдача
			while (pBASE->ReadFile(Give_Out) == 0)//Подсчитываем кол-во взятых книг
				if (ReaderCode == give_Out.GetCodeReader())
				{
					BookCode = give_Out.GetBookCode();
					count++;
				}
			fclose(Give_Out);
			pBASE = &Book;//работаем с методами класса кинга
			while (pBASE->ReadFile(Books) == 0)//Ищем последнюю взятую книгу
				if (BookCode == Book.GetBookCode())
					break;
			//вывод информации в поля
			ReaderLab->Text = "Читатель №"; ReaderCodelab->Text = Convert::ToString(Reader.GetCodeReader());
			str = gcnew System::String(Reader.GetName());
			ReaderNameLab->Text = str;
			CountLab->Text = "Взял книг:"; BooksCOutLab->Text = Convert::ToString(count);
			LastBookLab->Text = "Последняя взятая книга";
			str = gcnew System::String(Book.GetAuthor());
			AuthorLab->Text = "Автор:"; AuthorNameLab->Text = str;
			str = gcnew System::String(Book.GetBook_Name());
			BookLab->Text = "Название:"; BookNameLAb->Text = str;
			fclose(Books);
			Book.~book();
			Reader.~reader();
			give_Out.~give_out();
			return 0;
		}
#pragma endregion
		//при загрузке формы
private: System::Void FindReader_Load(System::Object^ sender, System::EventArgs^ e) {
	//очитска всех полей формы
	ReaderNameTextBox->Clear();
	ReaderCodelab->Text="";
	ReaderNameLab->Text = "";
	ReaderLab->Text = "";
	BookNameLAb->Text = "";
	BookLab->Text = "";
	BooksCOutLab->Text = "";
	CountLab->Text = "";
	AuthorLab->Text = "";
	AuthorNameLab->Text = "";
	LastBookLab->Text = "";
}
		 //по нажатию кнопки ОК
private: System::Void OK_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (FindReaderFunc())
	{
	case 1:break;//некорректный ввод фио читателя
	//ошибки,связанные с файлами-выход из программы
	case 2:exit(2);
	case 3:exit(3);
	case 4:exit(4);
	case 5:break;//читатель не найден
	}
}
};
}
