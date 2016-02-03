#pragma once

class Circle
{
private:
	double radius;
	double area;
	double perimeter;
public:
	Circle(); //default constructor
	Circle(double r); //constructor takes one argument
	void setRadius(double r);
	double getRadius();
	void calculateArea();
	void calculatePerimeter();
	void printInfo();
};
