//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*ѕрограмма демонстрирует передачу аргументов по ссылке и через указатель.*/

#include "stdafx.h"
#include "iostream.h"

int summsubtr(int& x, int* y);

int main(int argc, char* argv[])
{
	int a=20,b=5;
	
	cout << "Function outcome: " << summsubtr(a,&b) << '\n';
	cout << "Resultant a: " << a << '\n';
	cout << "Resultant b: " << b << '\n';

	return 0;
}

int summsubtr(int& x, int* y)
{
	int stor_x=x,stor_y=*y;

	x=stor_x+stor_y;
	*y=stor_x-stor_y;

	return 1;
}


