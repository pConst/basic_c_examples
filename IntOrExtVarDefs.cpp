// IntOrExtVarDefs.cpp : Defines the entry point for the console application.
//

/*Программа доказывает, что объявления переменных лучше выносить за пределы цикла. */

#include "stdafx.h"
#include "iostream.h"
#include "windows.h"

void main(int argc, char* argv[])
{
	DWORD BegTime;
	int i, j;

	BegTime=GetTickCount();
	for(i=0; i<1000000; i++)
	{
		for(j=0; j<1000; j++)
		{
			int a,b;
			a=0; b=0;
			a+=1;
			b-=1;
		}
	}
	cout << (GetTickCount()-BegTime) << endl;

	BegTime=GetTickCount();
	for(i=0; i<1000000; i++)
	{
		int a,b;
		for(j=0; j<1000; j++)
		{
			a=0; b=0;
			a+=1;
			b-=1;
		}
	}
	cout << (GetTickCount()-BegTime) << endl;

	BegTime=GetTickCount();
	int a,b;
	for(i=0; i<1000000; i++)
	{
		for(j=0; j<1000; j++)
		{
			a=0; b=0;
			a+=1;
			b-=1;
		}
	}
	cout << (GetTickCount()-BegTime) << endl << endl;

}
