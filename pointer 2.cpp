//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*��������� ������������� ������ � void-�����������.*/

#include "stdafx.h"
#include "iostream.h"

int main(int argc, char* argv[])
{
	int a=10;
	double b=20;
	void* ptr;

	ptr=&a;
	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *(int*)ptr << '\n';	//��������� � ��� ���� ����� ���� ���
												//��������� � �������� �� �� � ������

	ptr=&b;
	cout << "Address: " << ptr << '\n';
	cout << "Value: " << *(double*)ptr << '\n';	//��������� � ��� ���� ����� ���� ���
												//��������� � �������� �� �� � ������
	
	return 0;
}
