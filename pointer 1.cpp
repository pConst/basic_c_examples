// pointer 1.cpp : Defines the entry point for the console application.
//

/*Программа демонстрирует операции с указателями.*/

#include "stdafx.h"
#include "iostream.h"

int main(int argc, char* argv[])
{
	int a=10, b=20, c=30;
	int* ptr;

	ptr=&a;									//ptr - адрес a
	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *ptr << '\n';
	*ptr=b;									//ptr - адрес a, эквивалент a=b
	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *ptr << '\n';
	ptr=&c;									//ptr - адрес c
	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *ptr << '\n';
	
	ptr=(int*)&ptr;							//ptr - адрес camoго себя!!!
	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *ptr << '\n';
	
	return 0;
}
