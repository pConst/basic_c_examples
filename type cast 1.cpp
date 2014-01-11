// type cast 1.cpp : Defines the entry point for the console application.
//

/*Программа демонстрирует неяваное преобразование типов.*/

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	short int i = 0;
	float f = 15.854;
	i = f;
	cout << "new integer: " << i << '\n';
}
