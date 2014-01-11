// rpn.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string str;

int NextTag=0;
int* Tags[50];

int NextStepPtrs=0;
int* StepPtrs[4][50];

int* StepConstructor(int beg, int end);

void main(int argc, char* argv[])
{
	str.reserve(100);
	cout << "Type in your expression here:" << endl << endl;
	cin >> str;
	cout << endl;
	
	int* pResult=StepConstructor(0,str.size());
}

int* StepConstructor(int beg, int end)
{
	int LastOpened;
	do
	{
		LastOpened=-1;
		for(int i=beg; i<end; i++)
		{
			if(str[i]=='(') 
			{
				LastOpened=i;
				continue;
			}
			if(str[i]==')' && LastOpened!=-1)
			{
				Tags[NextTag]=StepConstructor(LastOpened+1, i);
				str.erase(LastOpened, (i-LastOpened+1));
				end-=(i-LastOpened+1);
				char tmp[5];
				string s;
				itoa(NextTag, tmp, 10);
				s=tmp;
				s="@"+s;
				s=s+"@";
				str.insert(LastOpened, s);
				NextTag++;
				break;
			}
		}
		cout << str << endl;
	} while(LastOpened!=-1);


	return 0;
}