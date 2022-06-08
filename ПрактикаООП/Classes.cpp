#pragma once
#include "Classes.h"

//class "publishing_house"
wchar_t* publishing_house::GetHouse_Name()//Получение названия издательства
{
	return (House_Name);
}
void publishing_house::SetHouse_Name(wchar_t* InHouse_Name)//Установка названия издательства
{
	memset(House_Name, 0, sizeof(wchar_t) * 256);
	if (wcslen(InHouse_Name) <= 256)
		wcscpy(House_Name, InHouse_Name);
}
wchar_t* publishing_house::GetCity()//Получение названия города
{
	return (City);
}
void publishing_house::SetCity(wchar_t* InCity)//Установка названия города
{
	memset(City, 0,sizeof(wchar_t)*60);
	if (wcslen(InCity) <= 60)
		wcscpy(City, InCity);
}
publishing_house::publishing_house()//Конструктор
{
	memset(City, 0, sizeof(wchar_t) * 60);
	memset(House_Name, 0, sizeof(wchar_t) * 256);
	Year = 0;
}
publishing_house::~publishing_house() {};//Деструктор
void publishing_house::SetYear(int InYear)//Установка года издания
{
	Year = InYear;
}
int publishing_house::GetYear()//Получение года издания
{
	return Year;
}

