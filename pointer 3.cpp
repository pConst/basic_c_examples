//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа демонстрирует работу с указателями на const.*/

#include "stdafx.h"
#include "iostream.h"

int main(int argc, char* argv[])
{
	const int a=10;
	const int* ptr;
	int b=20;

	ptr=&a;
	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *ptr << '\n';
	ptr=&b;
	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *ptr << '\n';

/*Запрещена модификация СОДЕРЖИМОГО по указателю, но не АДРЕСА указателя!!!*/

	return 0;
}
