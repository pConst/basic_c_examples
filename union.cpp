//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*��������� ����������, ��� true � false � ���������������� ���� 1 � 0.
  � ��� bool �������� 1 ����, ���������, � ����� ������������.*/

#include "stdafx.h"
#include "iostream.h"
#include "union_def.h"

int main(int argc, char* argv[])
{
	cast_place CP;

	CP.boolean=false;
	cout << "False equals: " << (int)CP.byte << '\n';

	CP.boolean=true;
	cout << "True equals: " << (int)CP.byte << '\n';

	return 0;
}
