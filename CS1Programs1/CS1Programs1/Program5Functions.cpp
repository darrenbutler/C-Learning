/*--------------------------------------------------------------------
Name: Darren Butler

Course: CS 1044, Section 101, Fall 18, Dr. Johnson

Purpose:This program will calculate the area of a triangle

--------------------------------------------------------------------*/

#include <iostream>
#include <iomanip>

using namespace std;

void heading();
void getSides(double &a, double &b, double &c);
double semiPerim(double a, double b, double c);
double area(double a, double b, double c);

int main() {

    double side1, side2, side3, triangleArea;
    heading();
    getSides(side1, side2, side3);
    triangleArea = area(side1, side2, side3);
    cout << fixed << setprecision(2);
    cout << "The area of your triangle is " << triangleArea << "\n";
    system("pause");
    return 0;
}

//Function: heading
//Input: None
//Process: Prints standard name and program explanation
//Output: None
void heading() {
    cout << "Name: Darren Butler\n";
    cout << "Course: CS 1044, Section 101, Fall 18, Dr. Johnson\n";
    cout << "Purpose:This program "
        << "will calculate the area of a triangle\n\n";
}

//Function: getSides
//Input: Accepts 3 double reference parameters
//Process: Includes the cout/cin prompts to obtain the lengths of 3 sides of
    //a triangle
//Output: None
//Additional Comments:Asks and allows user to input the lengths of 
    //3 sides of the triangle
void getSides(double &a, double &b, double &c) {
    cout << "Enter the legnths of the 3 sides\n";
    cin >> a >> b >> c;    
}

//Function: semiPerim
//Input: accepts 3 double value parameters
//Process: Uses the legnths of 3 sides to caluclate the semiperimeter
//Output: Returns the semiperimeter
double semiPerim(double a, double b, double c) {
    double s;
    s = (a + b + c) / 2;
    return s;
}

//Function: area
//Input: accepts 3 double value parameters
//Process: Uses the legnths of 3 sides and value returned by semiPerim() 
    //to calculate area
//Output: Returns the area
double area(double a, double b, double c) {
    double s, area;
    s = semiPerim(a, b, c);
    area = sqrt(s*(s - a)*(s - b)*(s - c));
    return area;
    
}