//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа демонстрирует доступ к файлу средствами stdio.*/

#include "stdafx.h"
#include "stdio.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	FILE* fin=fopen("a.dat", "rb");
	if(fin==NULL) cout << "ERR: fopen" << endl;

	if(fseek(fin, 0, SEEK_END)) cout << "ERR: fseek" << endl;
	int finLength=ftell(fin);
	if(finLength==-1L) cout << "ERR: ftell" << endl;
	rewind(fin);
	void* pData=new char[finLength];
	cout << fread(pData, 1, finLength, fin) << " of " << finLength << endl;

	if(fclose(fin)) cout << "ERR: fclose" << endl;

	for (int i=0;i<=finLength; i++) cout << *((char*)pData+i);
}
