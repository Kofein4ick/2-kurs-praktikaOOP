#include "Forms.h"
#pragma once

namespace ПрактикаООП {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BooksListButton;
	protected:
	private: System::Windows::Forms::Button^ GiveOutButton;
	private: System::Windows::Forms::Button^ DeliveryButton;
	private: System::Windows::Forms::Button^ FindBadReaderButton;
	private: System::Windows::Forms::Button^ AddBookButton;
	private: System::Windows::Forms::Button^ ReadersListButton;
	private: System::Windows::Forms::Button^ FindReaderButton;
	private: System::Windows::Forms::Button^ FindBookButton;
	private: System::Windows::Forms::Button^ ClearFileButton;

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
			this->BooksListButton = (gcnew System::Windows::Forms::Button());
			this->GiveOutButton = (gcnew System::Windows::Forms::Button());
			this->DeliveryButton = (gcnew System::Windows::Forms::Button());
			this->FindBadReaderButton = (gcnew System::Windows::Forms::Button());
			this->AddBookButton = (gcnew System::Windows::Forms::Button());
			this->ReadersListButton = (gcnew System::Windows::Forms::Button());
			this->FindReaderButton = (gcnew System::Windows::Forms::Button());
			this->FindBookButton = (gcnew System::Windows::Forms::Button());
			this->ClearFileButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BooksListButton
			// 
			this->BooksListButton->Location = System::Drawing::Point(37, 40);
			this->BooksListButton->Name = L"BooksListButton";
			this->BooksListButton->Size = System::Drawing::Size(246, 43);
			this->BooksListButton->TabIndex = 0;
			this->BooksListButton->Text = L"Список книг";
			this->BooksListButton->UseVisualStyleBackColor = true;
			this->BooksListButton->Click += gcnew System::EventHandler(this, &MainForm::BooksListButton_Click);
			// 
			// GiveOutButton
			// 
			this->GiveOutButton->Location = System::Drawing::Point(38, 247);
			this->GiveOutButton->Name = L"GiveOutButton";
			this->GiveOutButton->Size = System::Drawing::Size(246, 43);
			this->GiveOutButton->TabIndex = 1;
			this->GiveOutButton->Text = L"Выдача книг";
			this->GiveOutButton->UseVisualStyleBackColor = true;
			this->GiveOutButton->Click += gcnew System::EventHandler(this, &MainForm::GiveOutButton_Click);
			// 
			// DeliveryButton
			// 
			this->DeliveryButton->Location = System::Drawing::Point(37, 313);
			this->DeliveryButton->Name = L"DeliveryButton";
			this->DeliveryButton->Size = System::Drawing::Size(246, 43);
			this->DeliveryButton->TabIndex = 2;
			this->DeliveryButton->Text = L"Сдача книг";
			this->DeliveryButton->UseVisualStyleBackColor = true;
			this->DeliveryButton->Click += gcnew System::EventHandler(this, &MainForm::DeliveryButton_Click);
			// 
			// FindBadReaderButton
			// 
			this->FindBadReaderButton->Location = System::Drawing::Point(393, 180);
			this->FindBadReaderButton->Name = L"FindBadReaderButton";
			this->FindBadReaderButton->Size = System::Drawing::Size(246, 43);
			this->FindBadReaderButton->TabIndex = 3;
			this->FindBadReaderButton->Text = L"Поиск читателей-должников";
			this->FindBadReaderButton->UseVisualStyleBackColor = true;
			this->FindBadReaderButton->Click += gcnew System::EventHandler(this, &MainForm::FindBadReaderButton_Click);
			// 
			// AddBookButton
			// 
			this->AddBookButton->Location = System::Drawing::Point(38, 180);
			this->AddBookButton->Name = L"AddBookButton";
			this->AddBookButton->Size = System::Drawing::Size(246, 43);
			this->AddBookButton->TabIndex = 4;
			this->AddBookButton->Text = L"Добавить книгу";
			this->AddBookButton->UseVisualStyleBackColor = true;
			this->AddBookButton->Click += gcnew System::EventHandler(this, &MainForm::AddBookButton_Click);
			// 
			// ReadersListButton
			// 
			this->ReadersListButton->Location = System::Drawing::Point(393, 40);
			this->ReadersListButton->Name = L"ReadersListButton";
			this->ReadersListButton->Size = System::Drawing::Size(246, 43);
			this->ReadersListButton->TabIndex = 5;
			this->ReadersListButton->Text = L"Список читателй";
			this->ReadersListButton->UseVisualStyleBackColor = true;
			this->ReadersListButton->Click += gcnew System::EventHandler(this, &MainForm::ReadersListButton_Click);
			// 
			// FindReaderButton
			// 
			this->FindReaderButton->Location = System::Drawing::Point(393, 106);
			this->FindReaderButton->Name = L"FindReaderButton";
			this->FindReaderButton->Size = System::Drawing::Size(246, 43);
			this->FindReaderButton->TabIndex = 6;
			this->FindReaderButton->Text = L"Поиск читателя";
			this->FindReaderButton->UseVisualStyleBackColor = true;
			this->FindReaderButton->Click += gcnew System::EventHandler(this, &MainForm::FindReaderButton_Click);
			// 
			// FindBookButton
			// 
			this->FindBookButton->Location = System::Drawing::Point(38, 106);
			this->FindBookButton->Name = L"FindBookButton";
			this->FindBookButton->Size = System::Drawing::Size(246, 43);
			this->FindBookButton->TabIndex = 7;
			this->FindBookButton->Text = L"Поиск книги";
			this->FindBookButton->UseVisualStyleBackColor = true;
			this->FindBookButton->Click += gcnew System::EventHandler(this, &MainForm::FindBookButton_Click);
			// 
			// ClearFileButton
			// 
			this->ClearFileButton->Location = System::Drawing::Point(393, 247);
			this->ClearFileButton->Name = L"ClearFileButton";
			this->ClearFileButton->Size = System::Drawing::Size(245, 42);
			this->ClearFileButton->TabIndex = 8;
			this->ClearFileButton->Text = L"Очистка файлов";
			this->ClearFileButton->UseVisualStyleBackColor = true;
			this->ClearFileButton->Click += gcnew System::EventHandler(this, &MainForm::ClearFileButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 408);
			this->Controls->Add(this->ClearFileButton);
			this->Controls->Add(this->FindBookButton);
			this->Controls->Add(this->FindReaderButton);
			this->Controls->Add(this->ReadersListButton);
			this->Controls->Add(this->AddBookButton);
			this->Controls->Add(this->FindBadReaderButton);
			this->Controls->Add(this->DeliveryButton);
			this->Controls->Add(this->GiveOutButton);
			this->Controls->Add(this->BooksListButton);
			this->Name = L"MainForm";
			this->Text = L"ИС \"Библиотека\"";
			this->ResumeLayout(false);

		}
