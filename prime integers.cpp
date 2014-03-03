//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа перебором ищет простые числа.
  Интересно то, что для увеличения скорости оптимизирован шаг
  делимого, а верхняя граница интервала делителя существенно снижена.
  На эффективность поиска "упрощения" не отразились.*/

#include "stdafx.h"
#include "iostream.h"

int main(int argc, char* argv[])
{	
		
	for(int i=3; i<100000; i+=2)
	{
		for(int j=3; j<(i/3+1); j++)
		{
			if(i%j==0) break;
			if(j==i/3) cout << i << ' ';
		}
	}

	return 0;
}
