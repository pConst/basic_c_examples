//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

/*Программа тренирует навык вызова конструктора (cписок инициализации элементов)
  и работу с конструктором копирования.*/

#include "stdafx.h"
#include "iostream.h"

class Coord_2d
{	const int timestamp;
	int x;
	int y;
	int* x_ptr;
public:
	Coord_2d(int _x=2, int _y=2, int _timestamp=1985);
	Coord_2d(Coord_2d* _obj);

	void setcoord(int _x, int _y);
	void getcord(int& _x, int& _y, int& _timestamp);
	int* get_x_ptr();
};

//	Константные данные-члены можно инициализировать только так!!!
Coord_2d::Coord_2d(int _x, int _y, int _timestamp): 
	x(_x), y(_y), timestamp(_timestamp), x_ptr(&x) {}

Coord_2d::Coord_2d(Coord_2d* _obj): 
	x(_obj->x),x_ptr(&x), y(_obj->y), timestamp(_obj->timestamp) {}

void Coord_2d::setcoord(int _x, int _y) {x=_x; y=_y;}

void Coord_2d::getcord(int& _x, int& _y, int& _timestamp) 
	{_x=x; _y=y; _timestamp=timestamp;}

int* Coord_2d::get_x_ptr() {return x_ptr;}

void main(int argc, char* argv[])
{
	Coord_2d obj1(1, 1, 2005), obj2;
	int x1, y1, t;

	cout << "Size of class= " << sizeof(Coord_2d) << endl << endl;

	obj1.getcord(x1, y1, t);
	cout << "Obj1`s address is " << &obj1 << endl;
	cout << "Obj1.x`s address is " << obj1.get_x_ptr() << endl;
	cout << "obj1.x= " << x1 << endl;
	cout << "obj1.y= " << y1 << endl;
	cout << "obj1.t= " << t << endl << endl;

	obj2.getcord(x1, y1, t);
	cout << "Obj2`s address is " << &obj2 << endl;
	cout << "Obj2.x`s address is " << obj2.get_x_ptr() << endl;
	cout << "obj2.x= " << x1 << endl;
	cout << "obj2.y= " << y1 << endl;
	cout << "obj2.t= " << t << endl << endl;
	
/*Здесь вызывается конструктор копирования по умолчанию СОЗДАННЫЙ КОМПИЛЯТОРОМ.
  Создаётся ПОБИТОВАЯ копия. Это значит, что ссылки и указатели, определённые в
  исходном классе, будут указывать на те же адреса.
  Если эти ссылки должны различаться в каждом объекте,нужно писать СВОИ 
  конструкторы копирования, желательно работающие через указатель, а не ссылку.*/
	Coord_2d obj3=obj1;
	obj3.getcord(x1, y1, t);
	cout << "Obj3`s address is " << &obj3 << endl;
	cout << "Obj3.x`s address is " << obj3.get_x_ptr() << endl;
	cout << "obj3.x= " << x1 << endl;
	cout << "obj3.y= " << y1 << endl;
	cout << "obj3.t= " << t << endl << endl;

/*ИДЕАЛЬНЫЙ ВАРИАНТ. Так и нужно делать. Прелесть в том, что сам указываешь,
  КАК понимать присвоение. В частности, куда должны указывать ссылки и указатели,
  находящиеся внутри объекта.*/
	Coord_2d obj4(&obj1);
	obj3.getcord(x1, y1, t);
	cout << "Obj4`s address is " << &obj4 << endl;
	cout << "Obj4.x`s address is " << obj4.get_x_ptr() << endl;
	cout << "obj4.x= " << x1 << endl;
	cout << "obj4.y= " << y1 << endl;
	cout << "obj4.t= " << t << endl << endl;
}
