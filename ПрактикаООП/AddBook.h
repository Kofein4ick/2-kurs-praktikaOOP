#pragma once
#include "Classes.h"
namespace ПрактикаООП {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddBook
	/// </summary>
	public ref class AddBook : public System::Windows::Forms::Form
	{
	public:
		AddBook(void)
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
		~AddBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ BookNameBox;
	private: System::Windows::Forms::TextBox^ AuthorBox;
	private: System::Windows::Forms::TextBox^ HouseBox;
	private: System::Windows::Forms::TextBox^ CityBox;
	private: System::Windows::Forms::TextBox^ YearBox;
	private: System::Windows::Forms::TextBox^ QuantityBox;
	private: System::Windows::Forms::Button^ OkButton;
	protected:

	protected:






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

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
			this->BookNameBox = (gcnew System::Windows::Forms::TextBox());
			this->AuthorBox = (gcnew System::Windows::Forms::TextBox());
			this->HouseBox = (gcnew System::Windows::Forms::TextBox());
			this->CityBox = (gcnew System::Windows::Forms::TextBox());
			this->YearBox = (gcnew System::Windows::Forms::TextBox());
			this->QuantityBox = (gcnew System::Windows::Forms::TextBox());
			this->OkButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BookNameBox
			// 
			this->BookNameBox->Location = System::Drawing::Point(215, 37);
			this->BookNameBox->Name = L"BookNameBox";
			this->BookNameBox->Size = System::Drawing::Size(373, 22);
			this->BookNameBox->TabIndex = 0;
			// 
			// AuthorBox
			// 
			this->AuthorBox->Location = System::Drawing::Point(215, 76);
			this->AuthorBox->Name = L"AuthorBox";
			this->AuthorBox->Size = System::Drawing::Size(373, 22);
			this->AuthorBox->TabIndex = 1;
			// 
			// HouseBox
			// 
			this->HouseBox->Location = System::Drawing::Point(215, 116);
			this->HouseBox->Name = L"HouseBox";
			this->HouseBox->Size = System::Drawing::Size(373, 22);
			this->HouseBox->TabIndex = 2;
			// 
			// CityBox
			// 
			this->CityBox->Location = System::Drawing::Point(215, 154);
			this->CityBox->Name = L"CityBox";
			this->CityBox->Size = System::Drawing::Size(373, 22);
			this->CityBox->TabIndex = 3;
			// 
			// YearBox
			// 
			this->YearBox->Location = System::Drawing::Point(215, 195);
			this->YearBox->Name = L"YearBox";
			this->YearBox->Size = System::Drawing::Size(88, 22);
			this->YearBox->TabIndex = 4;
			// 
			// QuantityBox
			// 
			this->QuantityBox->Location = System::Drawing::Point(215, 232);
			this->QuantityBox->Name = L"QuantityBox";
			this->QuantityBox->Size = System::Drawing::Size(88, 22);
			this->QuantityBox->TabIndex = 5;
			// 
			// OkButton
			// 
			this->OkButton->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->OkButton->Location = System::Drawing::Point(488, 302);
			this->OkButton->Name = L"OkButton";
			this->OkButton->Size = System::Drawing::Size(100, 29);
			this->OkButton->TabIndex = 6;
			this->OkButton->Text = L"OK";
			this->OkButton->UseVisualStyleBackColor = true;
			this->OkButton->Click += gcnew System::EventHandler(this, &AddBook::OkButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Введите название книги";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Введите ФИО автора";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Введите издательство";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Введите город";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 195);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Введите год издания";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 232);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Введите кол-во книг";
			// 
			// AddBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 391);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->OkButton);
			this->Controls->Add(this->QuantityBox);
			this->Controls->Add(this->YearBox);
			this->Controls->Add(this->CityBox);
			this->Controls->Add(this->HouseBox);
			this->Controls->Add(this->AuthorBox);
			this->Controls->Add(this->BookNameBox);
			this->Name = L"AddBook";
			this->Text = L"Добавление книги";
			this->Load += gcnew System::EventHandler(this, &AddBook::AddBook_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	//при нажатии кнопки ОК
private: System::Void OkButton_Click(System::Object^ sender, System::EventArgs^ e) {

	switch (AddBookFunc())
	{
	case 1: exit(1);//ошибка открытия файла
	//ошибки некорреткного ввода
	case 2: break;
	case 3: break;
	case 4: break;
	case 5: break;
	case 6: break;
	case 7: break;
	//ошибки работы с файлами
	case 8: exit(8);
	case 9: exit(9);
	case 10: exit(10);
	case 11: exit(11);
	case 12: exit(12);
	case 13: exit(13);
	case 0: 
	{
		MessageBox::Show("Книга успешно добавлена", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information); 
		break; 
	}
	}
}
int AddBookFunc()
{
	book Book;//объект класса книга
	FILE* Books;//указатель для файла с информацией о книгах
	publishing_house* pBASE;//указатель базового класса
	int BookCode = 1;//код книги
	wchar_t Book_Name[256];//название книги
	wchar_t Author[40];//фио автора
	wchar_t House[256];//название издательства
	wchar_t City[60];//название города
	//очистка массивов
	memset(Book_Name, 0, sizeof(wchar_t) * 256);
	memset(Author, 0, sizeof(wchar_t) * 40);
	memset(House, 0, sizeof(wchar_t) * 256);
	memset(City, 0, sizeof(wchar_t) * 60);
	int Year = 0;//год издания
	int Quantity = 0;//кол-во
	//считывание информации с формы и проверка корректности ввода
	Year = Convert::ToUInt16(YearBox->Text);
	Quantity = Convert::ToUInt16(QuantityBox->Text);
	if ((BookNameBox->Text->Length < 256)&&(BookNameBox->Text->Length > 0))
	{
		for (int i = 0; i < BookNameBox->Text->Length; i++)
			Book_Name[i] = BookNameBox->Text->ToCharArray()[i];
	}
	else
	{
		MessageBox::Show("Некорректный ввод названия книги(Превышена длина или пустая строка)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		BookNameBox->Clear();
		return 4;
	}
	if ((AuthorBox->Text->Length < 40) && (AuthorBox->Text->Length > 0))
	{
		for (int i = 0; i < AuthorBox->Text->Length; i++)
			Author[i] = AuthorBox->Text->ToCharArray()[i];
	}
	else
	{
		MessageBox::Show("Некорректный ввод ФИО автора(Превышена длина или пустая строка)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		AuthorBox->Clear();
		return 5;
	}
	if ((CityBox->Text->Length < 60) && (CityBox->Text->Length > 0))
	{
		for (int i = 0; i < CityBox->Text->Length; i++)
			City[i] = CityBox->Text->ToCharArray()[i];
	}
	else
	{
		MessageBox::Show("Некорректный ввод названия города(Превышена длина или пустая строка)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		CityBox->Clear();
		return 6;
	}
	if ((HouseBox->Text->Length < 256) && (HouseBox->Text->Length > 0))
	{
		for (int i = 0; i < HouseBox->Text->Length; i++)
			House[i] = HouseBox->Text->ToCharArray()[i];
	}
	else
	{
		MessageBox::Show("Некорректный ввод названия издательства(Превышена длина или пустая строка)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		HouseBox->Clear();
		return 7;
	}
	if (Year <= 0)//проверка на корректность года
	{
		MessageBox::Show("Некорректное число года издания", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		YearBox->Clear();
		return 2;
	}
	if (Quantity <= 0)//проверка на корректность кол-ва
	{
		MessageBox::Show("Некорректное число кол-ва книг", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		QuantityBox->Clear();
		return 3;
	}
	//открытие файла
	Books = fopen("Books.bin", "rb+");
	if (Books == NULL)
	{
		MessageBox::Show("Не удалось открыть файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		return 1;
	}
	pBASE = &Book;//работаем с виртуальными методами потомка Book
	while (pBASE->ReadFile(Books) == 0)//считываем файл полностью
	{
		if ((wcscmp(Author, Book.GetAuthor()) == 0) && (wcscmp(Book_Name, Book.GetBook_Name()) == 0))//сравнение строк
		{
			//Обновление информации в файле Books.bin с помощью вспомогательного файла Temp
			FILE* Temp;
			Temp = fopen("Temp.bin", "wb+");
			if (Temp == NULL)
			{
				MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return 9;
			}
			BookCode=Book.GetBookCode();
			fseek(Books, 0, SEEK_SET);
			while (pBASE->ReadFile(Books) == 0)
			{
				if (Book.GetBookCode() == BookCode)
					Book.SetQuantity(Book.GetQuantity() + Quantity);
				if (pBASE->AddBook(Temp) != 0)
				{
					fclose(Temp);
					fclose(Books);
					remove("Temp.bin");
					MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
					return 10;
				}
			}
			fclose(Books);
			fclose(Temp);
			Temp = fopen("Temp.bin", "rb+");
			if (Temp == NULL)
			{
				MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return 11;
			}
			Books = fopen("Books.bin", "wb+");
			if (Books == NULL)
			{
				fclose(Temp);
				remove("Temp.bin");
				MessageBox::Show("Не удалось открыть файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return 12;
			}
			while (pBASE->ReadFile(Temp) == 0)
			{
				if (pBASE->AddBook(Books) != 0)
				{
					fclose(Temp);
					fclose(Books);
					remove("Temp.bin");
					MessageBox::Show("Ошибка записи в Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
					return 13;
				}
			}
			fclose(Temp);
			fclose(Books);
			remove("Temp.bin");
			return 0;
		}
	}
	//Проверяем его на пустоту
	if (Book.GetBook_Name()[0] != '\0')
		BookCode = Book.GetBookCode() + 1;
	Book.SetBookCode(BookCode);//устанавливаем код
	Book.SetBook_Name(Book_Name);//установка названия книги
	Book.SetAuthor(Author);//установка имени автора
	Book.SetHouse_Name(House);//установка названия издателя
	Book.SetCity(City);//установка города издателя
	Book.SetYear(Year);//установка года
	Book.SetQuantity(Quantity);//установка кол-ва
	if (pBASE->AddBook(Books) != 0)//запись в файл
	{
		MessageBox::Show("Ошиька записи в файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		return 8;
	}
	Book.~book();//удаляем объект
	fclose(Books);
	return 0;
}
//при загрузке формы
private: System::Void AddBook_Load(System::Object^ sender, System::EventArgs^ e) {
	//очистка полей
	BookNameBox->Clear();
	AuthorBox->Clear();
	HouseBox->Clear();
	CityBox->Clear();
	YearBox->Clear();
	QuantityBox->Clear();
}
};
}
