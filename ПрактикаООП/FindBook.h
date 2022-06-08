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
	/// Сводка для FindBook
	/// </summary>
	public ref class FindBook : public System::Windows::Forms::Form
	{
	public:
		FindBook(void)
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
		~FindBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ BookNameTextBox;
	protected:
	private: System::Windows::Forms::TextBox^ AuthorTextBox;
	private: System::Windows::Forms::Button^ OK_Button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ BookLable;
	private: System::Windows::Forms::Label^ BookNameLable;
	private: System::Windows::Forms::Label^ AuthorLable;
	private: System::Windows::Forms::Label^ AuthorNameLable;
	private: System::Windows::Forms::Label^ YearNameLable;
	private: System::Windows::Forms::Label^ YearLable;
	private: System::Windows::Forms::Label^ HouseNameLable;
	private: System::Windows::Forms::Label^ HouseLable;
	private: System::Windows::Forms::Label^ AvailableLable;

	private: System::Windows::Forms::Label^ QuantityNameLable;
	private: System::Windows::Forms::Label^ QuantityLable;
	private: System::Windows::Forms::Label^ CityNameLable;

	private: System::Windows::Forms::Label^ CityLable;

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
			this->BookNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AuthorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->OK_Button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->BookLable = (gcnew System::Windows::Forms::Label());
			this->BookNameLable = (gcnew System::Windows::Forms::Label());
			this->AuthorLable = (gcnew System::Windows::Forms::Label());
			this->AuthorNameLable = (gcnew System::Windows::Forms::Label());
			this->YearNameLable = (gcnew System::Windows::Forms::Label());
			this->YearLable = (gcnew System::Windows::Forms::Label());
			this->HouseNameLable = (gcnew System::Windows::Forms::Label());
			this->HouseLable = (gcnew System::Windows::Forms::Label());
			this->AvailableLable = (gcnew System::Windows::Forms::Label());
			this->QuantityNameLable = (gcnew System::Windows::Forms::Label());
			this->QuantityLable = (gcnew System::Windows::Forms::Label());
			this->CityNameLable = (gcnew System::Windows::Forms::Label());
			this->CityLable = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BookNameTextBox
			// 
			this->BookNameTextBox->Location = System::Drawing::Point(211, 28);
			this->BookNameTextBox->Name = L"BookNameTextBox";
			this->BookNameTextBox->Size = System::Drawing::Size(377, 22);
			this->BookNameTextBox->TabIndex = 0;
			// 
			// AuthorTextBox
			// 
			this->AuthorTextBox->Location = System::Drawing::Point(211, 69);
			this->AuthorTextBox->Name = L"AuthorTextBox";
			this->AuthorTextBox->Size = System::Drawing::Size(376, 22);
			this->AuthorTextBox->TabIndex = 1;
			// 
			// OK_Button
			// 
			this->OK_Button->Location = System::Drawing::Point(477, 363);
			this->OK_Button->Name = L"OK_Button";
			this->OK_Button->Size = System::Drawing::Size(111, 31);
			this->OK_Button->TabIndex = 2;
			this->OK_Button->Text = L"OK";
			this->OK_Button->UseVisualStyleBackColor = true;
			this->OK_Button->Click += gcnew System::EventHandler(this, &FindBook::OK_Button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите название книги";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Введите ФИО автора";
			// 
			// BookLable
			// 
			this->BookLable->AutoSize = true;
			this->BookLable->Location = System::Drawing::Point(12, 122);
			this->BookLable->Name = L"BookLable";
			this->BookLable->Size = System::Drawing::Size(0, 17);
			this->BookLable->TabIndex = 5;
			// 
			// BookNameLable
			// 
			this->BookNameLable->AutoSize = true;
			this->BookNameLable->Location = System::Drawing::Point(181, 122);
			this->BookNameLable->Name = L"BookNameLable";
			this->BookNameLable->Size = System::Drawing::Size(0, 17);
			this->BookNameLable->TabIndex = 6;
			// 
			// AuthorLable
			// 
			this->AuthorLable->AutoSize = true;
			this->AuthorLable->Location = System::Drawing::Point(12, 151);
			this->AuthorLable->Name = L"AuthorLable";
			this->AuthorLable->Size = System::Drawing::Size(0, 17);
			this->AuthorLable->TabIndex = 7;
			// 
			// AuthorNameLable
			// 
			this->AuthorNameLable->AutoSize = true;
			this->AuthorNameLable->Location = System::Drawing::Point(181, 151);
			this->AuthorNameLable->Name = L"AuthorNameLable";
			this->AuthorNameLable->Size = System::Drawing::Size(0, 17);
			this->AuthorNameLable->TabIndex = 8;
			// 
			// YearNameLable
			// 
			this->YearNameLable->AutoSize = true;
			this->YearNameLable->Location = System::Drawing::Point(181, 228);
			this->YearNameLable->Name = L"YearNameLable";
			this->YearNameLable->Size = System::Drawing::Size(0, 17);
			this->YearNameLable->TabIndex = 12;
			// 
			// YearLable
			// 
			this->YearLable->AutoSize = true;
			this->YearLable->Location = System::Drawing::Point(12, 228);
			this->YearLable->Name = L"YearLable";
			this->YearLable->Size = System::Drawing::Size(0, 17);
			this->YearLable->TabIndex = 11;
			// 
			// HouseNameLable
			// 
			this->HouseNameLable->AutoSize = true;
			this->HouseNameLable->Location = System::Drawing::Point(181, 174);
			this->HouseNameLable->Name = L"HouseNameLable";
			this->HouseNameLable->Size = System::Drawing::Size(0, 17);
			this->HouseNameLable->TabIndex = 10;
			// 
			// HouseLable
			// 
			this->HouseLable->AutoSize = true;
			this->HouseLable->Location = System::Drawing::Point(12, 174);
			this->HouseLable->Name = L"HouseLable";
			this->HouseLable->Size = System::Drawing::Size(0, 17);
			this->HouseLable->TabIndex = 9;
			// 
			// AvailableLable
			// 
			this->AvailableLable->AutoSize = true;
			this->AvailableLable->Location = System::Drawing::Point(12, 290);
			this->AvailableLable->Name = L"AvailableLable";
			this->AvailableLable->Size = System::Drawing::Size(0, 17);
			this->AvailableLable->TabIndex = 15;
			// 
			// QuantityNameLable
			// 
			this->QuantityNameLable->AutoSize = true;
			this->QuantityNameLable->Location = System::Drawing::Point(181, 261);
			this->QuantityNameLable->Name = L"QuantityNameLable";
			this->QuantityNameLable->Size = System::Drawing::Size(0, 17);
			this->QuantityNameLable->TabIndex = 14;
			// 
			// QuantityLable
			// 
			this->QuantityLable->AutoSize = true;
			this->QuantityLable->Location = System::Drawing::Point(12, 261);
			this->QuantityLable->Name = L"QuantityLable";
			this->QuantityLable->Size = System::Drawing::Size(0, 17);
			this->QuantityLable->TabIndex = 13;
			// 
			// CityNameLable
			// 
			this->CityNameLable->AutoSize = true;
			this->CityNameLable->Location = System::Drawing::Point(181, 200);
			this->CityNameLable->Name = L"CityNameLable";
			this->CityNameLable->Size = System::Drawing::Size(0, 17);
			this->CityNameLable->TabIndex = 17;
			// 
			// CityLable
			// 
			this->CityLable->AutoSize = true;
			this->CityLable->Location = System::Drawing::Point(12, 200);
			this->CityLable->Name = L"CityLable";
			this->CityLable->Size = System::Drawing::Size(0, 17);
			this->CityLable->TabIndex = 16;
			// 
			// FindBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 406);
			this->Controls->Add(this->CityNameLable);
			this->Controls->Add(this->CityLable);
			this->Controls->Add(this->AvailableLable);
			this->Controls->Add(this->QuantityNameLable);
			this->Controls->Add(this->QuantityLable);
			this->Controls->Add(this->YearNameLable);
			this->Controls->Add(this->YearLable);
			this->Controls->Add(this->HouseNameLable);
			this->Controls->Add(this->HouseLable);
			this->Controls->Add(this->AuthorNameLable);
			this->Controls->Add(this->AuthorLable);
			this->Controls->Add(this->BookNameLable);
			this->Controls->Add(this->BookLable);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->OK_Button);
			this->Controls->Add(this->AuthorTextBox);
			this->Controls->Add(this->BookNameTextBox);
			this->Name = L"FindBook";
			this->Text = L"FindBook";
			this->Load += gcnew System::EventHandler(this, &FindBook::FindBook_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Поиск заданной книги
int FindBookFunc()
{
	book Book;//объект класса книга
	FILE* Books;//указатель для файла с информацией о книгах
	System::String^ str;//строка
	publishing_house* pBASE;//указатель базового класса
	pBASE = &Book;//работаем с методами класса книга
	wchar_t Book_Name[256];//название книги
	wchar_t Author[40];//фио автора
	//очистка массивов
	memset(Book_Name, 0, sizeof(wchar_t) * 256);
	memset(Author, 0, sizeof(wchar_t) * 40);
	//проверка корректности ввода
	if ((BookNameTextBox->Text->Length < 256) && (BookNameTextBox->Text->Length > 0))
	{
		for (int i = 0; i < BookNameTextBox->Text->Length; i++)
			Book_Name[i] = BookNameTextBox->Text->ToCharArray()[i];
	}
	else
	{
		MessageBox::Show("Некорректный ввод названия книги(Превышена длина или пустая строка)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		BookNameTextBox->Clear();
		return 3;
	}
	//проверка корректности ввода
	if ((AuthorTextBox->Text->Length < 40) && (AuthorTextBox->Text->Length > 0))
	{
		for (int i = 0; i < AuthorTextBox->Text->Length; i++)
			Author[i] = AuthorTextBox->Text->ToCharArray()[i];
	}
	else
	{
		MessageBox::Show("Некорректный ввод ФИО автора(Превышена длина или пустая строка)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		AuthorTextBox->Clear();
		return 4;
	}
	Books = fopen("Books.bin", "rb+");
	//проверка открытия файла
	if (Books == NULL)
	{
		MessageBox::Show("Не удалось открыть файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		return 1;
	}
	if (Book.BookSearch(Book_Name, Books, Author) == 1)//Ищем заданную книгу
	{
		MessageBox::Show("Книга не найдена", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
		fclose(Books);
		return 2;
	}
	//Вывод информации
	BookLable->Text = "Книга:"; BookNameLable->Text = BookNameTextBox->Text;
	AuthorLable->Text = "Автор:"; AuthorNameLable->Text = AuthorTextBox->Text;
	HouseLable->Text = "Издательство:"; str = gcnew String(Book.GetHouse_Name()); HouseNameLable->Text = str;
	CityLable->Text = "Город:"; str = gcnew String(Book.GetCity()); CityNameLable->Text = str;
	QuantityLable->Text = "Кол-во:"; QuantityNameLable->Text = Convert::ToString(Book.GetQuantity());
	YearLable->Text = "Год издания:"; YearNameLable->Text = Convert::ToString(Book.GetYear());
	if (Book.IsAvailable())//Проверяем ее наличие
		str = gcnew String("Книга доступна");
	else
		str = gcnew String("Книга не доступна");
	AvailableLable->Text = str;
	Book.~book();
	fclose(Books);
	return 0;
}
//при нажатии кнопки ОК
private: System::Void OK_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	//очитска выводных полей
	BookNameLable->Text = "";
	AuthorNameLable->Text = "";
	HouseNameLable->Text = "";
	QuantityNameLable->Text = "";
	CityNameLable->Text = "";
	YearNameLable->Text = "";
	switch (FindBookFunc())
	{
	case 1: exit(1);//ошибка работы с файлом
	//ошибки ввода информации
	case 2:break;
	case 3:break;
	case 4:break;
	}

}
		 //при загрузке формы
private: System::Void FindBook_Load(System::Object^ sender, System::EventArgs^ e) {
	//очистка полей для ввода
	AuthorTextBox->Clear();
	BookNameTextBox->Clear();
}

};
}
