// pointer 7.cpp : Defines the entry point for the console application.
//

/*Программа доказала мне, что внутренее представление ссылок и указателей
  АБСОЛЮТНО АНАЛОГИЧНО. При пердаче через ссылку НИКАКИХ КОПИЙ НЕ ДЕЛАЕТСЯ!!!*/

#include "stdafx.h"
#include "iostream.h"

struct Test
{
	int* smth;
	Test(): smth((int*)&smth) 
		{cout << "Constr" << endl;}
	Test(Test& _obj): smth((int*)&smth)				//На всякий случай 
		{cout << "Copy constr (REF)" << endl;}		//приготовлены разные 
	Test(Test* _obj): smth((int*)&smth)				//конструкторы
		{cout << "Copy constr (PTR)" << endl;}		//копирования.
	~Test() {cout << "Destr" << endl;}			
};

void Print(Test _obj) {cout << _obj.smth << endl;}
void Print(Test& _obj, bool _extent) {cout << _obj.smth << endl;}
void Print(Test* _obj) {cout << (*_obj).smth << endl;}


void main(int argc, char* argv[])
{
	Test obj1;
	Print(obj1);
	Print(obj1, true);
	Print(&obj1);
}
