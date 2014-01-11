// union.cpp : Defines the entry point for the console application.
//

/*Программа показывает, что true и false в действительности есть 1 и 0.
  А тип bool занимает 1 байт, наверняка, в целях выравнивания.*/

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
