// array 1.cpp : Defines the entry point for the console application.
//

/*Программа демонстрирует доступ к элементам массива с помощью указателей.*/

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	int arr[2][3]={ {1,2,3},	//Инициализировать нужно в направлении наискорейшего
					{4,5,6} };	//возрастания ПОСЛЕДНЕГО индекса!!! (заполнение 
								//по столбцам начиная с верхнего левого элемента)

	for(int j=0; j<=2; j++)
	{
		for(int i=0; i<=1; i++)
		{
			cout << *(*(arr+i)+j) << ' ';
		}
		cout << '\n';
	}
	cout << '\n';
}
