// Darren Butler
// Computer Science I - Dr. Johnson
// Lab 9 - Functions                    
// Date: 11/5/2018
// Purpose: This program find the biggest number out of 3 
// numbers

#include <iostream>
#include <fstream>

using namespace std;


int FindMax(int N1, int N2, int N3);
void PrintVal(int X, ofstream &outfile1);
void PrintHeader(ofstream &outfile);

int main()
{
	ofstream outfile;
	outfile.open("Output.txt");// Open file
	int Biggest, A, B, C;

	PrintHeader(outfile);

	cout << "Please input 3 integers for A, B, and C.\n";
	cin >> A >> B >> C;

	Biggest = FindMax(A, B, C);
	PrintVal(Biggest, outfile);
	outfile.close(); //Close file
	
	system("pause");
	return 0;
}

// Function: FindMax
// Input: accepts 3 integer parameters
// Process: Determines the maximum of 3 numbers
// Output: returns the largest number
// Additional comments: none
int FindMax(int N1, int N2, int N3)
{
	// not the most efficient method for finding max
	int Big; 
	if (N1 >= N2 && N1 >= N3)
		Big = N1;
	else if (N2 >= N1 && N2 >= N3)
		Big = N2;
	else
		Big = N3;
	return Big;
}

// Function: PrintVal
// Input: accepts one integer parameter and one ofstream parameter
// Process: print input parameter to a file
// Output: none
// Additional comments: & = Point to same memory location
void PrintVal(int X, ofstream &outfile) 
{
	outfile << "The answer is " << X << "\n";
}

// Function: PrintHeader
// Input: accepts one ofstream parameter 
// Process: prints file header to file
// Output: none
// Additional comments: & = Point to same memory location
void PrintHeader(ofstream &outfile) {
	outfile << "Darren Butler\n";
	outfile << "Computer Science I - Dr. Johnson\n";
	outfile << "Lab 9 - Functions\n";
	outfile << "Date: 11/5/2018\n";
	outfile << "Purpose: This program find the biggest number out of 3\n"
		<< "numbers";
	outfile << "\n\n";
}