//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*��������� ������������� ������ � const-�����������.*/

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

/*��������� ����������� ������ ���������, �� �� ����������� �� ���������!!!*/

	return 0;
}