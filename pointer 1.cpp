// pointer 1.cpp : Defines the entry point for the console application.
//

/*��������� ������������� �������� � �����������.*/

#include "stdafx.h"
#include "iostream.h"

int main(int argc, char* argv[])
{
	int a=10, b=20, c=30;
	int* ptr;

	ptr=&a;									//ptr - ����� a
	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *ptr << '\n';
	*ptr=b;									//ptr - ����� a, ���������� a=b
	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *ptr << '\n';
	ptr=&c;									//ptr - ����� c
	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *ptr << '\n';
	
	ptr=(int*)&ptr;							//ptr - ����� camo�� ����!!!
	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *ptr << '\n';
	
	return 0;
}
