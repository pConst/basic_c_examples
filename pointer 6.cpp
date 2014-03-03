//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа прощупывает память в окрестности значения а.*/

#include "stdafx.h"
#include "iostream.h"

int main(int argc, char* argv[])
{
	int a=10;
	int* ptr=&a;
	
	for(int i=10; i>=-10; i--)
	{
		cout << ptr+i << ' ' << *(ptr+i) << '\n';
	}

	return 0;
}