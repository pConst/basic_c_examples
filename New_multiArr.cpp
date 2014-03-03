//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	
/* ���� ��� ����������, ��� ������������ ��������� ��������� �������� ���
   �������� ������� �����������.*/
	
	int* ptr=new int[5];

	*(ptr+0)=0;
	*(ptr+1)=1;
	*(ptr+2)=2;
	*(ptr+3)=3;
	*(ptr+4)=4;

	cout << "ptr: " << ptr << endl;
	cout << "&ptr: (!!!) " << &ptr << endl; // ���� �������!
	cout << "ptr[0]: " << ptr[0] << endl;
	cout << "ptr[1]: " << ptr[1] << endl;
	cout << "ptr[4]: " << ptr[4] << endl;
	cout << "ptr[5]: (!!!) " << ptr[5] << endl << endl; // �� ���������!
	
	delete[] ptr;

	cout << endl;

/* � ���� ��� ����������, ��� ����� ����������� �������� ������ � ��� 
   ����������� ��������.*/

	int (*ptr_1)[3]=new int[2][3];
	
	*(ptr+0)=0;
	*(ptr+1)=1;
	*(ptr+2)=2;
	*(ptr+3)=3;
	*(ptr+4)=4;
	*(ptr+5)=5;

	// ��� ������ �����������:
	cout << "ptr_1: " << ptr_1 << endl;			// ��� ��� ������
	cout << "ptr_1[0]: " << ptr_1[0] << endl;	// ������������
	cout << "ptr_1[1]: " << ptr_1[1] << endl;
	cout << "ptr_1[2]: (!!!) " << ptr_1[2] << endl << endl;	// �� ���������!

	// ��� ���� ������ �����������:
	cout << "&ptr_1: " << &ptr_1 << endl;	// ����� ����!
	cout << "&ptr_1[0]: " << &ptr_1[0] << endl;
	cout << "&ptr_1[1]: " << &ptr_1[1] << endl;
	cout << "&ptr_1[2]: (!!!) " << &ptr_1[2] << endl << endl; // �� ���������!

	// ��� ������ ���������:
	cout << "&ptr_1[0][0]: " << &ptr_1[0][0] << endl;
	cout << "&ptr_1[0][1]: " << &ptr_1[0][1] << endl;
	cout << "&ptr_1[0][2]: " << &ptr_1[0][2] << endl;
	cout << "&ptr_1[0][3]: (!!!) " << &ptr_1[0][3] << endl; // �����������, �� � ��������!
	cout << "&ptr_1[1][0]: " << &ptr_1[1][0] << endl;
	cout << "&ptr_1[1][1]: " << &ptr_1[1][1] << endl;
	cout << "&ptr_1[1][2]: " << &ptr_1[1][2] << endl;
	cout << "&ptr_1[2][0]: (!!!) " << &ptr_1[2][0] << endl << endl; // �� ���������!
	
	// ���� ��������:
	cout << "ptr_1[0][0]: " << ptr_1[0][0] << endl;
	cout << "ptr_1[0][1]: " << ptr_1[0][1] << endl;
	cout << "ptr_1[0][2]: " << ptr_1[0][2] << endl;
	cout << "ptr_1[0][3]: (!!!) " << ptr_1[0][3] << endl; // �����������, �� � ��������!
	cout << "ptr_1[1][0]: " << ptr_1[1][0] << endl;
	cout << "ptr_1[1][1]: " << ptr_1[1][1] << endl;
	cout << "ptr_1[1][2]: " << ptr_1[1][2] << endl;
	cout << "ptr_1[2][0]: (!!!) " << ptr_1[2][0] << endl << endl; // �� ���������!

	cout << "ptr_1[-100][0] (!!!) " << ptr_1[-100][0] << endl << endl; // ����� ���� ���!

	delete[] ptr_1;
}