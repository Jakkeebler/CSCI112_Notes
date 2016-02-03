#include <iostream>
#include "Rectangle.h"
#include "circle.h"

using namespace std;

Rectangle getRectangle()
{
	Rectangle r;
	double l, w;
	cout << "enter length: ";
	cin >> l;
	cout << "enter width: ";
	cin >> w;
	r.setDimnension(l, w);
	return r;
}

void setValues(Rectangle &r1)
{
	r1.setDimnension(10, 2);
}

int main()
{
	//Rectangle r4 = getRectangle();
	//r4.print();
	//cout << "area= " << r4.getArea() << endl;
	//cout << "perimeter = " << r4.getPrimeter() << endl;
	Circle c = Circle(); //instatntiate an object c of type Circle class
	c.setRadius(2);
	c.calculateArea();
	c.calculatePerimeter();
	c.printInfo();
	cout << "Enter raidus of a cirlce: ";
	double rad;
	cin >> rad;
	Circle c1 = Circle(rad);
	c1.calculateArea();
	c1.calculatePerimeter();
	c1.printInfo();
	Rectangle r;
	setValues(r);
	r.print();
	cin.get();
	cin.get();
	return 0;
}

