// Darren Butler
// Computer Science I - Dr. Johnson
// Lab 7 - While Loops                    
// Date: 10/18/2018
// Purpose: This table will print out a salary that increases by 10%
// every year until the salary is greater than or equal to 50,000.

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//CONSTANTS

const double RAISE_RATE = 1.1;

int main()
{
	//OPEN FILE
	ofstream outfile;
	outfile.open("Output.txt");

	//VARIBALE DELCARATIONS
	double newSalary = 20000;
	int year = 1;

	//OUTPUT HEADER
	outfile << "Darren Butler" << "\n";
	outfile << "Computer Science I - Dr. Johnson" << "\n";
	outfile << "Lab 7 - While Loops" << "\n";
	outfile << "Date: 10/18/2018" << "\n";
	outfile << "Purpose: This table will print out a salary"
		<< "that increases by 10%" << "\n"
		<< " every year until the salary is greater than or equal to 50,000."
		<< "\n\n";

	//Header for table
	outfile << left << setw(11)  << "Year" << setw(8) << "Salary" << "\n";

	outfile << "-------------------" << "\n";

	//Print first year
	outfile << right << setw(2) << year << setw(11) << "$ "
		<< fixed << setprecision(2) << newSalary << "\n";

	//Loop to find the remaining years.
	while (newSalary <= 50000)
	{
		//Calculate the new salary
		newSalary *= RAISE_RATE;

		//Increase the year by 1 
		year++;

		//Print the remaining rows for following years
		outfile << right << setw(2) << year << setw(11) << "$ "
			<< fixed << setprecision(2)<< newSalary << "\n";
	}
	//Close File
	outfile.close();

}