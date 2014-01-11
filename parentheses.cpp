// parentheses.cpp : Defines the entry point for the console application.
//

/*��������� ������� �� ����� ��� ��������� ����� ����� (2*N)>0 � �������� 
  ������ "(" � ")", �������������� ���������� ��������� ������.
  �� ���� ��� �������. ���������� ������� �����������.*/

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
	
	if (offset==2*N)		//���� ��������� ��� ������
	{
		if (!n)				//������� �������� "����" � "����" ������
        {
		for (int i=0; i<2*N; i++) {cout << *(pStr+i);}	//������
		cout << ' ' << ++counter;						//������� ���������� ����������.
		cout << endl;
        }
		return;
	}
	
	int _n=n;
	char _offset=offset;
	
	if (n<=N)					//������� ������������
	{
		*(pStr+offset)='(';
		RecursivePrinting(N, ++n, pStr, ++offset);
	}

	if (_n>0)					//������� ������������
	{
		*(pStr+_offset)=')';
		RecursivePrinting(N, --_n, pStr, ++_offset);
	}
}