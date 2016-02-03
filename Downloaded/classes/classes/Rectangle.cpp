#include <iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle() //default constructor
{
	length = 1;
	width = 1;
}

Rectangle::Rectangle(double length, double width) // constructor with two arugments
{
	this->length = length;
	this->width = width;
}

void Rectangle::setLength(double l) // setter function
{
	if (l < 0)
	{
		cout << "negative allowed not allowedj. length is set to 0\n";
		length = 0;
	}
	else
		length = l;
}

double Rectangle::getLength()
{
	return this->length;
}

void Rectangle::setDimnension(double length, double width)
{
	this->length = length;
	this->width = width;
}

void Rectangle::print()
{
	cout << "length = " << this->length << " " << "width " << this->width << "\n\n";
}

double Rectangle::getArea()
{
	return length*width;
}

double Rectangle::getPrimeter()
{
	return 2 * (length + width);
}

Rectangle::~Rectangle()
{
	cout << "destructor called! object going outof scope..." << endl;
}