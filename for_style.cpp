//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

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
