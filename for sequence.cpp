// for sequence.cpp : Defines the entry point for the console application.
//

/*��������� ������� ������� �������� 10*10.
  ��������� ��, ��� ��������� ��������� �����.
  �� � ���� ������!*/

#include "stdafx.h"
#include "iostream.h"


int main(int argc, char* argv[])
{
	for (int i=10,j=10; j; ((i)?(i--):(i=10,j--)) )  cout << ((i)?('@'):('@','\n'));

	cout << '\n';

	return 0;
}

