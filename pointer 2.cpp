// pointer 2.cpp : Defines the entry point for the console application.
//

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
