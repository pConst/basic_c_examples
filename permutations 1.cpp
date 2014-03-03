//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/* ��������� ������� ��� ������������ �� K ��������� �� N. */

#include "stdafx.h"
#include "iostream.h"

int N, K;
int counter;

void PrintPermutations(int CurToExcess, int* pEls)
{
	if(CurToExcess==(N-1))	//�������� ���� ������������� ������ - � ��������
	{						//����� ����� �������
		for(int j=1; j<=K; j++)
		{
			for(int i=0; i<(N-1); i++) cout << '(' << *(pEls+i) << ')';	
			cout << '(' << j << ')';
			counter++;
			cout << "    " << counter;
			cout <<endl;
		}
	}
	else	//����� ��� ����� - ���������� ���������������
	{
		for(int i=1; i<=K; i++)
		{
			*(pEls+CurToExcess)=i;
			PrintPermutations(CurToExcess+1, pEls);
		}
	}
}

void main(int argc, char* argv[])
{
	cout << "How many cells? ";
	cin >> N;
	cout << endl;

	cout << "How many values possible for any cell? ";
	cin >> K;
	cout << endl;

	int* pEls=new int[N];
	PrintPermutations(0, pEls);
	delete[] pEls;
}


