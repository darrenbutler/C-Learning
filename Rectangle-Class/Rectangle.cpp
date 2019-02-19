#include "Rectangle.h"
#include<iostream>
using namespace std;

// Implementation of default constructor
Rectangle::Rectangle()
{
	length = 10;
	width = 2;
}

//Implementation of parameterized constructor
Rectangle::Rectangle(double l, double w)
{
	if (l < 0)
		length = 1;
	else
		length = l;
	if (w < 0)
		width = 1;
	else
		width = w;
}
// Implementation of getters
double Rectangle::getLength() {
	return length;
}

double Rectangle::getWidth() {
	return width;
}
//Implementation of setters
void Rectangle::setLength(double l) {
	if (l < 0)
		l = 1;
	length = l;
}
void Rectangle::setWidth(double w) {
	if (w < 0)
		w = 1;
	width = w;
}

double Rectangle::perimeter() {
	double p;
	p = 2 * length + 2 * width;
	return p;
}

double Rectangle::area() {
	double a;
	a = length * width;
	return a;
}

Rectangle::~Rectangle()
{
	cout << "In the destructor\n";
}
