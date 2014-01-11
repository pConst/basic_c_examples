// Division.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	for(int i=0;i<20;i++)
	{
		cout << i << ' ' << i/4 << ' ' << i%4 << endl;
	}
}
