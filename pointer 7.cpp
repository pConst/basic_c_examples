// pointer 7.cpp : Defines the entry point for the console application.
//

/*��������� �������� ���, ��� ��������� ������������� ������ � ����������
  ��������� ����������. ��� ������� ����� ������ ������� ����� �� ��������!!!*/

#include "stdafx.h"
#include "iostream.h"

struct Test
{
	int* smth;
	Test(): smth((int*)&smth) 
		{cout << "Constr" << endl;}
	Test(Test& _obj): smth((int*)&smth)				//�� ������ ������ 
		{cout << "Copy constr (REF)" << endl;}		//������������ ������ 
	Test(Test* _obj): smth((int*)&smth)				//������������
		{cout << "Copy constr (PTR)" << endl;}		//�����������.
	~Test() {cout << "Destr" << endl;}			
};

void Print(Test _obj) {cout << _obj.smth << endl;}
void Print(Test& _obj, bool _extent) {cout << _obj.smth << endl;}
void Print(Test* _obj) {cout << (*_obj).smth << endl;}


void main(int argc, char* argv[])
{
	Test obj1;
	Print(obj1);
	Print(obj1, true);
	Print(&obj1);
}
