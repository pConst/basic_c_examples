//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/* Более рациональный вариант программы "Разложение на множители", чем первый. */

#include "stdafx.h"
#include "iostream.h"
#include "math.h"

unsigned int Target;
int hmStepsMax;

void DivProcess(unsigned int CurTarget, int Departure, int* pFactors, int CurStep);

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
	DivProcess(Target , 2, pFactors, 0);
	delete[] pFactors;
}

void DivProcess(unsigned int CurTarget, int Departure, int* pFactors, int CurStep)
{
	if(CurStep<hmStepsMax && CurTarget>1)
		for(unsigned int i=Departure; i<=CurTarget; i++)
			if(!fmod(CurTarget,i))
			{
				*(pFactors+CurStep)=i;
				DivProcess(CurTarget/i, i, pFactors, CurStep+1);
			}
	if(CurStep<=hmStepsMax && CurTarget==1)
	{
		cout << Target << '=' << *pFactors;
		for(int i=1; i<CurStep; i++)
		{
			cout << '*' << *(pFactors+i);
		}
		cout << endl;
	}
}