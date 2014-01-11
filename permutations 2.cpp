// permutations 2.cpp : Defines the entry point for the console application.
//

/* ѕрограмма выводит все перестановки из K элементов по N. */

#include "stdafx.h"
#include "iostream.h"

int N, K;
int counter;

void PrintPermutations(int CurToExcess, int* pEls)
{
	if(CurToExcess==(N-1))	//осталась одна незаполненна€ €чейка - еЄ переберЄм
	{						//пр€мо перед выводом
		for(int j=1; j<=K; j++)
		{
			bool rep=false;
			for(int h=0; h<CurToExcess; h++)
			{
				if(*(pEls+h)==j) rep=true;
			}
			if(!rep)
			{
			for(int i=0; i<(N-1); i++) cout << '(' << *(pEls+i) << ')';	
			cout << '(' << j << ')';
			counter++;
			cout << "    " << counter;
			cout <<endl;
			}
		}
	}
	else	//€чеек ещЄ много - пользуемс€ рекурсивност€ми
	{
		for(int i=1; i<=K; i++)
		{
			bool rep=false;
			for(int j=0; j<CurToExcess; j++)
			{
				if(*(pEls+j)==i) rep=true;
			}
			if(!rep)
			{
			*(pEls+CurToExcess)=i;
				PrintPermutations(CurToExcess+1, pEls);
			}
		}
	}
}

void main(int argc, char* argv[])
{
	cout << "How many cells? ";
	cin >> N;
	cout << endl;

	cout << "How many values possible for any cell? ";
	cin >> K;
	cout << endl;

	int* pEls=new int[N];
	PrintPermutations(0, pEls);
	delete[] pEls;
}


