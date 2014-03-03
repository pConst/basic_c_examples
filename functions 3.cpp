//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа меня очень удивила тем, что глобальные переменные объявляются 
  вне тела какой-либо из функций, ДАЖЕ ВНЕ ФУНКЦИИ MAIN()!!!*/

#include "stdafx.h"
#include "iostream.h"

int n;			//Эта переменная из ф-ии видна.

/*Глоб переменные нужно объявлять ПЕРЕД прототипами ф-ий.*/

void printn();

void main(int argc, char* argv[])
{
	//int n;	//А этой - не видно.
	printn();
}

void printn()
{
	cout << n << endl;
}
