#include<iostream>
#include"Rectangle.h"

using namespace std;

int main() {
	Rectangle r1;
	Rectangle r2(5, 4);
	Rectangle r3(-4, 7);
	double myLength, myWidth;

	cout << r1.getLength() << '\t' << r1.getWidth() << endl;
	cout << "Please enter the lenth and width.  ";
	cin >> myLength >> myWidth;
	r1.setLength(myLength);
	r1.setWidth(myWidth);
	//r1.length = 25;

	cout << r1.getLength() << '\t' << r1.getWidth() << endl;

	//cout << r1.getLength() << endl;
	//cout << r2.getWidth() << endl;
	//cout << r3.getLength() << endl;

	cout << "Perimeter of r1 is " << r1.perimeter() << endl;
	cout << "Area of r2 is " << r2.area() << endl;

	r1.~Rectangle();

	system("pause");
	return 0;
}