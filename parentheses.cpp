// parentheses.cpp : Defines the entry point for the console application.
//

/*Программа выводит на экран все возможные слова длины (2*N)>0 в алфавите 
  скобок "(" и ")", представляющие правильные скобочные записи.
  По сути это перебор. Реализация немного замысловата.*/

#include "stdafx.h"
#include "iostream.h"

void RecursivePrinting(int& N, int n, char* pStr, char offset);

void main(int argc, char* argv[])
{
	int N;
	cout << "Enter a number of [pairs of] parentheses: N=";
	cin >> N;
	cout << endl;		
	
	char* pStr=new char[2*N];
	int n=0;
	char offset=0;
	RecursivePrinting(N, n, pStr, offset);
	delete[] pStr;
}

void RecursivePrinting(int& N, int n, char* pStr, char offset)
{
	static int counter=0;
	
	if (offset==2*N)		//Если заполнена вся строка
	{
		if (!n)				//Условие равества "откр" и "закр" скобок
        {
		for (int i=0; i<2*N; i++) {cout << *(pStr+i);}	//Печать
		cout << ' ' << ++counter;						//Считает печатаемые комбинации.
		cout << endl;
        }
		return;
	}
	
	int _n=n;
	char _offset=offset;
	
	if (n<=N)					//Условие ПРАВИЛЬНОСТИ
	{
		*(pStr+offset)='(';
		RecursivePrinting(N, ++n, pStr, ++offset);
	}

	if (_n>0)					//Условие ПРАВИЛЬНОСТИ
	{
		*(pStr+_offset)=')';
		RecursivePrinting(N, --_n, pStr, ++_offset);
	}
}