//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа тренирует навык вызова конструктора.*/

#include "stdafx.h"
#include "iostream.h"

class Coord_2d
{	int x;
	int y;
public:
	Coord_2d(int _x=2,int _y=2);
	void setcoord(int _x,int _y);
	void getcord(int& _x,int& _y);
};

Coord_2d::Coord_2d(int _x,int _y)
{
	x=_x;
	y=_y;
}

void Coord_2d::setcoord(int _x,int _y)
{
	x=_x;
	y=_y;
}

void Coord_2d::getcord(int& _x,int& _y)
{
	_x=x;
	_y=y;
}

void main(int argc, char* argv[])
{
	Coord_2d obj1(1,1),obj2;
	int x1,y1;

	obj1.getcord(x1,y1);
	cout << "obj1.x= " << x1 << endl;
	cout << "obj1.y= " << y1 << endl;
	obj2.getcord(x1,y1);
	cout << "obj2.x= " << x1 << endl;
	cout << "obj2.y= " << y1 << endl << endl;

	obj1.setcoord(-10,30);
	obj2=obj1;

	obj1.getcord(x1,y1);
	cout << "obj1.x= " << x1 << endl;
	cout << "obj1.y= " << y1 << endl;
	obj2.getcord(x1,y1);
	cout << "obj2.x= " << x1 << endl;
	cout << "obj2.y= " << y1 << endl << endl;

}
