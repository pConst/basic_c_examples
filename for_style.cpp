// for_style.cpp : Defines the entry point for the console application.
//

/* Программа показывает, как правильно оформлять циклы. */

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	// ВНИМАНИЕ!!! i будет действовать и после завершения первого цикла.
	// Во втором цикле её нельзя снова объявлять!!!
	// В работе циклы эквивалентны, но второй записан чуть правильней.

	for (int i=0; i<5; i++) cout << i << " ";
	cout << endl;

	for (i=0; i!=5; ++i) cout << i << " ";
	cout << endl;
}
