// Darren Butler
// Computer Science I - Dr. Johnson
// Lab 6 – Switch Statements
// Date: 10/8/2018
// Purpose: This program asks the user which formula they want to
// see and shows the formula according to the switch statement.

#include <iostream> 
#include <fstream>

using namespace std;

int main()
{
	//VARIABLE DECLARATIONS
	int selection;
	ofstream outfile;
	
	//Open the output file
	outfile.open("Output.txt");
	

	//OUTPUT HEADER - Print output header to file
	outfile << "Darren Butler" << "\n";
	outfile << "Computer Science I - Dr. Johnson" << "\n";
	outfile << "Lab 6 – Switch Statements" << "\n";
	outfile << "Date: 10/8/2018" << "\n";
	outfile << "Purpose: This program asks the user which formula they want to"
		<< "\n"
		<< "see and shows the formula according to the switch statement.";
	outfile << "\n\n";
	//LOOP TO CHECK EACH OUTCOME
	int count = 1;
	while (count <= 5)
	{
		int selection;
			
			//USER PROMPT. Write the prompt to the console not file!
			cout << "Which formula do you want to see?\n\n";
			cout << "1. Area of a circle\n";
			cout << "2. Area of a rectangle\n";
			cout << "3. Volume of a cylinder\n";
			cout << "4. None of them!\n";
			cin >> selection;
			
			//Output based on selection
			switch (selection)
			{
			case 1:
				outfile << "Pi times radius squared\n";
				break;
			case 2:
				outfile << "Length times width\n";
				break;
			case 3:
				outfile << "Pi times radius squared times height\n";
				break;
			case 4:
				outfile << "Well okay then...Goodbye!\n";
				break;
			default:
				outfile << "Not good with numbers, eh?\n";
				break;
			}
			
		outfile << "----------------------------------------\n";
		count += 1;
	}//End of LOOP TO CHECK EACH OUTCOME
	
	//Close the output file
	outfile.close();
	system("pause");
	return 0;
}

//Original IF Statement
			/*if (selection == 1)
				outfile << "Pi times radius squared\n";
			else if (selection == 2)
				outfile << "Length times width\n";
			else if (selection == 3)
				outfile << "Pi times radius squared times height\n";
			else if (selection == 4)
				outfile << "Well okay then...Goodbye!\n";
			else
				outfile << "Not good with numbers, eh?\n";*/