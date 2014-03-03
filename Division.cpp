//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	for(int i=0;i<20;i++)
	{
		cout << i << ' ' << i/4 << ' ' << i%4 << endl;
	}
}
