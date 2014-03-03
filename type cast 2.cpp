//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа демонстрирует яваное преобразование типов.*/

#include "iostream.h"

int main()
{
	int i = 54;
	float f = 15.854;
	i = (int) f;
	cout << "new integer: ";
	cout << i << '\n';

	return 0;
}