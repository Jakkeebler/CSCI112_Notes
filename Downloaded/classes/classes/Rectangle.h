#pragma once
//#ifndef RECTANGLE_H
//#define RECTANGLE_H
class Rectangle
{
private:
	double length;
	double width;
public:
	Rectangle(); //default constructor
	Rectangle(double length, double width); // constructor with two arugments
	void setLength(double l); // setter function
	/*
	function sets member length with l
	*/
	double getLength();
	void setDimnension(double length, double width);
	void print();
	double getArea();
	double getPrimeter();
	~Rectangle();
};

//#endif