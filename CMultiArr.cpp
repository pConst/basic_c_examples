//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

#include "stdafx.h"
#include <iostream.h>
#include "MultiArr.h"

void main(int argc, char* argv[])
{
	int N=0;
	cout << "Enter Dim: ";
	cin >> N;
	cout << endl;
	
	int* pDealWithMA=new int[N];
	for(int i=0; i<N; i++) pDealWithMA[i]=i+1;
	CMultiArr MA(N, pDealWithMA);
	for(i=1; i<=N; i++) cout << MA.GetBound(i) << endl;
}
