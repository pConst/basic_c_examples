//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа для сравнения двух способов возведения числа в степень.
  Результат и должен быть таким: pow в четыре раза дольше, и использовать её
  для возведения во вторую, третью и даже четвёртую степень - несолидно.
  Но она ведь возводит в ЛЮБУЮ степень, а значит, тоже ОЧЕНЬ быстра для своих целей.*/


#include "stdafx.h"
#include "iostream.h"
#include "math.h"
#include "windows.h"

double p2_1(double x) {return x*x;}
double p2_2(double x) {return pow(x,2);}
double p3_1(double x) {return x*x*x;}
double p3_2(double x) {return pow(x,3);}
double p4_1(double x) {return x*x*x*x;}
double p4_2(double x) {return pow(x,4);}
double p4_3(double x) {double a=x*x; return a*a;}

void main(int argc, char* argv[])
{
	DWORD BegTime;
	double res;

//1-----------------------------------------------------
	BegTime=GetTickCount();
	for(int i=0; i<10000000; i++)
	{
		res=p2_1(i);
	}
	cout << (GetTickCount()-BegTime) << endl;

	BegTime=GetTickCount();
	for(i=0; i<10000000; i++)
	{
		res=p2_2(i);
	}
	cout << (GetTickCount()-BegTime) << endl << endl;

//2-----------------------------------------------------
	BegTime=GetTickCount();
	for(i=0; i<10000000; i++)
	{
		res=p3_1(i);
	}
	cout << (GetTickCount()-BegTime) << endl;

	BegTime=GetTickCount();
	for(i=0; i<10000000; i++)
	{
		res=p3_2(i);
	}
	cout << (GetTickCount()-BegTime) << endl << endl;

//3-----------------------------------------------------
	BegTime=GetTickCount();
	for(i=0; i<10000000; i++)
	{
		res=p4_1(i);
	}
	cout << (GetTickCount()-BegTime) << endl;

	BegTime=GetTickCount();
	for(i=0; i<10000000; i++)
	{
		res=p4_3(i);
	}
	cout << (GetTickCount()-BegTime) << endl;

	BegTime=GetTickCount();
	for(i=0; i<10000000; i++)
	{
		res=p4_2(i);
	}
	cout << (GetTickCount()-BegTime) << endl << endl;

}

