// pointer 0.cpp : Defines the entry point for the console application.
//

/*��� � �������� ����������, ��� �� ���������� (� �������, � ����������������)
  ���������� ��������� � ������ (�� ��� ������� ���-��).*/

#include "stdafx.h"
#include "iostream.h"
#include "assert.h"

void func1(int *smth) {cout << *smth << endl;}
void func2(int* smth) {cout << *smth << endl;}

bool func3(int smth) {return true;}
bool func4(void) {return true;}

void main(int argc, char* argv[])
{
	int a=47;						//������������ ����� �������


//1------------------------------------------------------------
	int *ptr1=&a;					//������ ������� ����������
	cout << *ptr1 << endl;

	int* ptr2=&a;					//������ ������� ����������
	cout << *ptr2 << endl;


//2------------------------------------------------------------
	func1(&a);						//������ ������� ����������
	func2(&a);						//������ ������� ����������


//3------------------------------------------------------------
									//��������� �� �������
	bool (*fptr1)(int)=func3;
	assert(fptr1(a));
	bool (*fptr2)(void)=func4;
	assert(fptr2);


//4------------------------------------------------------------
									//��������� �� �������
	int b[100];
	b[1]=95;
	//bool (*aptr1)[100]=b;			//������� 
	int *aptr2=b;
	cout << aptr2[1] << endl;

}

/*� ���������� ����������, ��� ����������� �������� ����� � � ����, � � ����������,
  � ����� ������ �� ������� ������� �� ���, �� ���.
  ���� ����� � ����� ������� � ������� ������� ������ � ����� ����������, ������ ���
  ����������� �� ����, ��� ����� �����������. 
  �������, ��� ����� ������ ������ ������ �����. �� �������������� � ������ 3 � 4.
  �� ����� ������� ������ ��������� ������ ���������� � �������������.*/