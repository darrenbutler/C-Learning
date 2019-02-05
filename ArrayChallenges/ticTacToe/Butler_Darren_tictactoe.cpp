/*--------------------------------------------------------------------
Name: Darren Butler

Course: CS 1063, Dr. Wuthrich
--------------------------------------------------------------------*/

#include<iostream>
#include<fstream>

using namespace std;

void getGrid(char currentGrid[3][3], ifstream& readInputFile);
void findWinner(char currentGrid[3][3], bool& winnerFound, char playerz[2],
    char& winner);
bool checkProgress(char grid[3][3]);

int main() {
    char grid[3][3];
    char players[] = { 'X', 'O' };

    
    char winner; // Variable for storing winning players
    bool thereIsWinner;
    int numGames = 0;
    bool stillInProgress = false;

    ofstream printToOutputFile;
    ifstream readInputFile;

    readInputFile.open("tic.dat");
    printToOutputFile.open("Butler_Darren_tictactoe.txt");

    printToOutputFile << "Darren Butler\n";
    
    if (readInputFile) { //check if file can be opened
        // Read in number of game grids
        readInputFile >> numGames;
        for (int x = 1; x <= numGames; x++) {
            
            getGrid(grid, readInputFile);
            
            

            // Reset the thereIsWinner variable to false
            // for each new game
            thereIsWinner = false;
            winner = NULL;

            findWinner(grid, thereIsWinner, players, winner);
            
            if (thereIsWinner) {
                printToOutputFile << winner << " won the game.\n";

                // Check if game is still in progress or cat won the game
            }
            else {
                stillInProgress = checkProgress(grid);

                if (stillInProgress) {
                    printToOutputFile << "Game " << x << 
                        " is still in progress\n";
                }
                else {
                    printToOutputFile << "Cat won the game.\n";
                }  
            }
        } // end of loop that checks grid
    } // end of if(readInputFile)
    else
        printToOutputFile << "File could not be opened.\n";
    printToOutputFile.close();
    system("pause");
    return 0;
} // end of main


//Function: getGrid
// Input: accepts one 2d char array and infile object
// Process: Put contents of grid into a 2d array
// Output: none
// Additional comments: 
void getGrid(char currentGrid[3][3], ifstream& readInputFile) {
    // Read in values for the current grid
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++)
            readInputFile >> currentGrid[row][col];
    }
}

//Function: findWinner
// Input: accepts one 2d char array, one reference
    //boolean, and one 1d char array
// Process: Checks the rows, columns, and diagonals for matches against X and O
// Output: None. Updates boolean and char value
// Additional comments: 
void findWinner(char currentGrid[3][3], bool& winnerFound, char playerz[2],
char& winner) {

    //Go through the player array and check the posittions with each element
    //(X and O) in the array. If each of the elements in the 2d grid match
    //X or O from the playerz array, there is a three in a row match

    for (int index = 0; index < 2; index++) {        
        // Check the rows
        for (int i = 0; i < 3; i++) {
            if ((currentGrid[i][0] == playerz[index]) && (currentGrid[i][1] == 
                playerz[index]) && (currentGrid[i][2] == playerz[index]))
            {
                winnerFound = true;
                winner = playerz[index];
            }
        }
       
        //Check the columns
        for (int i = 0; i < 3; i++) {
            if ((currentGrid[0][i] == playerz[index]) && (currentGrid[1][i] == 
                playerz[index]) && (currentGrid[2][i] == playerz[index]))
            {
                winnerFound = true;
                winner = playerz[index];
            }
        }

        // Check the Diagonals     
        for (int i = 0; i < 3; i++) {
            if ((currentGrid[0][0] == playerz[index]) && (currentGrid[1][1] == 
                playerz[index]) && (currentGrid[2][2] == playerz[index]))
            {
                winnerFound = true;
                winner = playerz[index];
            }
            
            if ((currentGrid[0][2] == playerz[index]) && (currentGrid[1][1] == 
                playerz[index]) && (currentGrid[2][0] == playerz[index]))
            {
                winnerFound = true;
                winner = playerz[index];
            }
        }
    }

}

//Function: checkProgress
// Input: accepts one 2d char array
// Process: Checks if game is still in progress or not
// Output: boolean
// Additional comments: 
bool checkProgress(char grid[3][3]) {
    bool stillInProgress = false;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            //
            if (grid[r][c] == '.') {
                stillInProgress = true;
                c = 4;
                r = 4;
            }
        }
    }
    return stillInProgress;
}




