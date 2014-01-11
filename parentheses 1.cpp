// parentheses 1.cpp : Defines the entry point for the console application.
//

/*��������� ������� �� ����� ��� ��������� ����� ����� (2*N)>0 � �������� 
  ������ "(" � ")", �������������� ���������� ��������� ������.
  �� ���� ��� �������. ���������� ������������ �������������.*/

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
	if (i==2*N)		//���� ��������� ��� ������
	{
		int S=0;
		for(i=0;i<2*N; i++) 
		{	
			(*(pStr+i)=='(') ? (S++) : (S--);
			if(S<0) break;		//������� ������������
		}
		if (S==0)				//������� �������� "����" � "����" ������
		{
			for(i=0;i<2*N; i++) {cout << *(pStr+i);}	//������
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