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
	/// Сводка для GiveOut
	/// </summary>
	public ref class GiveOut : public System::Windows::Forms::Form
	{
	public:
		GiveOut(void)
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
		~GiveOut()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ BookNameTextBox;
	protected:
	private: System::Windows::Forms::TextBox^ AuthroTextBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ OK_Button;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ ReaderNameTextBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;




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
			this->AuthroTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->OK_Button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ReaderNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BookNameTextBox
			// 
			this->BookNameTextBox->Location = System::Drawing::Point(270, 74);
			this->BookNameTextBox->Name = L"BookNameTextBox";
			this->BookNameTextBox->Size = System::Drawing::Size(408, 22);
			this->BookNameTextBox->TabIndex = 1;
			// 
			// AuthroTextBox
			// 
			this->AuthroTextBox->Location = System::Drawing::Point(270, 31);
			this->AuthroTextBox->Name = L"AuthroTextBox";
			this->AuthroTextBox->Size = System::Drawing::Size(408, 22);
			this->AuthroTextBox->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите название книги";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите ФИО автора";
			// 
			// OK_Button
			// 
			this->OK_Button->Location = System::Drawing::Point(565, 249);
			this->OK_Button->Name = L"OK_Button";
			this->OK_Button->Size = System::Drawing::Size(114, 32);
			this->OK_Button->TabIndex = 3;
			this->OK_Button->Text = L"OK";
			this->OK_Button->UseVisualStyleBackColor = true;
			this->OK_Button->Click += gcnew System::EventHandler(this, &GiveOut::OK_Button_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Введите ФИО читателя";
			// 
			// ReaderNameTextBox
			// 
			this->ReaderNameTextBox->Location = System::Drawing::Point(270, 116);
			this->ReaderNameTextBox->Name = L"ReaderNameTextBox";
			this->ReaderNameTextBox->Size = System::Drawing::Size(409, 22);
			this->ReaderNameTextBox->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(267, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(267, 188);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 10;
			this->label7->Text = L"label7";
			// 
			// GiveOut
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 293);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ReaderNameTextBox);
			this->Controls->Add(this->OK_Button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->AuthroTextBox);
			this->Controls->Add(this->BookNameTextBox);
			this->Name = L"GiveOut";
			this->Text = L"Выдача";
			this->Load += gcnew System::EventHandler(this, &GiveOut::GiveOut_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//при загрузке формы
private: System::Void GiveOut_Load(System::Object^ sender, System::EventArgs^ e) {
	//очистка всех полей формы
	BookNameTextBox->Clear();
	AuthroTextBox->Clear();
	ReaderNameTextBox->Clear();
	label4->Text = "";
	label5->Text = "";
	label6->Text = "";
	label7->Text = "";
}
int GiveOutFunc()
{
	reader Reader;//объект класса читатель
	book Book;//объект класса книга
	FILE* Books;//указатель для файла с информацией о книгах
	publishing_house* pBASE;//указатель базового класса
	String^ str;//строка
	int BookCode = 0;//код книги
	int ReaderCode = 0;//код читателя
	wchar_t Book_Name[256];//название книги
	wchar_t Author[40];//автор
	//очитска массивов
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
		return 9;
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
		return 10;
	}

	Books = fopen("Books.bin", "rb+");
	if (Books == NULL)//проверка открытия файла
	{
		MessageBox::Show("Не удалось открыть файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		return 1;
	}
	if (Book.BookSearch(Book_Name, Books, Author) == 1)//Ищем книгу
	{
		MessageBox::Show("Книга не найдена", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
		fclose(Books);
		return 4;
	}
	else
		BookCode = Book.GetBookCode();//устанавливаем код
	fclose(Books);
	if (Book.IsAvailable())//Если в наличии(т.е. есть запись о ней и кол-во больше 0)
	{
		FILE* Readers;//указатель для файла с информацией о читателях
		FILE* Give_Out;//указатель для файла с информацией о выдаче
		give_out giveOut;//объект класса выдача
		wchar_t Reader_Name[40];//имя читателя
		memset(Reader_Name, 0, sizeof(wchar_t)*40);//очистка массива
		pBASE = &Reader;//работаем с методами класса читатель
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
			return 12;
		}
		Readers = fopen("Readers.bin", "rb+");
		if (Readers == NULL)//проверка открытия файла
		{
			MessageBox::Show("Не удалось открыть файл Readers.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			return 3;
		}
		bool flag = 0;//флаг
		while (pBASE->ReadFile(Readers) == 0)//Считываем файл читателей, проверяем на уникальность имени
			if (wcscmp(Reader.GetName(), Reader_Name) == 0)//сравнение строк
			{
				ReaderCode = Reader.GetCodeReader();//получение кода читателя
				flag = 1;
			}
		if (flag != 1)//если читатель не найден
		{
			ReaderCode = Reader.GetCodeReader() + 1;//увеличиваем значение кода
			Reader.SetCodeReader(ReaderCode);//устанавливаем код
			Reader.SetName(Reader_Name);//устанавливаем фио
			if (pBASE->AddBook(Readers) != 0)//Записываем в файл код и имя читателя
			{
				fclose(Readers);
				MessageBox::Show("Ошибка записи в Readers.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				fclose(Readers);
				return 13;
			}
		}
		Reader.~reader();
		fclose(Readers);
		Give_Out = fopen("Give_Out.bin", "ab+");
		if (Give_Out == NULL)
		{
			fclose(Books);
			MessageBox::Show("Не удалось открыть файл Give_out.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			return 2;
		}
		pBASE = &giveOut;//работаем с методами класса выдача
		//берем текущую дату
		time_t now = time(0);
		tm* gmtm = gmtime(&now);
		//gmtm->tm_mon = gmtm->tm_mon - 2;//установка просроченного срока
		//Устанавливаем дату выдачи и сдачи
		giveOut.SetDate_of_issued(*gmtm);
		gmtm->tm_mon = gmtm->tm_mon + 1;//+1 т.к. будем выдавать на 1 месяц
		if (gmtm->tm_mon == 12)//если книга выдается в конце года
		{
			gmtm->tm_year = gmtm->tm_year + 1;
			gmtm->tm_mon = 0;
		}
		giveOut.SetDelivery_date(*gmtm);//устанавливаем требуемую дату сдачи
		giveOut.SetCodeReader(ReaderCode);//записываем код читателя
		giveOut.SetBookCode(BookCode);//записываем код книги
		if (pBASE->AddBook(Give_Out) != 0)//Пишем в файл
		{
			fclose(Books);
			fclose(Give_Out);
			MessageBox::Show("Ошибка записи в Give_out.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			fclose(Give_Out);
			return 5;
		}
		fclose(Give_Out);
		//Обновление информации в файле Books.bin с помощью перезаписи в вспомогательный файла Temp
		FILE* Temp;
		pBASE = &Book;//работаем с методами класса книга
		Temp = fopen("Temp.bin", "wb+");
		if (Temp == NULL)
		{
			MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			return 6;
		}
		Books = fopen("Books.bin", "rb+");
		if (Books == NULL)
		{
			fclose(Temp);
			remove("Temp.bin");
			MessageBox::Show("Не удалось открыть файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			return 11;
		}
		while (pBASE->ReadFile(Books) == 0)
		{
			if (Book.GetBookCode() == BookCode)
				Book.SetQuantity(Book.GetQuantity() - 1);
			if (pBASE->AddBook(Temp) != 0)
			{
				fclose(Temp);
				fclose(Books);
				remove("Temp.bin");
				MessageBox::Show("Ошибка записи в файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return 7;
			}
		}
		fclose(Books);
		fclose(Temp);
		Temp = fopen("Temp.bin", "rb+");
		if (Temp == NULL)
		{
			MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			return 16;
		}
		Books = fopen("Books.bin", "wb+");
		if (Books == NULL)
		{
			fclose(Temp);
			remove("Temp.bin");
			MessageBox::Show("Не удалось открыть файл Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			return 21;
		}
		while (pBASE->ReadFile(Temp) == 0)
		{
			if (pBASE->AddBook(Books) != 0)
			{
				fclose(Temp);
				fclose(Books);
				remove("Temp.bin");
				MessageBox::Show("Ошибка записи в Books.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return 8;
			}
		}
		fclose(Temp);
		fclose(Books);
		//вывод информации в поля формы
		label4->Text = "Дата выдачи"; str = gcnew String(Convert::ToString(giveOut.GetDate_of_issued().tm_mday) + L"." + Convert::ToString(giveOut.GetDate_of_issued().tm_mon+1)+L"."+ Convert::ToString(giveOut.GetDate_of_issued().tm_year+1900));
		label5->Text = str;
		str = gcnew String(Convert::ToString(giveOut.GetDelivery_date().tm_mday) + L"." + Convert::ToString(giveOut.GetDelivery_date().tm_mon + 1) + L"." + Convert::ToString(giveOut.GetDelivery_date().tm_year + 1900));
		label6->Text = "Требуемая дата сдачи"; label7->Text = str;
		remove("Temp.bin");//удаление файла Temp.bin
		giveOut.~give_out();
		MessageBox::Show("Книга успешно выдана читателю", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
	}
	else
		MessageBox::Show("Данная книга недоступна", "Предупреждение", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Warning);
	Book.~book();
	return 0;
}

//по нажатию кнопки ОК
private: System::Void OK_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (GiveOutFunc())
	{
		//ошибки, связанные с файлами-выход из программы
	case 1:exit(1);
	case 2:exit(2);
	case 3:exit(3);
	case 4: {GiveOut::Close(); break; }
	case 5:exit(5);
	case 6:exit(6);
	case 7:exit(7);
	case 8:exit(8);
	case 9:break;//некорректный ввод названия книги
	case 10:break;//некорректный ввод фио автора
	case 11:exit(11);
	case 12:break;//некорректный ввод фио читателя
	case 13:exit(13);
	case 16:exit(16);
	case 21:exit(21);
	}
}
};
}
