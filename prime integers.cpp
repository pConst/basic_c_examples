// prime integers.cpp : Defines the entry point for the console application.
//

/*��������� ��������� ���� ������� �����.
  ��������� ��, ��� ��� ���������� �������� ������������� ���
  ��������, � ������� ������� ��������� �������� ����������� �������.
  �� ������������� ������ "���������" �� ����������.*/

#include "stdafx.h"
#include "iostream.h"

int main(int argc, char* argv[])
{	
		
	for(int i=3; i<100000; i+=2)
	{
		for(int j=3; j<(i/3+1); j++)
		{
			if(i%j==0) break;
			if(j==i/3) cout << i << ' ';
		}
	}

	return 0;
}
