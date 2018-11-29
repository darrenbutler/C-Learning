//Darren Butler
//Computer Science I - Dr. Johnson
//Lab 11 - Structs & Structs of Arrays
//Purpose: This program prints out all students who have a gpa
//above 3. calculates the average GPA of all students,
//counts the number of freshmen, sophomores, juniors, and seniors,
//and prints the results
#include <iostream>
#include <fstream>
#include <cstdlib> // For the exit function
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	ifstream infile;
	ofstream outfile;
	
	struct Student {
		string lastName;
		string firstName;
		int classification;
		float gpa;
	};

	//Array that holds struct of student records
	Student list[100];

	// Number of records in file
	int num; 
	//Average GPA
	double averageGPA;
	//Sum of GPAs
	double sum = 0;
	//Number of different classifications
	int freshman = 0, sophmore = 0, junior = 0, senior = 0, totalStudents = 0;


	infile.open("names.txt");
	outfile.open("output.txt");

	outfile << "Darren Butler\n";
	outfile << "Computer Science I - Dr. Johnson\n";
	outfile << "Lab 11 - Structs & Structs of Arrays\n";
	outfile << "Purpose: This program prints out all students who have a gpa\n";
	outfile << "above 3. calculates the average GPA of all students,\n";
	outfile << "counts the number of freshmen, sophomores, juniors, " <<
		"and seniors, \n";
	outfile << "and prints the results.\n\n";

	// If file could not be opened, display error message
	if (!infile) 
	{
		cerr << "Error: file could not be opened" << '\n';
		exit(1);
	}

	// Read in the number of records in the file
	infile >> num; 
	
	// Read in the file line by line
	for (int i = 0; i < num; i++)
	{
		infile >> list[i].lastName >> list[i].firstName >>
			list[i].classification >> list[i].gpa;
	}

	// Print out the third record as a test case
	cout << list[3].firstName << " " << list[3].lastName << " "
		<< list[3].classification << " " << list[3].gpa << '\n';

	//Print out all students who have a gpa
	//above 3.0. Print the last name, first name and gpa for each student.
	//Loop for the amount of records in the file, which is stored in (num)
	outfile << "Students with GPAs above 3.0 are:\n";
	for (int i = 0; i < num; i++) {		
		if (list[i].gpa > 3.0)
		{
			outfile << list[i].firstName << " " << list[i].lastName << " "
				<< list[i].classification << " " << list[i].gpa << '\n';
		}
	}
	outfile << "\n";

	//Calculate and print the average gpa of all the students in the list
	for (int i = 0; i < num; i++) {		
		sum += list[i].gpa;		
	}
	averageGPA = sum / num;
	outfile << "The average GPA is: " << fixed << setprecision(2) << averageGPA 
		<< "\n";

	//Count and print the number of freshmen, sophomores, juniors, seniors 
	//and total students.
	for (int i = 0; i < num; i++) {
		switch (list[i].classification)
		{
		case 0:
			freshman++;
			break;
		case 1:
			sophmore++;
			break;
		case 2:
			junior++;
			break;
		case 3:
			senior++;
			break;
		default:
			outfile << "Unrecognized classification!\n";
			break;
		}
	}
	totalStudents = num;

	outfile << "Freshmans: " << freshman << " ";
	outfile << "Sophmores: " << sophmore << " ";
	outfile << "Juniors: " << junior << " ";
	outfile << "Seniors: " << senior << " ";
	outfile << "Total: " << totalStudents << "\n";
	outfile.close();
	system("pause");
	return 0;
}