#include "circle.h"
#include <math.h>
#include <iostream>
using namespace std;
Circle::Circle() //default constructor
{
	radius = 0;
}
Circle::Circle(double r)
{
	radius = r;
}
void Circle::setRadius(double r)
{
	radius = r;
}
double Circle::getRadius()
{
	return radius;
}
void Circle::calculateArea()
{
	area = 3.1416*pow(radius, 2);
}
void Circle::calculatePerimeter()
{
	perimeter = 2 * 3.1416*radius;
}
void Circle::printInfo()
{
	cout << "radius: " << radius << endl;
	cout << "area: " << area << endl;
	cout << "perimeter: " << perimeter << endl;
}
