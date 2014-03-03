//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа демонстрирует применение арифм операции к указателям.*/

#include "stdafx.h"
#include "iostream.h"

int main(int argc, char* argv[])
{
	int a=10;
	int b=20;
	int *ptr1,*ptr2;
	
	ptr1=&a;
	cout << "Address1: " << ptr1 << '\n';
	cout << "Value1: " << *ptr1 << '\n';
	ptr2=&b;
	cout << "Address2: " << ptr2 << '\n';
	cout << "Value2: " << *ptr2 << '\n';

	if(ptr1<ptr2) cout << '\n' << "ptr1<ptr2" << '\n';
	else cout << '\n' << "ptr1>ptr2" << '\n';

/*При сравнении указателей нужно учитывать рост стека в отрицательном направлении!!!*/

	return 0;
}