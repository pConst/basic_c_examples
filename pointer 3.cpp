// pointer 3.cpp : Defines the entry point for the console application.
//

/*��������� ������������� ������ � ����������� �� const.*/

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

/*��������� ����������� ����������� �� ���������, �� �� ������ ���������!!!*/

	return 0;
}