//end of class "publishing_house"
//class "book"
wchar_t* book::GetBook_Name()//Получение названия книги
{
	return (Book_Name);
}
void book::SetBook_Name(wchar_t* InBook_Name)//Установка названия книги
{
	memset(Book_Name, 0, sizeof(wchar_t) * 256);
	if (wcslen(InBook_Name) <= 256)
		wcscpy(Book_Name, InBook_Name);
}
wchar_t* book::GetAuthor()//Получение имения автора
{
	return (Author);
}
void book::SetAuthor(wchar_t* InAuthor)//Установка имени автора
{
	memset(Author, 0, sizeof(wchar_t) * 40);
	if (wcslen(InAuthor) <= 40)
		wcscpy(Author, InAuthor);
}
int book::GetQuantity()//Получение кол-ва книг
{
	return (Quantity);
}
void book::SetQuantity(int InQuantity)//Установка кол-ва книг
{
	Quantity = InQuantity;
}
int book::GetBookCode()//Получение кода книги
{
	return (BookCode);
}
void book::SetBookCode(int InBookCode)//Установка кода книги
{
	BookCode = InBookCode;
}
bool book::IsAvailable()//Получение информации о доступности
{
	return Available;
}
void book::SetAvailable()//Установка доступности
{
	if (Quantity > 0)
		Available = true;
	else
		Available = false;
}
int book::BookSearch(wchar_t* InBookName,FILE* FNAME, wchar_t* InAuthor )//Поиск запрошенной книги
{
	bool flag = false;
	while(this->ReadFile(FNAME) == 0)
		if ((wcscmp(this->Author,InAuthor)==0)&&(wcscmp(this->Book_Name, InBookName) == 0))
		{
			flag = true;
			break;
		}
	if (flag) 
	{ 
		this->SetAvailable();
		return 0; 
	}
	return 1;
}
int book::ReadFile(FILE* FNAME)//Чтение файла
{
	if ((fread(&this->BookCode, sizeof(int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 1;
	if ((fread(this->Book_Name, sizeof(wchar_t), 256, FNAME) != 256) && (fflush(FNAME) != EOF))
		return 2;
	if ((fread(this->Author, sizeof(wchar_t), 40, FNAME) != 40) && (fflush(FNAME) != EOF))
		return 3;
	if ((fread(this->House_Name, sizeof(wchar_t), 256, FNAME) != 256) && (fflush(FNAME) != EOF))
		return 4;
	if ((fread(this->City, sizeof(wchar_t), 60, FNAME) != 60) && (fflush(FNAME) != EOF))
		return 5;
	if ((fread(&this->Year, sizeof(int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 6;
	if ((fread(&this->Quantity, sizeof(int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 7;
	return 0;
}

int book::AddBook(FILE* FNAME)//Запись в файл
{
	if ((fwrite(&this->BookCode, sizeof(int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 1;
	if ((fwrite(this->Book_Name, sizeof(wchar_t), 256, FNAME) != 256) && (fflush(FNAME) != EOF))
		return 2;
	if ((fwrite(this->Author, sizeof(wchar_t), 40, FNAME) != 40) && (fflush(FNAME) != EOF))
		return 3;
	if ((fwrite(this->House_Name, sizeof(wchar_t), 256, FNAME) != 256) && (fflush(FNAME) != EOF))
		return 4;
	if ((fwrite(this->City, sizeof(wchar_t), 60, FNAME) != 60) && (fflush(FNAME) != EOF))
		return 5;
	if ((fwrite(&this->Year, sizeof(int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 6;
	if ((fwrite(&this->Quantity, sizeof(int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 7;
	return 0;
}
book::book() : publishing_house()//Конструктор
{
	memset(Book_Name, '\0', sizeof(wchar_t) * 256);
	memset(Author, '\0', sizeof(wchar_t) * 40);
	Quantity = 0;
	BookCode = 0;
	Available = false;
}
book::~book() {};//Деструктор
//end of class "book"

//class "give_out"
int give_out::GetCodeReader()//Получение кода читателя
{
	return (CodeReader);
}
void give_out::SetCodeReader(int InCodeReader)//Установка кода читателя
{
	CodeReader = InCodeReader;
}
tm give_out::GetDate_of_issued()//Получение даты выдачи
{
	return (Date_of_issued);
}
void give_out::SetDate_of_issued(tm InDate_of_issued)//Установка даты выдачи
{
	Date_of_issued = InDate_of_issued;
}
tm give_out::GetDelivery_date()//Получение даты сдачи
{
	return (Delivery_date);
}
void give_out::SetDelivery_date(tm InDelivery_date)//Установка даты сдачи
{
	Delivery_date = InDelivery_date;
}
give_out::give_out() : book()//Конструктор
{
	CodeReader = 0;
	Date_of_issued.tm_mday=0;
	Date_of_issued.tm_mon = 0;
	Date_of_issued.tm_year = 0;
	Delivery_date.tm_mday = 0;
	Delivery_date.tm_mon = 0;
	Delivery_date.tm_year = 0;
}

int give_out::ReadFile(FILE* FNAME)//Чтение файла
{
	if ((fread(&this->CodeReader, sizeof(int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 6;
	if ((fread(&this->Date_of_issued, sizeof(tm), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 7;
	if ((fread(&this->Delivery_date, sizeof(tm), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 8;
	if ((fread(&this->BookCode, sizeof(int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 10;
	return 0;
}

int give_out::AddBook(FILE* FNAME)//Запись в файл
{
	if ((fwrite(&this->CodeReader, sizeof(int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 11;
	if ((fwrite(&this->Date_of_issued, sizeof(tm), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 12;
	if ((fwrite(&this->Delivery_date, sizeof(tm), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 13;
	if ((fwrite(&this->BookCode, sizeof(int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 15;
	return 0;
}
give_out::~give_out() {};//Деструктор
//end of class "give_out"

//class "reader"
wchar_t* reader::GetName()//Получение ФИО читателя
{
	return(Name);
}
void reader::SetName(wchar_t* InName)//Установка ФИО читателя
{
	memset(Name, 0, sizeof(wchar_t) * 40);
	if (wcslen(InName) <= 40)
		wcscpy(Name, InName);
}

int reader::ReadFile(FILE* FNAME)//Чтение файла
{
	if ((fread(&this->CodeReader, sizeof(int), 1, FNAME) != 1)&&(fflush(FNAME)!=EOF))
		return 17;
	if ((fread(this->Name, sizeof(wchar_t), 40, FNAME) != 40)&&(fflush(FNAME)!=EOF))
		return 16;
	return 0;
}

int reader::AddBook(FILE* FNAME)//Запись в файл
{
	if ((fwrite(&this->CodeReader, sizeof(int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 19;

	if ((fwrite(this->Name, sizeof(wchar_t), 40, FNAME) != 40) && (fflush(FNAME) != EOF))
		return 18;

	return 0;
}
reader::reader():give_out()
{
	memset(Name, 0, sizeof(wchar_t) * 40);
}
reader::~reader() {};
//end of class "reader"

