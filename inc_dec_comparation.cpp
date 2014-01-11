// inc_dec_comparation.cpp : Defines the entry point for the console application.
//

/*Программа для сравнения скорости выполнения арифм действий. Есть над чем подумать.*/


#include "stdafx.h"
#include "iostream.h"
#include "math.h"
#include "windows.h"

void main(int argc, char* argv[])
{
	DWORD BegTime;
	DWORD EndTime;
	int res;
	
//-0-1-/////////////////////////////////////////////////----------------------

	BegTime=GetTickCount();
	for(int i=0; i<100000000; i++)
	{
		res=0;
		++res;
	}
	EndTime=GetTickCount();
	cout << "0+1" << "     " << (EndTime-BegTime) << endl;

//-0-2-/////////////////////////////////////////////////----------------------

	BegTime=GetTickCount();
	for(i=0; i<100000000; i++)
	{
		res=0;
		--res;
	}
	EndTime=GetTickCount();
	cout << "0-1" << "     " << (EndTime-BegTime) << endl << endl;

//-0-end-///////////////////////////////////////////////----------------------

//-1--------------------------------------------------------------------------

	res=0;
	BegTime=GetTickCount();
	for(i=0; i<100000000; i++)
	{
		++res;
	}
	EndTime=GetTickCount();
	cout << "+1" << "     " << (EndTime-BegTime) << endl;

//-2--------------------------------------------------------------------------

	res=0;
	BegTime=GetTickCount();
	for(i=0; i<100000000; i++)
	{
		--res;
	}
	EndTime=GetTickCount();
	cout << "-1" << "     " << (EndTime-BegTime) << endl << endl;

//-3--------------------------------------------------------------------------

	for(int j=-10; j<11; j++)
	{
		res=0;
		BegTime=GetTickCount();
		for(i=0; i<100000000; i++)
		{
			res*=j;
		}
		EndTime=GetTickCount();
		cout << "*" << j << "     " << (EndTime-BegTime) << endl;
	}
	cout << endl;
}