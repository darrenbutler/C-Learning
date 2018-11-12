// Darren Butler
// Computer Science I - Dr. Johnson
// Lab 5 – If/Else Statements and Nested If/Else Statements
// Date: 10/1/2018
// This program asks for the total purchase amount, 
// calculates the discount and new amount, then 
// prints the total purchase, discount, and new price for 
// six items.

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	//Varibale Declarations
	//These are fore calculation
	double totalPurchase = 0, discount = 0, newPrice = 0;

	//Variables for the output file
	ofstream outfile;
	outfile.open("Output.txt");
	
	//OUTPUT HEADER
	outfile << "Darren Butler" << '\n';
	outfile << "Computer Science I - Dr. Johnson" << "\n";
	outfile << "Lab 5 – If/Else Statements and Nested If/Else Statements" 
		<< "\n";
	outfile << "Date: 10/1/2018" << "\n";
	outfile << "This program asks for the total purchase amount," << "\n"
		<< "calculates the discount and new amount, then" << "\n"
		<< "prints the total purchase, discount, and new price for" << "\n"
		<< "six items." << "\n\n";


	//This is for the loop. The loop should run for 6 items
	int count = 1; 
	while (count <= 6)
	{
		//Insert cin & calculations here – output to file

		//CHANGE THIS BACK TO COUT!!
		cout << "Please enter the total purchase: ";
		cin >> totalPurchase;

		//If statements here
		//Determine the discount
		//Determine the new price
		if (totalPurchase < 100)
		{
			discount = 0.1 * totalPurchase;
		}
		else if (totalPurchase < 250)
		{
			discount = 0.2 * totalPurchase;
		}
		else if (totalPurchase < 500)
		{
			discount = 0.3 * totalPurchase;
		}
		else if (totalPurchase < 1000)
		{
			discount = 0.4 * totalPurchase;
		}
		else
		{
			discount = 0.5 * totalPurchase;
		}

		//Determine the new price according to discount and total purchase
		newPrice = totalPurchase -  discount;

		//Print the table
		outfile << left << setw(16) << "Total Purchase" << "$"
			<< right << setw(8) << fixed << setprecision(2) 
			<< totalPurchase << "\n";
		outfile << left << setw(16) << "Discount" << "$"
			<< right << setw(8) << fixed << setprecision(2) 
			<< discount << "\n";
		outfile << "---------------------------" << "\n";
		outfile << left << setw(16) << "New Price" << "$"
			<< right << setw(8) << fixed << setprecision(2) 
			<< newPrice << "\n" << "\n";
		count += 1;
	}
	
	//Close output file
	outfile.close();
	system("pause");
	return 0;
}