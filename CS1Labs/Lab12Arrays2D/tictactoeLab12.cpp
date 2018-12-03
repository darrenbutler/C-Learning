#include<iostream>
#include<fstream>
using namespace std;

int main() {
	char board[3][3];
	char token[] = { 'X', 'O' };
	// Variable for storing winning token
	char winner;
	bool winnerFound;
	ifstream infile;
	infile.open("ticLab12.txt");
	ofstream outfile;
	outfile.open("output.txt");
	int numGames = 0;
	if (infile) {
		// Read in number of game boards
		infile >> numGames;
		for (int x = 0; x < numGames; x++) {
			// Read in values for a single board
			for (int row = 0; row < 3; row++) {
				for (int col = 0; col < 3; col++)
					infile >> board[row][col];
			}
			// Display the game board
			for (int row = 0; row < 3; row++) {
				for (int col = 0; col < 3; col++)
					cout << board[row][col] << " ";
				// Go to next line for next row
				cout << '\n';
			}
			cout << '\n';
			// Reset the winnerFound variable to false
			// for each new game
			winnerFound = false;
			winner = NULL;

			// Step 6
			// Insert a loop to traverse the token array
			// and check for X first and then O
			// Go back and replace every occurrence of token[index] 
			// with token[index] (besides the initialization of token
			// Make sure your } is placed after step 5
			// 
			for (int index = 0; index < 2; index++) {
				// Step 2 
				// Insert a loop here that will check each row for a winner
				for (int i = 0; i < 3; i++) {
					if ((board[i][0] == token[index]) && (board[i][1] == token[index]) && (board[i][2] == token[index]))
					{
						winnerFound = true;
						winner = token[index];
					}
				}



				// Step 3
				// Insert a loop to check each column for a winner
				for (int i = 0; i < 3; i++) {
					if ((board[0][i] == token[index]) && (board[1][i] == token[index]) && (board[2][i] == token[index]))
					{
						winnerFound = true;
						winner = token[index];
					}
				}



				// Step 4
				// Insert an if statement to check the major diagonal
				for (int i = 0; i < 3; i++) {
					if ((board[0][0] == token[index]) && (board[1][1] == token[index]) && (board[2][2] == token[index]))
					{
						winnerFound = true;
						winner = token[index];
					}


					// Step 5
					// Insert an if statement to check the minor diagonal
					if ((board[0][2] == token[index]) && (board[1][1] == token[index]) && (board[2][0] == token[index]))
					{
						winnerFound = true;
						winner = token[index];
					}
				}
			}



				if (winnerFound)
					cout << "Game won by " << winner << '\n';

				// Step 7
				// Add an if statement here to check for no winner
				else cout << "Cat won the game.\n";


			
		} // end of loop that reads in a new card
	} // end of if(infile)
	else
		cout << "Could not open input file.\n";
	outfile.close();
	system("pause");
	return 0;
} // end of main