#pragma endregion
//Вывод списка книг	
private: System::Void BooksListButton_Click(System::Object^ sender, System::EventArgs^ e) {
	BooksList^ BookList;
	BookList = gcnew BooksList();
	BookList->Show();
}
//Добавить книгу
private: System::Void AddBookButton_Click(System::Object^ sender, System::EventArgs^ e) {
	AddBook^ Addbook = gcnew AddBook();
	Addbook->ShowDialog();
}
//Очистка файлов
private: System::Void ClearFileButton_Click(System::Object^ sender, System::EventArgs^ e) {
	FILE* Clear;
	Clear = fopen("Books.bin", "wb+");
	if (Clear == NULL)
	{
		MessageBox::Show("Не удалось открыть файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		exit (1);
	}
	fclose(Clear);
	Clear = fopen("Give_Out.bin", "wb+");
	if (Clear == NULL)
	{
		MessageBox::Show("Не удалось открыть файл Give_Out.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		exit(2);
	}
	fclose(Clear);
	Clear = fopen("Readers.bin", "wb+");
	if (Clear == NULL)
	{
		MessageBox::Show("Не удалось открыть файл Readers.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		exit(3);
	}
	fclose(Clear);
	MessageBox::Show("Файлы успешно очищены", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
}
//Поиск книги
private: System::Void FindBookButton_Click(System::Object^ sender, System::EventArgs^ e) {
	FindBook^ findbook = gcnew FindBook();
	findbook->ShowDialog();
}
//Выдача книг
private: System::Void GiveOutButton_Click(System::Object^ sender, System::EventArgs^ e) {
	GiveOut^ giveout = gcnew GiveOut();
	giveout->ShowDialog();
}
//Сдача книг
private: System::Void DeliveryButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Deliver^ delivery = gcnew Deliver();
	delivery->ShowDialog();
}
//Поиск читателя
private: System::Void FindReaderButton_Click(System::Object^ sender, System::EventArgs^ e) {
	FindReader^ finde = gcnew FindReader();
	finde->ShowDialog();
}
//Список читателей
private: System::Void ReadersListButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ReadersList^ otdyh = gcnew ReadersList();
	otdyh->Show();
}
//Поиск должников
private: System::Void FindBadReaderButton_Click(System::Object^ sender, System::EventArgs^ e) {
	FindBadReader^ f = gcnew FindBadReader();
	f->Show();
}
};
}
