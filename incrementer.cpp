//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

// Программа позволяет оценить время за которое комп выполнит 10,100,1000, et seq.

#include "stdafx.h"
#include <iostream.h>
#include <math.h>

void main(int argc, char* argv[])
{
	double var=0;
	double thrh=10;
	do
	{
		if(thrh==var++) 
		{
			cout << (var-1) << endl;
			thrh*=10;
		}
	} while (true);
	char ExitVal;
	cin >> ExitVal;
}

