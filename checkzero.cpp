// checkzero.cpp : Defines the entry point for the console application.
//

/* О том, как важно ВСЕГДА инициализировать ЛЮБЫЕ переменные.*/

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	int a;
	cout << a << endl;	// совсем не ноль!!!

	int b[1000];
	for(int i=0;i<100;i++) cout << b[i];	// совсем даже не нули!!!
}

