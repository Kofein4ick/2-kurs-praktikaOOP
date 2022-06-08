#pragma once
#include <time.h>
#include <iostream>
#include <cwchar>


class publishing_house//Класс издательство
{
protected:
	wchar_t House_Name[256];//Название издательства
	wchar_t City[60];//Город
	int Year;//Год издания
public:
	wchar_t* GetHouse_Name();//Получение названия издательства
	void SetHouse_Name(wchar_t* InHouse_Name);//Установка названия издательства
	wchar_t* GetCity();//Получение названия города
	void SetCity(wchar_t* InCity);//Установка названия города
	publishing_house();//конструктор
	virtual ~publishing_house();//деструктор
	void SetYear(int InYear);//Установка года
	int GetYear();//Получение года
	//чистые функции
	virtual int ReadFile(FILE* FNAME)=0;
	virtual int AddBook(FILE* FNAME)=0;
};
class book: public publishing_house//Класс книга
{
protected:
	wchar_t Book_Name[256];//название книги
	wchar_t Author[40];//фио автора
	int Quantity;//кол-во
	int BookCode;//код книги
	bool Available;//доступность
	void SetAvailable();//Установка доступности
public:
	wchar_t* GetBook_Name();//Получение названия
	void SetBook_Name(wchar_t* InBook_Name);//Установка названия
	wchar_t* GetAuthor();//Получение фио автора
	void SetAuthor(wchar_t* InAuthor);//Установка фио автора
	int GetQuantity();//Получение кол-ва книг
	void SetQuantity(int InQuantity);//Установка кол-ва
	int GetBookCode();//Получение кода книги
	void SetBookCode(int InBookCode);//Установка кода книги
	bool IsAvailable();//Проверка доступности
	int BookSearch(wchar_t* InBookName, FILE* FNAME, wchar_t* InAuthor);//Поиск заданной книги
	virtual int ReadFile(FILE* FNAME);//Чтение файла
	virtual int AddBook(FILE* FNAME);//Запись в файл
	book();//конструктор
	virtual ~book();//деструктор
};
class give_out : public book//Класс выдача
{
protected:

	int CodeReader;//код читателя
	tm Date_of_issued;//дата выдачи
	tm Delivery_date;//дата сдачи

public:
	int GetCodeReader();
	void SetCodeReader(int InCodeReader);
	tm GetDate_of_issued();
	void SetDate_of_issued(tm InDate_of_issued);
	tm GetDelivery_date();
	void SetDelivery_date(tm InDelivery_date);
	virtual int ReadFile(FILE* FNAME) override;
	virtual int AddBook(FILE* FNAME) override;
	give_out();
	virtual ~give_out();
};

class reader : public give_out
{
protected:
	wchar_t Name[40];//фио читателя
public:
	wchar_t* GetName();
	void SetName(wchar_t* InName);
	virtual int ReadFile(FILE* FNAME) override;
	virtual int AddBook(FILE* FNAME) override;
	reader();
	virtual ~reader();
};

