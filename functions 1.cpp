// functions 1.cpp : Defines the entry point for the console application.
//

/*��������� ������������� �������� ���������� �� ������ � ����� ���������.*/

#include "stdafx.h"
#include "iostream.h"

int summsubtr(int& x, int* y);

int main(int argc, char* argv[])
{
	int a=20,b=5;
	
	cout << "Function outcome: " << summsubtr(a,&b) << '\n';
	cout << "Resultant a: " << a << '\n';
	cout << "Resultant b: " << b << '\n';

	return 0;
}

int summsubtr(int& x, int* y)
{
	int stor_x=x,stor_y=*y;

	x=stor_x+stor_y;
	*y=stor_x-stor_y;

	return 1;
}


