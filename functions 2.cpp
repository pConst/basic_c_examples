// functions 2.cpp : Defines the entry point for the console application.
//

/*ѕрограмма демонстрирует ловкое жонглирование адресами и значени€ми.
  ќтрабатываетс€ возможность функций возвращать ссылки и указатели.*/

#include "stdafx.h"
#include "iostream.h"

int& ref_max(int& x,int& y);
int* pointer_max(int* x,int* y);

int main(int argc, char* argv[])
{
	int a=20,b=5;
	
	cout << "(ref_max) Value been got: " << ref_max(a,b) << '\n';
	
	cout <<  &a << '\n';				//“ождественность этих адресов говорит о том, что
	cout <<  &ref_max(a,b) << '\n';		//ссылка на ссылку будет св€зана с оригиналом.
										//ј указатель бы пришлось разыменовывать дважды.
	
	cout << "(pointer_max) Value been got: " << *pointer_max(&a,&b) << '\n';
	
	return 0;
}

int& ref_max(int& x,int& y)
{
	return ((x>y)?(x):(y));
}

int* pointer_max(int* x,int* y)
{
	return ((*x>*y)?(x):(y));
}