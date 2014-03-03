//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа выводит столбец символов 10*10.
  Интересно то, как оформлены вложенные циклы.
  Всё в одну строку!*/

#include "stdafx.h"
#include "iostream.h"


int main(int argc, char* argv[])
{
	for (int i=10,j=10; j; ((i)?(i--):(i=10,j--)) )  cout << ((i)?('@'):('@','\n'));

	cout << '\n';

	return 0;
}

