#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
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

	cin.get();
	cin.get();
}