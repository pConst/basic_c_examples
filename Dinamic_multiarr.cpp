//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

// ��������� ����������, ��� ��������� ��������� ����������� ������������ �������,
// ������ �����, � ������� ������������� ���� ������ �������� � ������ ����������!

#include "stdafx.h"
#include <iostream.h>

void main(int argc, char* argv[])
{
	int i,j;
	cout << "i = ";
	cin >> i;
	cout << "j = ";
	cin >> j;
	cout << endl;
	
	int** Arr;
	Arr=new int*[i];
	for(int k=0; k<i; k++) Arr[k]=new int[j];

	for(int b=0; b<j; b++)
	{
		for(int a=0; a<i; a++)
		{
			cout << &Arr[a][b] << "  ";
		}
		cout << endl;
	}

	for(k=0; k<i; k++) delete[] Arr[k];
	delete[] Arr;
}

