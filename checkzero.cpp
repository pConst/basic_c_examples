//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/* � ���, ��� ����� ������ ���������������� ����� ����������.*/

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	int a;
	cout << a << endl;	// ������ �� ����!!!

	int b[1000];
	for(int i=0;i<100;i++) cout << b[i];	// ������ ���� �� ����!!!
}

