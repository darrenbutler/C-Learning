// Darren Butler
// Computer Science I - Dr. Johnson
// Lab 10 - Arrays                    
// Date: 11/12/2018
// Purpose: This program loads an array of size 100
// with values from 0 to RAND_MAX.
// This also searches the array and prints out the 
// largest number and its position. Finally, it
// calculates and prints the average of the values.

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void printHeader(ofstream &outfile);

int main()
{
	//VARIBALE DELCARATIONS
	int largestNum = -1; //initialize to -1 to check if it's updating
	int position = 0, sum = 0;
	double average = 0;

	ofstream outfile;
	outfile.open("Output.txt");
	printHeader(outfile);

	srand(5); // initialize a random number seed to 7
	const int size = 100; // Note: this is a constant NOT a variable.
	int Values[size]; // Here is the array declaration
					  // Load the array
	for (int i = 0; i < size; i++)
	{
		Values[i] = rand(); //Storing values from 1 to RAND_MAX
	} // Loads a die throw.

	// Searches the contents of the array.
	for (int i = 0; i < size; i++)
	{
		//If the value at index i in the Values array
		//is larger than the value stored in largestNum.
		//Store the value in index i in largestNum
		if (Values[i] > largestNum)
		{
			largestNum = Values[i];
			position = i;
		}

		//Calculates the sum
		sum += Values[i];
	}	

	//Calculates the average
	average = sum / size;

	//Print the largest value
	outfile << "The largest value is: " << largestNum
		<< " at position: " << position << "\n";

	//Prints the average
	outfile << "The average is " << average << "\n";
	outfile << "\nEND OF OUTPUT\n";

	outfile.close();
	system("pause");
	return 0;
}

// Function: printHeader
// Input: accepts one ofstream parameter 
// Process: prints file header to file
// Output: none
// Additional comments: & = Point to same memory location
void printHeader(ofstream &outfile) {
	outfile << "Darren Butler\n";
	outfile << "Computer Science I - Dr. Johnson\n";
	outfile << "Lab 9 - Functions\n";
	outfile << "Date: 11/5/2018\n";
	outfile << "Purpose: This program loads an array of size 100\n"
		<< "with values from 0 to RAND_MAX./n"
		<< "This also searches the array and prints out the\n"
		<< "largest number and its position. Finally, it\n"
		<< "calculates and prints the average of the values.\n";
	outfile << "\n\n"; 
	
}