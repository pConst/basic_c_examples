// for_style.cpp : Defines the entry point for the console application.
//

/* ��������� ����������, ��� ��������� ��������� �����. */

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	// ��������!!! i ����� ����������� � ����� ���������� ������� �����.
	// �� ������ ����� � ������ ����� ���������!!!
	// � ������ ����� ������������, �� ������ ������� ���� ����������.

	for (int i=0; i<5; i++) cout << i << " ";
	cout << endl;

	for (i=0; i!=5; ++i) cout << i << " ";
	cout << endl;
}
