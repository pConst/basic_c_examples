//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*��������� ������������� �������� � �����������.*/

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	int a=10, b=20, c=30;
	int* ptr;

	ptr=&a;									//ptr - ����� a
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr << endl;
	ptr=&ptr[-1];							//����������, �� ptr - ����� b!!!
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr << endl;
	ptr=&ptr[-1];							//����������, �� ptr - ����� c!!!
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr << endl << endl;

	*ptr=b;									//ptr - ����� a, ���������� a=b
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr << endl;
	ptr=&c;									//ptr - ����� c
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr << endl << endl;
	
	ptr=(int*)&ptr;							//ptr - ����� camo�� ����!!!
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr << endl << endl;

}
