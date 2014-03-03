//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Загадай число и прога его вычислит.
  Предполагается, что она угадывает, а ты говоришь ей "Мало", "Много" или "Угадал".
  В зависимости от величины диапазона будет меняться и число попыток.
  Диапазон можно задавать даже с отрицательными краями.*/

#include "stdafx.h"
#include "iostream.h"

void main(int argc, char* argv[])
{
	int LEdge=1,UEdge;
	int Numb;
	
	cout << "Low edge of number-could-be-set segment ";
	cin >> LEdge;

	do
	{	cout << "Upper edge of number-could-be-set segment ";
		cin >> UEdge;
	} while (LEdge>UEdge);

	do
	{	cout << "Set a number ";
		cin >> Numb;
	} while (Numb<LEdge || Numb>UEdge);
	
	int counter=0;
	int TryMiddle;
	cout << endl << "Cntr Try LEdge UEdge" << endl;
	while (LEdge!=UEdge)
	{	
		TryMiddle=(UEdge-LEdge)/2+LEdge;
		if (TryMiddle==Numb)
		{
			LEdge=Numb;
			UEdge=Numb;
			continue;
		}
		if (TryMiddle<Numb)
		{
			LEdge=TryMiddle+1;
		}
		else	// (TryMiddle>Numb)
		{
			UEdge=TryMiddle-1;
		}
		counter++;
		cout << counter << "  " << TryMiddle << "  " << LEdge << "  " << UEdge << endl;
	}
	
	cout << "This number is: " << LEdge << endl << endl;
}

