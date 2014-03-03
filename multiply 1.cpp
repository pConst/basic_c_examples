//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/* Программа "Разложение на множители". */

#include "stdafx.h"
#include "iostream.h"

int Target;
int hmStepsMax;

void MultProcess(int Departure, int* pFactors, int CurStep);

void main(int argc, char* argv[])
{
	cout << "What natural number to get by multiplications? ";
	cin >> Target;
	cout << endl;
	
	cout << "How many numbers to multiply (max) ? ";
	cin >> hmStepsMax;
	cout << endl;
	
	hmStepsMax=((hmStepsMax==0)?(100):(hmStepsMax));
	int* pFactors=new int[hmStepsMax];
	MultProcess(2, pFactors, 0);
	delete[] pFactors;
}

void MultProcess(int Departure, int* pFactors, int CurStep)
{
	int CurResult=1;
	for(int i=0; i<CurStep; i++)
	{
		CurResult*=(*(pFactors+i));
		if(CurResult>Target)
		{
			CurStep=hmStepsMax;
			break;
		}
	}

	if(CurStep<hmStepsMax && CurResult<Target)
		for(i=Departure; i<Target; i++)
		{
			*(pFactors+CurStep)=i;
			MultProcess(i, pFactors, CurStep+1);
		}
	if(CurStep<=hmStepsMax && CurResult==Target)
	{
		cout << Target << '=' << *pFactors;
		for(i=1; i<CurStep; i++)
		{
			cout << '*' << *(pFactors+i);
		}
		cout << endl;
	}
}