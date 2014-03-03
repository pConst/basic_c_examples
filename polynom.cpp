//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа решает квадратное уравнение.*/

#include "stdafx.h"
#include "iostream.h"
#include "math.h"

int main(int argc, char* argv[])
{
	int a,b,c;
	float d,x1,x2;
	char onExit;
	
	do
	{
		cout << '\n';
		cout << "What are a,b,c parameters of your ax2+bx+c=0 equation ???" << '\n';
		cin >> a >> b >> c;
		cout << '\n';

		if (d=b*b-4*a*c)
		{										//d<>0 case
			if (d>0)
			{									//d>0 subcase
				x1=(-b+sqrt(d))/(2*a);
				x2=(-b-sqrt(d))/(2*a);
				cout << "Two roots: " << '\n';
				cout << "x1 = " << x1 << '\n';
				cout << "x2 = " << x2 << '\n';
			}
			else								//d<0 subcase
			{
				cout << "Only complex roots" << '\n';
			}
		}
		else									//d==0 case
		{
			x1=x2=-b/(2*a);
			cout << "One real root:" << '\n';
			cout << "x1 = x2 = " << x1 << '\n';
		}

		cout << '\n';
		cout << "Would you like to repeat computation??? (y/n)" << '\n';
		cin >> onExit;
	}
	while(onExit=='y' || onExit=='Y');
	cout << '\n';
 
	return 0;
}

