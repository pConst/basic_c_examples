// matrix.cpp : Defines the entry point for the console application.
//

/*  Элемент матрицы вычисляется как некоторая функция определённой группы 
	элементов другой матрицы. В группе находится всё, что слева (и на) от диагоналей
	проведенных через текущий элемент.*/

#include "stdafx.h"
#include <iostream.h>
#include <stdlib.h>
#include <math.h>

const int N=10;
int A[N][N];
int B[N][N];

int FindMax(int _A[N][N], int _i, int _j)
{
	int Max=0;
	for(int j=0; j<N; j++)
		for(int i=0; i<=(_i-abs(j-_j)); i++)
			if(_A[i][j]>Max) Max=_A[i][j];
	return Max;
}

int FindMin(int _A[N][N], int _i, int _j)
{
	int Min=RAND_MAX;
	for(int j=0; j<N; j++)
		for(int i=0; i<=(_i-abs(j-_j)); i++)
			if(_A[i][j]<Min) Min=_A[i][j];
	return Min;
}

void main(int argc, char* argv[])
{
	int i, j;

	/*
	cout << "Enter a desired dimention: ";
	cin >> N;
	const int n=N;
	cout << endl;
	*/

	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
			A[i][j]=rand();

	for(j=0; j<N; j++)
	{
		for(i=0; i<N; i++)
			cout << A[i][j] << ' ';
		cout << endl;
	}

	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
			B[i][j]=FindMax(A, i, j);

	cout << endl << "MAX:" << endl;

	for(j=0; j<N; j++)
	{
		for(i=0; i<N; i++)
			cout << B[i][j] << ' ';
		cout << endl;
	}

	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
			B[i][j]=FindMin(A, i, j);

	cout << endl << "MIN:" << endl;

	for(j=0; j<N; j++)
	{
		for(i=0; i<N; i++)
			cout << B[i][j] << ' ';
		cout << endl;
	}

	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
			B[i][j]=(FindMax(A, i, j)-FindMin(A, i, j))/2;

	cout << endl << "AVERAGE(MIN,MAX):" << endl;

	for(j=0; j<N; j++)
	{
		for(i=0; i<N; i++)
			cout << B[i][j] << ' ';
		cout << endl;
	}
	
	cout << endl;

	char wait;
	cin >> wait;

	/*
	delete[] A;
	delete[] B;
	*/
}

