// class 3.cpp : Defines the entry point for the console application.
//

/*��������� ������������� ������ �� ������������ ������� � ���������.
  ����� ����, ������������ ������������� �������.
  ������ ���� �� ������ �� ��������� ��������.*/

#include "stdafx.h"
#include "iostream.h"

class SomeObject
{
	static bool copy_present;
	static int copies_count;
public:
	SomeObject() {++copies_count; if(copies_count==1) copy_present=true; cout << "constr" << endl;}
	~SomeObject() {--copies_count; if(copies_count==0) copy_present=false; cout << "destr" << endl;}
	
	friend int csizeof_bool(SomeObject* obj);
	friend int csizeof_int(SomeObject* obj);

	bool get_copy_present() {return copy_present;}				//������� ����������
	int get_copies_count() {return copies_count;}				//		�������
	static bool st_get_copy_present() {return copy_present;}	//����������� ����������
	static int st_get_copies_count() {return copies_count;}		//		�������
};

bool SomeObject::copy_present=false;	//����������� ������ ����� �� ������ 
int SomeObject::copies_count=0;			//��������, �� � ����������!!!

int csizeof_bool(SomeObject* obj) {return sizeof((*obj).copy_present);}
int csizeof_int(SomeObject* obj) {return sizeof((*obj).copies_count);}

void main(int argc, char* argv[])
{

/*����������� ��������� ����� ������������ ������ ��� ��� ��� ��� �������� ������.*/
	cout << "STATIC:" << " ";
	cout << "Number of copies is " << SomeObject::st_get_copies_count() << ". ";
	if(SomeObject::st_get_copy_present()) cout << "copies present";
	else cout << "No copies present";
	cout << endl << endl;

/*� ����� �������� ��� ���������� �������.*/
	SomeObject a;
	SomeObject* SO_arr_ptr=new SomeObject[2];

/*������ ��������� �-�� ������ ������ _1_ ???*/
	cout << "Size of _SomeObject_ is: " << sizeof(SomeObject) << endl;
	cout << "Size of dinamic _SomeObject_ is: " << sizeof(*SO_arr_ptr) << endl;

/*�������: � �������� ���������� �-�� �������� ������������� ��������� ��
  ������� ������.
  ����, ��������, �������� ����� ����� �� ��������� ������� ������� 
  (�� ��������), �� ����������� ���������� ����������� �����, � ������� �����������
  �������. ����� ������������ � ,�����, ���������� �������� ��������� �������������.
  � ���������� �������, ����� �������� �������, ������� ����� ���������� 
  �������� ��������.*/
	cout << "Size of _static bool copy_present_ is: " << csizeof_bool(&a) << endl;
	cout << "Size of _static int copies_count_ is: " << csizeof_int(&a) << endl << endl;

	cout << "NORMAL:" << " ";
	cout << "Number of copies is " << a.get_copies_count() << ". ";
	if(a.get_copy_present()) cout << "copies present";
	else cout << "No copies present";
	cout << endl;

	cout << "STATIC:" << " ";
	cout << "Number of copies is " << SomeObject::st_get_copies_count() << ". ";
	if(SomeObject::st_get_copy_present()) cout << "copies present";
	else cout << "No copies present";
	cout << endl << endl;

	delete[] SO_arr_ptr;

	cout << "NORMAL:" << " ";
	cout << "Number of copies is " << a.get_copies_count() << ". ";
	if(a.get_copy_present()) cout << "copies present";
	else cout << "No copies present";
	cout << endl;

	cout << "STATIC:" << " ";
	cout << "Number of copies is " << SomeObject::st_get_copies_count() << ". ";
	if(SomeObject::st_get_copy_present()) cout << "copies present";
	else cout << "No copies present";
	cout << endl << endl;
}
