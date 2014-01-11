// ArrayRev.cpp : Defines the entry point for the console application.
//

/*Программа, делающая то же самое, написана и на VB.
  А результаты получаются разные!*/

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	int arr[2][3];
	int* ptr=&arr[0][0];
	arr[0][0]=1; arr[1][0]=2;
	arr[0][1]=3; arr[1][1]=4;
	arr[0][2]=5; arr[1][2]=6;
	for(int i=0; i<6; i++) cout << *(ptr+i);
	cout << endl;
}
