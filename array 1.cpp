//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*��������� ������������� ������ � ��������� ������� � ������� ����������.*/

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	int arr[2][3]={ {1,2,3},	//���������������� ����� � ����������� �������������
					{4,5,6} };	//����������� ���������� �������!!! (���������� 
								//�� �������� ������� � �������� ������ ��������)

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
