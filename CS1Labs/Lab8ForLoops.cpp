// Darren Butler
// Computer Science I - Dr. Johnson
// Lab 8 - For Loops                    
// Date: 10/22/2018
// Purpose: This program uses a for loop to make a 10X10 table in which
// each entry in the table is the sum of the row and column number.
// It also  prints out an accumlator that that calculates the sum of
// all entries in an appropriate statement. Everything is printed
// to an output file

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	//VARIABLE DELCARATIONS
	int r, c, accumulator, sum;
	ofstream outfile;
	
	//OPEN FILE
	outfile.open("Output.txt");

	//OUTPUT HEADER
	outfile << "Darren Butler" << "\n";
	outfile << "Computer Science I - Dr. Johnson" << "\n";
	outfile << "Lab 8 - For Loops" << "\n";
	outfile << "Date: 10/22/2018" << "\n";
	outfile << "This program uses a for loop to make a 10X10 table in which"
		<< "\n"
		<< "each entry in the table is the sum of the row and column number."
		<< "\n"
		<< "It also  prints out an accumlator that that calculates the sum of"
		<< "\n"
		<< "all entries in an appropriate statement. Everything is printed"
		<< "\n"
		<< "to an output file"
		<< "\n\n";

	// PROGRAM SPECIFIC OPERATIONS
	
	// When processing a table with a nested loop, the row loop goes on the
	// outside, and the column loop goes on the inside
	accumulator = 0; //Accumulator starts at 0
	for (r = 1; r <= 10; r++) 
	{
		for (c = 1; c <= 10; c++)
		{
			sum = r + c;
			accumulator += sum;
			outfile << setw(3) << sum;
			
		}
		outfile << '\n'; // Separates each row of the table
		
	}
	outfile << "\n";
	outfile << "The sum of all entries is " << accumulator << "\n";
	system("pause");

	//CLOSE FILE
	outfile.close();
	return 0;
}