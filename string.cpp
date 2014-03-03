//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/* Так состоялось моё знакомство с классом string.
   Остальные функции показались мне слишком простыми чтобы их пробовать. */

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void main(int argc, char* argv[])
{
	string str1("Const!");
	cout << str1.c_str() << endl;
	cout << str1.size() << endl;
	cout << str1.capacity() << endl;
	cout << str1.max_size() << endl;

	str1.resize(35,'@');
	cout << str1 << endl;
	cout << str1.size() << endl;
	cout << str1.capacity() << endl;
	cout << str1.max_size() << endl;
}

