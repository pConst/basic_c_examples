//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа демонстрирует способы передачи массивов (в том числе многомерных) в функцию.*/

#include "stdafx.h"
#include "iostream.h"

void print_array_data(int arr[]);		//1---
void print_array_data(int& arr);		//2---
void print_array_data(int arr[2][3]);	//3---
void print_array_data(void* arr);		//4---

void main(int argc, char* argv[])
{
	int array_1d[5]={1,2,3,4,5};
	int array_2d[2][3]={1,3,5,2,4,6};
	print_array_data(array_1d);		//1---

	cout << "--------------------------------" << endl;

	print_array_data(*array_1d);	//2---
	print_array_data(*array_2d);	//2---

	cout << "--------------------------------" << endl;

	print_array_data(array_2d);		//3---

	cout << "--------------------------------" << endl;

	print_array_data(&array_1d);	//4---
	print_array_data(&array_2d);	//4---

	cout << "--------------------------------" << endl;
}

//1---СТАНДАРТНЫЙ ПРИЁМ. Для передачи ОДНОМЕРНОГО массива в функцию.
//	  ПРЕЛЕСТИ: Синтаксис массива внутри ф-ии сохранен.
void print_array_data(int arr[])
{
	for(int j=0;j<=4;j++) cout << arr[j] << ' ';
	cout << endl << endl;
}

//2---УНИВЕРСАЛЬНЫЙ СПОСОБ - Передаётся ссылка НА НУЛЕВОЙ ЭЛЕМЕНТ.
//	  ПРЕЛЕСТИ: Подходит для любых (в том числе многомерных) массивов.
//	  Нужно дополнительно передавать инфу о размерностях и, может даже, типе элементов.
void print_array_data(int& arr)
{
	for(int j=0;j<6;j++) cout << *(&arr+j) << ' ';
	cout << endl << endl;
}

//3---Передаётся ДВУМЕРНЫЙ (в данном случае) массив, 
//    но размерности фиксированы. Можно перегрузить ф-ию для разных размерностей.
//	  ПРЕЛЕСТИ: Синтаксис массива внутри ф-ии сохранен.
//	  ПРЕЛЕСТИ: Передача доп инфы не нужна.
void print_array_data(int arr[2][3])
{
	for(int j=0;j<=2;j++)
	{
		for(int i=0;i<=1;i++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

//4---УНИВЕРСАЛЬНЫЙ СПОСОБ - по указателю НА НУЛЕВОЙ ЭЛЕМЕНТ.
//	  ПРЕЛЕСТИ: Подходит для любых (в том числе многомерных) массивов.
//	  Нужно дополнительно передавать инфу о размерностях и, может даже, типе элементов.
void print_array_data(void* arr)
{
	for(int j=0;j<6;j++) cout << *((int*)arr+j) << ' ';
	cout << endl << endl;
}