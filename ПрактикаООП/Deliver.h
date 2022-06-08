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
	/// Сводка для Deliver
	/// </summary>
	public ref class Deliver : public System::Windows::Forms::Form
	{
	public:
		Deliver(void)
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
		~Deliver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::TextBox^ ReaderNameTextBox;
	private: System::Windows::Forms::Button^ OK_Button;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ AuthroTextBox;
	private: System::Windows::Forms::TextBox^ BookNameTextBox;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ReaderNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->OK_Button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AuthroTextBox = (gcnew System::Windows::Forms::TextBox());
			this->BookNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 17);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Введите ФИО читателя";
			// 
			// ReaderNameTextBox
			// 
			this->ReaderNameTextBox->Location = System::Drawing::Point(258, 118);
			this->ReaderNameTextBox->Name = L"ReaderNameTextBox";
			this->ReaderNameTextBox->Size = System::Drawing::Size(409, 22);
			this->ReaderNameTextBox->TabIndex = 9;
			// 
			// OK_Button
			// 
			this->OK_Button->Location = System::Drawing::Point(552, 173);
			this->OK_Button->Name = L"OK_Button";
			this->OK_Button->Size = System::Drawing::Size(114, 32);
			this->OK_Button->TabIndex = 11;
			this->OK_Button->Text = L"OK";
			this->OK_Button->UseVisualStyleBackColor = true;
			this->OK_Button->Click += gcnew System::EventHandler(this, &Deliver::OK_Button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Введите ФИО автора";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Введите название книги";
			// 
			// AuthroTextBox
			// 
			this->AuthroTextBox->Location = System::Drawing::Point(258, 33);
			this->AuthroTextBox->Name = L"AuthroTextBox";
			this->AuthroTextBox->Size = System::Drawing::Size(408, 22);
			this->AuthroTextBox->TabIndex = 7;
			// 
			// BookNameTextBox
			// 
			this->BookNameTextBox->Location = System::Drawing::Point(258, 76);
			this->BookNameTextBox->Name = L"BookNameTextBox";
			this->BookNameTextBox->Size = System::Drawing::Size(408, 22);
			this->BookNameTextBox->TabIndex = 8;
			// 
			// Deliver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(679, 221);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ReaderNameTextBox);
			this->Controls->Add(this->OK_Button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->AuthroTextBox);
			this->Controls->Add(this->BookNameTextBox);
			this->Name = L"Deliver";
			this->Text = L"Сдача книги";
			this->Load += gcnew System::EventHandler(this, &Deliver::Deliver_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int DeliveryFunc()
		{
			reader Reader;//объект класса читатель
			give_out give_Out;//объект класса выдача
			book Book;//объект класса книга
			publishing_house* pBASE;//указатель базового класса
			FILE* Books;//указатель для файла с информацией о книгах
			FILE* Readers;//указатель для файла с информацией о читателях
			FILE* Give_Out;//указатель для файла с информацией о выдачи
			int BookCode;//код книги
			int ReaderCode;//код читателя
			wchar_t Book_Name[256];//название книги
			wchar_t Author[40];//фио автора
			wchar_t Reader_Name[40];//фио читателя
			//очистка массивов
			memset(Book_Name, 0, sizeof(wchar_t) * 256);
			memset(Author, 0, sizeof(wchar_t) * 40);
			memset(Reader_Name, 0, sizeof(wchar_t) * 40);
			unsigned short count = 0;//счётчик кол-ва взятых книг
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
				return 1;
			}
			//проверка корректности ввода
			if ((AuthroTextBox->Text->Length < 40) && (AuthroTextBox->Text->Length > 0))
			{
				for (int i = 0; i < AuthroTextBox->Text->Length; i++)
					Author[i] = AuthroTextBox->Text->ToCharArray()[i];
			}
			else
			{
				MessageBox::Show("Некорректный ввод ФИО автора(Превышена длина или пустая строка)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				AuthroTextBox->Clear();
				return 2;
			}
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
				return 3;
			}

			Books = fopen("Books.bin", "rb+");
			if (Books == NULL)//проверка открытия файла
			{
				MessageBox::Show("Не удалось открыть файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return 4;
			}
			Give_Out = fopen("Give_Out.bin", "rb+");
			if (Give_Out == NULL)//проверка открытия файла
			{
				MessageBox::Show("Не удалось открыть файл Give_Out.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				fclose(Books);
				return 5;
			}
			Readers = fopen("Readers.bin", "rb+");
			if (Readers == NULL)//проверка открытия файла
			{
				MessageBox::Show("Не удалось открыть файл Readers.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				fclose(Books);
				fclose(Give_Out);
				return 6;
			}
			bool flag = 0;
			pBASE = &Reader;//работаем с методами класса читатель
			while (pBASE->ReadFile(Readers) == 0)//Ищем заданного читателя
				if (wcscmp(Reader_Name, Reader.GetName()) == 0)//сравнение строк
				{
					flag = 1;
					break;
				}
			if (flag == 0)//Если записей о читателе нет
			{
				MessageBox::Show("Запрошенный читатель не найден", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
				return 7;
			}
			ReaderCode = Reader.GetCodeReader();
			pBASE = &Book;//работаем с методами класса книга

			if (Book.BookSearch(Book_Name, Books, Author) != 0)//Ищем заданну книгу
			{
				MessageBox::Show("Запрошенной книги нет в библиотеке", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
				return 8;
			}
			BookCode = Book.GetBookCode();
			pBASE = &give_Out;//работаем с методами класса выдача
			flag = 0;
			while (pBASE->ReadFile(Give_Out) == 0)//Проверяем брал ли читатель заданную книгу
				if ((BookCode == give_Out.GetBookCode()) && (ReaderCode == give_Out.GetCodeReader()))
				{
					flag = 1;
					break;
				}
			if (flag == 0)
			{
				MessageBox::Show("Запрошенный читатель не брал данную книгу", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
				return 9;
			}
			fclose(Give_Out);
			fclose(Books);
			fclose(Readers);
			//Обновляем информацию во всех 3х файлах с помощью вспомогательного файла Temp
			//Файл Give_Out
			FILE* Temp;
			Temp = fopen("Temp.bin", "wb+");
			if (Temp == NULL)
			{
				MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return 10;
			}
			Give_Out = fopen("Give_Out.bin", "rb+");
			if (Give_Out == NULL)
			{
				MessageBox::Show("Не удалось открыть файл Give_Out.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				fclose(Temp);
				remove("Temp.bin");
				return 11;
			}
			while (pBASE->ReadFile(Give_Out) == 0)
			{
				if ((BookCode == give_Out.GetBookCode()) && (ReaderCode == give_Out.GetCodeReader()))
					continue;
				if (pBASE->AddBook(Temp) != 0)
				{
					MessageBox::Show("Ошибка записи в Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
					fclose(Temp);
					fclose(Give_Out);
					remove("Temp.bin");
					return 12;
				}
			}
			fclose(Give_Out);
			fclose(Temp);
			Temp = fopen("Temp.bin", "rb+");
			if (Temp == NULL)
			{
				MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return 13;
			}
			Give_Out = fopen("Give_Out.bin", "wb+");
			if (Give_Out == NULL)
			{
				MessageBox::Show("Не удалось открыть файл Give_Out.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				fclose(Temp);
				remove("Temp.bin");
				return 14;
			}
			while (pBASE->ReadFile(Temp) == 0)
			{
				if (pBASE->AddBook(Give_Out) != 0)
				{
					MessageBox::Show("Ошибка записи в Give_Out.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
					fclose(Temp);
					fclose(Give_Out);
					remove("Temp.bin");
					return 15;
				}
			}

			fclose(Temp);
			fclose(Give_Out);
			Give_Out = fopen("Give_Out.bin", "rb+");
			if (Give_Out == NULL)
			{
				MessageBox::Show("Не удалось открыть файл Give_Out.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return 16;
			}
			while (pBASE->ReadFile(Give_Out) == 0)
				if (ReaderCode == give_Out.GetCodeReader())
					count++;
			fclose(Give_Out);
			//Конец обновления файла Give_Out
			//Обновление файла Readers, его обновляем в том случае, если заданный читатель сдал все книги
			if (count == 0)
			{
				pBASE = &Reader;
				Temp = fopen("Temp.bin", "wb+");
				if (Temp == NULL)
				{
					MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
					return 17;
				}
				Readers = fopen("Readers.bin", "rb+");
				if (Readers == NULL)
				{
					MessageBox::Show("Не удалось открыть файл Readers.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
					fclose(Temp);
					remove("Temp.bin");
					return 18;
				}
				while (pBASE->ReadFile(Readers) == 0)
				{
					if (ReaderCode == Reader.GetCodeReader())
						continue;
					if (pBASE->AddBook(Temp) != 0)
					{
						MessageBox::Show("Ошибка записи в Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
						fclose(Temp);
						fclose(Readers);
						remove("Temp.bin");
						return 19;
					}
				}
				fclose(Readers);
				fclose(Temp);
				Temp = fopen("Temp.bin", "rb+");
				if (Temp == NULL)
				{
					MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
					return 20;
				}
				Readers = fopen("Readers.bin", "wb+");
				if (Readers == NULL)
				{
					MessageBox::Show("Не удалось открыть файл Readers.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
					fclose(Temp);
					remove("Temp.bin");
					return 21;
				}
				while (pBASE->ReadFile(Temp) == 0)
				{
					if (pBASE->AddBook(Readers) != 0)
					{
						MessageBox::Show("Ошибка записи в Readers.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
						fclose(Temp);
						fclose(Readers);
						remove("Temp.bin");
						return 22;
					}
				}
				fclose(Temp);
				fclose(Readers);
			}
			//Конец обновления файла Readers
			//Обновление файла Books
			pBASE = &Book;
			Temp = fopen("Temp.bin", "wb+");
			if (Temp == NULL)
			{
				MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return 23;
			}
			Books = fopen("Books.bin", "rb+");
			if (Books == NULL)
			{
				MessageBox::Show("Не удалось открыть файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				fclose(Temp);
				remove("Temp.bin");
				return 24;
			}
			while (pBASE->ReadFile(Books) == 0)
			{
				if (Book.GetBookCode() == BookCode)
					Book.SetQuantity(Book.GetQuantity() + 1);
				if (pBASE->AddBook(Temp) != 0)
				{
					MessageBox::Show("Ошибка записи в Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
					fclose(Temp);
					fclose(Books);
					remove("Temp.bin");
					return 25;
				}
			}
			fclose(Books);
			fclose(Temp);
			Temp = fopen("Temp.bin", "rb+");
			if (Temp == NULL)
			{
				MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return 26;
			}
			Books = fopen("Books.bin", "wb+");
			if (Books == NULL)
			{
				MessageBox::Show("Не удалось открыть файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				fclose(Temp);
				remove("Temp.bin");
				return 27;
			}
			while (pBASE->ReadFile(Temp) == 0)
			{
				if (pBASE->AddBook(Books) != 0)
				{
					MessageBox::Show("Ошибка записи в Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
					fclose(Temp);
					fclose(Books);
					remove("Temp.bin");
					return 28;
				}
			}
			fclose(Temp);
			fclose(Books);
			//Конец обновления файла Books
			remove("Temp.bin");
			Book.~book();
			Reader.~reader();
			give_Out.~give_out();
			MessageBox::Show("Книга успешно сдана", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
			return 0;
		}
		//при загрузке формы
	private: System::Void Deliver_Load(System::Object^ sender, System::EventArgs^ e) {
		//очистка полей формы
		AuthroTextBox->Clear();
		BookNameTextBox->Clear();
		ReaderNameTextBox->Clear();
	}
	//по нажатию кнопки ОК
	private: System::Void OK_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (DeliveryFunc())
		{
		//некоректный ввод
		case 1:break;
		case 2:break;
		case 3:break;
		//ошибки, связанные с работой с файлами
		case 4:exit(4);
		case 5:exit(5);
		case 6:exit(6);
		case 7:break;//читатель не найден
		case 8:break;//книги нет в библиотеке
		case 9:break;//читатель не брал книгу
		//ошибки, связанные с работой с файлами
		case 10:exit(10);
		case 11:exit(11);
		case 12:exit(12);
		case 13:exit(13);
		case 14:exit(14);
		case 15:exit(15);
		case 16:exit(16);
		case 17:exit(17);
		case 18:exit(18);
		case 19:exit(19);
		case 20:exit(20);
		case 21:exit(21);
		case 22:exit(22);
		case 23:exit(23);
		case 24:exit(24);
		case 25:exit(25);
		case 26:exit(26);
		case 27:exit(27);
		case 28:exit(28);
		}
	}
	};
}
