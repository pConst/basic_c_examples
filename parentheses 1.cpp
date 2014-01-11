// parentheses 1.cpp : Defines the entry point for the console application.
//

/*Программа выводит на экран все возможные слова длины (2*N)>0 в алфавите 
  скобок "(" и ")", представляющие правильные скобочные записи.
  По сути это перебор. Реализация относительно незамысловата.*/

#include "stdafx.h"
#include "iostream.h"

void RecursivePrinting(int& N, char* pStr);

void main(int argc, char* argv[])
{
	int N;
	cout << "Enter a number of [pairs of] parentheses: N=";
	cin >> N;
	cout << endl;		
	
	char* pStr=new char[2*N];
	RecursivePrinting(N, pStr);
	delete[] pStr;
}

void RecursivePrinting(int& N, char* pStr)
{
	int i=0;
	for(; i<2*N; i++) {if ( *(pStr+i)!='(' && *(pStr+i)!=')' ) break;}
	if (i==2*N)		//Если заполнена вся строка
	{
		int S=0;
		for(i=0;i<2*N; i++) 
		{	
			(*(pStr+i)=='(') ? (S++) : (S--);
			if(S<0) break;		//Условие ПРАВИЛЬНОСТИ
		}
		if (S==0)				//Условие равества "откр" и "закр" скобок
		{
			for(i=0;i<2*N; i++) {cout << *(pStr+i);}	//Печать
			cout << endl;
		}
		return;	
	}

	*(pStr+i)='(';
	RecursivePrinting(N, pStr);

	*(pStr+i)=')';
	for(int j=i+1; j<2*N; j++) {*(pStr+j)='c';}
	RecursivePrinting(N, pStr);
}