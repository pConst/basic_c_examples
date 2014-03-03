//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

#include "stdafx.h"
#include "iostream.h"

int main(int argc, char* argv[])
{
	cout << "bool: " << sizeof(bool) << "\n";
	cout << "\n";

	cout << "unsigned short int: " << sizeof(unsigned short int) << "\n";
	cout << "short int: " << sizeof(short int) << "\n";
	cout << "\n";

	cout << "unsigned int: " << sizeof(unsigned int) << "\n";
	cout << "int: " << sizeof(int) << "\n";
	cout << "\n";

	//===ТАКИМИ типами лучше не пользоваться - есть же int!!!============================
	cout << "*unsigned long int: " << sizeof(unsigned long int) << "\n";
	cout << "*long int: " << sizeof(long int) << "\n";
	cout << "\n";

	cout << "*unsigned long: " << sizeof(unsigned long) << "\n";
	cout << "*long: " << sizeof(long) << "\n";
	cout << "\n";
	//===================================================================================

	cout << "char: " << sizeof(char) << "\n";
	cout << "\n";
	
	//cout << "void: " << sizeof (void) << "\n";			Компилятор ругается!!!
	//cout << "\n";

	cout << "float: " << sizeof(float) << "\n";
	cout << "double: " << sizeof(double) << "\n";
	//===ТАКИМ типом лучше не пользоваться - есть же double!!!===========================
	cout << "*long double: " << sizeof(long double) << "\n";
	//===================================================================================
	cout << "\n";
	
	return 0;
}
