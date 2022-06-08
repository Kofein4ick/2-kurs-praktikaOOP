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
	/// Сводка для BooksList
	/// </summary>
public ref class BooksList : public System::Windows::Forms::Form
{
public:
	BooksList(void)
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
	~BooksList()
	{
		if (components)
		{
			delete components;
		}
	}
private: System::Windows::Forms::ListView^ BooksListList;
protected:
private: System::Windows::Forms::ColumnHeader^ columnAuthor;
private: System::Windows::Forms::ColumnHeader^ columnBookName;
private: System::Windows::Forms::ColumnHeader^ columnPublishing;
private: System::Windows::Forms::ColumnHeader^ columnYear;
private: System::Windows::Forms::ColumnHeader^ columnQuantity;

private:
	/// <summary>
	/// Обязательная переменная конструктора.
	/// </summary>
	System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	/// <summary>
	/// Требуемый метод для поддержки конструктора — не изменяйте 
	/// содержимое этого метода с помощью редактора кода.
	/// </summary>
	void InitializeComponent(void)
	{
		this->BooksListList = (gcnew System::Windows::Forms::ListView());
		this->columnAuthor = (gcnew System::Windows::Forms::ColumnHeader());
		this->columnBookName = (gcnew System::Windows::Forms::ColumnHeader());
		this->columnPublishing = (gcnew System::Windows::Forms::ColumnHeader());
		this->columnYear = (gcnew System::Windows::Forms::ColumnHeader());
		this->columnQuantity = (gcnew System::Windows::Forms::ColumnHeader());
		this->SuspendLayout();
		// 
		// BooksListList
		// 
		this->BooksListList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
			this->columnAuthor,
				this->columnBookName, this->columnPublishing, this->columnYear, this->columnQuantity
		});
		this->BooksListList->Location = System::Drawing::Point(12, 12);
		this->BooksListList->Name = L"BooksListList";
		this->BooksListList->Size = System::Drawing::Size(780, 457);
		this->BooksListList->TabIndex = 0;
		this->BooksListList->UseCompatibleStateImageBehavior = false;
		this->BooksListList->View = System::Windows::Forms::View::Details;
		// 
		// columnAuthor
		// 
		this->columnAuthor->Text = L"Автор";
		this->columnAuthor->Width = 161;
		// 
		// columnBookName
		// 
		this->columnBookName->Text = L"Название";
		this->columnBookName->Width = 259;
		// 
		// columnPublishing
		// 
		this->columnPublishing->Text = L"Издатель";
		this->columnPublishing->Width = 167;
		// 
		// columnYear
		// 
		this->columnYear->Text = L"Год издания";
		this->columnYear->Width = 97;
		// 
		// columnQuantity
		// 
		this->columnQuantity->Text = L"Количество";
		this->columnQuantity->Width = 93;
		// 
		// BooksList
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(804, 481);
		this->Controls->Add(this->BooksListList);
		this->Name = L"BooksList";
		this->Text = L"BooksList";
		this->Load += gcnew System::EventHandler(this, &BooksList::BooksList_Load);
		this->ResumeLayout(false);

	}
	
#pragma endregion
int ListBook()
{
	String^ str;//строка
	book Book;//объект класса книга
	FILE* Books;//указатель для файла с информацией о книгах
	publishing_house* pBASE;//указатель базового класса
	pBASE = &Book;//работаем с методами класса книга
	Books = fopen("Books.bin", "rb+");
	if (Books == NULL)//проверка открытия файла
	{
		MessageBox::Show("Не удалось открыть файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		return 1;
	}
	if (pBASE->ReadFile(Books) != 0)//Считываем файл
	{
		MessageBox::Show("Книг нет", "Предупреждение", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Warning);
		fclose(Books);
		return 2;
	}
	//создаем элементы списка
	ListViewItem^ item1 = gcnew ListViewItem();
	ListViewItem::ListViewSubItem^ subitem2 = gcnew ListViewItem::ListViewSubItem();
	ListViewItem::ListViewSubItem^ subitem3 = gcnew ListViewItem::ListViewSubItem();
	ListViewItem::ListViewSubItem^ subitem4 = gcnew ListViewItem::ListViewSubItem();
	ListViewItem::ListViewSubItem^ subitem5 = gcnew ListViewItem::ListViewSubItem();
	//заполняем элементы
	str = gcnew String(Book.GetAuthor());
	item1->Text = str;
	str = gcnew String(Book.GetBook_Name());
	subitem2->Text = str;
	str = gcnew String(Book.GetHouse_Name());
	subitem3->Text = str;
	subitem4->Text = Convert::ToString(Book.GetYear());
	subitem5->Text = Convert::ToString(Book.GetQuantity());
	//добавляем элменты в список
	item1->SubItems->Add(subitem2);
	item1->SubItems->Add(subitem3);
	item1->SubItems->Add(subitem4);
	item1->SubItems->Add(subitem5);
	BooksListList->Items->Add(item1);
	while (pBASE->ReadFile(Books) == 0)//считываем файл до конца
	{
		//создаем элементы списка
		ListViewItem^ item1 = gcnew ListViewItem();
		ListViewItem::ListViewSubItem^ subitem2 = gcnew ListViewItem::ListViewSubItem();
		ListViewItem::ListViewSubItem^ subitem3 = gcnew ListViewItem::ListViewSubItem();
		ListViewItem::ListViewSubItem^ subitem4 = gcnew ListViewItem::ListViewSubItem();
		ListViewItem::ListViewSubItem^ subitem5 = gcnew ListViewItem::ListViewSubItem();
		//заполняем элементы
		str = gcnew String(Book.GetAuthor());
		item1->Text = str;
		str = gcnew String(Book.GetBook_Name());
		subitem2->Text = str;
		str = gcnew String(Book.GetHouse_Name());
		subitem3->Text = str;
		subitem4->Text = Convert::ToString(Book.GetYear());
		subitem5->Text = Convert::ToString(Book.GetQuantity());
		//добавляем элменты в список
		item1->SubItems->Add(subitem2);
		item1->SubItems->Add(subitem3);
		item1->SubItems->Add(subitem4);
		item1->SubItems->Add(subitem5);
		BooksListList->Items->Add(item1);
	}
	fclose(Books);
	Book.~book();
	return 0;
}
//при загрузке формы
private: System::Void BooksList_Load(System::Object^ sender, System::EventArgs^ e) {
	switch (ListBook())
	{
	case 1: {BooksList::Close(); exit(1); }//ошибка открытия файла
	case 2: {BooksList::Close(); break; }//файл пуст
	}
}
};
}
