// class 3.cpp : Defines the entry point for the console application.
//

/*Программа демонстрирует работу со статическими данными и функциями.
  Кроме того, используются дружественные функции.
  Важная инфа по работе со счётчиком объектов.*/

#include "stdafx.h"
#include "iostream.h"

class SomeObject
{
	static bool copy_present;
	static int copies_count;
public:
	SomeObject() {++copies_count; if(copies_count==1) copy_present=true; cout << "constr" << endl;}
	~SomeObject() {--copies_count; if(copies_count==0) copy_present=false; cout << "destr" << endl;}
	
	friend int csizeof_bool(SomeObject* obj);
	friend int csizeof_int(SomeObject* obj);

	bool get_copy_present() {return copy_present;}				//ОБЫЧНЫЕ реализации
	int get_copies_count() {return copies_count;}				//		функций
	static bool st_get_copy_present() {return copy_present;}	//СТАТИЧЕСКИЕ реализации
	static int st_get_copies_count() {return copies_count;}		//		функций
};

bool SomeObject::copy_present=false;	//Статические данные нужно не только 
int SomeObject::copies_count=0;			//объявить, но и определить!!!

int csizeof_bool(SomeObject* obj) {return sizeof((*obj).copy_present);}
int csizeof_int(SomeObject* obj) {return sizeof((*obj).copies_count);}

void main(int argc, char* argv[])
{

/*Нормальными функциями здась пользоваться нельзя так как ещё нет объектов класса.*/
	cout << "STATIC:" << " ";
	cout << "Number of copies is " << SomeObject::st_get_copies_count() << ". ";
	if(SomeObject::st_get_copy_present()) cout << "copies present";
	else cout << "No copies present";
	cout << endl << endl;

/*А здесь работают обе реализации функций.*/
	SomeObject a;
	SomeObject* SO_arr_ptr=new SomeObject[2];

/*ПОЧЕМУ СЛЕДУЮЩИЕ Ф-ИИ ВЫДАЮТ ИМЕННО _1_ ???*/
	cout << "Size of _SomeObject_ is: " << sizeof(SomeObject) << endl;
	cout << "Size of dinamic _SomeObject_ is: " << sizeof(*SO_arr_ptr) << endl;

/*ПРАВИЛО: В качестве параметров ф-ии посылать ИСКЛЮЧИТЕЛЬНО УКАЗАТЕЛИ на
  объекты класса.
  Если, например, заменить далее вызов по указателю обычным вызовом 
  (по значению), то понадобится определять конструктор копии, в котором увеличивать
  счётчик. Вызов деструкторов и ,соотв, уменьшение счётчика произойдёт автоматически.
  В промежуток времени, когда работает функция, счётчик будет показывать 
  неверное значение.*/
	cout << "Size of _static bool copy_present_ is: " << csizeof_bool(&a) << endl;
	cout << "Size of _static int copies_count_ is: " << csizeof_int(&a) << endl << endl;

	cout << "NORMAL:" << " ";
	cout << "Number of copies is " << a.get_copies_count() << ". ";
	if(a.get_copy_present()) cout << "copies present";
	else cout << "No copies present";
	cout << endl;

	cout << "STATIC:" << " ";
	cout << "Number of copies is " << SomeObject::st_get_copies_count() << ". ";
	if(SomeObject::st_get_copy_present()) cout << "copies present";
	else cout << "No copies present";
	cout << endl << endl;

	delete[] SO_arr_ptr;

	cout << "NORMAL:" << " ";
	cout << "Number of copies is " << a.get_copies_count() << ". ";
	if(a.get_copy_present()) cout << "copies present";
	else cout << "No copies present";
	cout << endl;

	cout << "STATIC:" << " ";
	cout << "Number of copies is " << SomeObject::st_get_copies_count() << ". ";
	if(SomeObject::st_get_copy_present()) cout << "copies present";
	else cout << "No copies present";
	cout << endl << endl;
}
