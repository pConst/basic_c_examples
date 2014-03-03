//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/* ������������� ���� ������� � ����� ������������� ����� �������. */

#include "stdafx.h"
#include "iostream.h"

int PS(int i, int n)					// ���������� ���� ����
{
	if(i<0||n<2*i) return 0;
	if(i==0) return 1;					// ������ ����������� �������
	if(n==2*i) return 2*PS(i-1, n-1);	// ������ ����������� �������
	return (PS(i, n-1)+PS(i-1, n-1));	// ������ ����������� �������
}

int Sigma_n(int i, int n)
{
	int s=0;
	for(int vn=0; vn<=n; vn++) s+=PS(i,vn);
	return s;
};

int Sigma_i(int i, int n)
{
	int s=0;
	for(int vi=0; vi<=i; vi++) s+=PS(vi,n);
	return s;
};

/* ������ ���������� - � ���������� �������� ��������

int Sum4PS(int i, int n)				// ���������� ����� ������ ����
{
	if(i==0) return n+1;				// ����������� ������� ������
	if(n<2*i) return 0;					// ��� ��� �� �������!
	if(n==2*i) return PS(i,n);			// � ����� ����� ���� ����
	if(i==1) return (n-1)*(n+2)/2;		// ���� ������� ������, ����� ������ ��������,
										//  �� �� ����� ������� ��������!
	int s=0;
	if((2*i)<=(n-1))
	{
		for (int k=2*i; k<=(n-1); k++)
			s=s+Sum4PS(i-1,k);
	}
	return ((n-2*i+1)*PS(i,2*i)+s-Sum4PS(i-1,2*i-1)*(n-2*i));
										// ����� �������
}
*/

void main(int argc, char* argv[])
{
	for (int c1=0; c1<20; c1++)			// ����
	{
		for (int c2=0; c2<10; c2++)
		{
			cout << PS(c2,c1) << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (c1=0; c1<20; c1++)				// ����� ����� �� i
	{
		for (int c2=0; c2<10; c2++)
		{
			cout << Sigma_i(c2,c1) << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (c1=0; c1<20; c1++)				// ����� ����� �� n
	{
		for (int c2=0; c2<10; c2++)
		{
			cout << Sigma_n(c2,c1) << " ";
		}
		cout << endl;
	}
	cout << endl;

}

