//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа демонстрирует операции с указателями.*/

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	int a=10, b=20, c=30;
	int* ptr;

	ptr=&a;									//ptr - адрес a
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr << endl;
	ptr=&ptr[-1];							//Извращение, но ptr - адрес b!!!
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr << endl;
	ptr=&ptr[-1];							//Извращение, но ptr - адрес c!!!
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr << endl << endl;

	*ptr=b;									//ptr - адрес a, эквивалент a=b
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr << endl;
	ptr=&c;									//ptr - адрес c
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr << endl << endl;
	
	ptr=(int*)&ptr;							//ptr - адрес camoго себя!!!
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr << endl << endl;

}
