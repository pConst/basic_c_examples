//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа демонстрирует работу с const-указателями.*/

#include "stdafx.h"
#include "iostream.h"

int main(int argc, char* argv[])
{
	int a=10;
	int* const ptr=&a;
	int b=20;

	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *ptr << '\n';
	*ptr=b;
	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *ptr << '\n';

/*Запрещена модификация АДРЕСА указателя, но не СОДЕРЖИМОГО по указателю!!!*/

	return 0;
}