/*************************************************
 * Function: Tic Tac Toe game
 * *********************************************
 * Purpose: having fun
 * ***********************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void printBoard(char* boardArr, char player1Choice, char player2Choice, char player1Selection, 
                char player2Selection, int control);
bool winCondition(char player1Choice, char player2Choice, char player1Selection, char player2Selection, int& row1Total, int& row2Total, 
                int& row3Total, int& column1Total, int& column2Total, int& column3Total, int& DiagonalLRTotal, 
                int& DiagonalRLTotal, int control);

int main () {

    system("clear");
    char playAgain = 'y';
    bool catsGame;
    bool player1Wins;
    bool player2Wins;
    char player1Choice;
    char player2Choice;
    int sumPlayerSelections;
    char player1Selection;
    char player2Selection;
    int row1Total;
    int row2Total;
    int row3Total;
    int column1Total;
    int column2Total;
    int column3Total;
    int DiagonalLRTotal;
    int DiagonalRLTotal;
    int control;
    // char boardArr[10];  

    do
    {
        catsGame = false;
        player1Wins = false;
        player2Wins = false;
        player1Choice = '\0';
        player2Choice = '\0';
        sumPlayerSelections = '\0';
        player1Selection = '\0';
        player2Selection;
        row1Total = 0;
        row2Total = 0;
        row3Total = 0;
        column1Total = 0;
        column2Total = 0;
        column3Total = 0;
        DiagonalLRTotal = 0;
        DiagonalRLTotal = 0;
        control = 0;
        char boardArr[10] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};


        // Prompt player 1 for marker selection.
        cout << "Player 1, would you like to be 'x' or o'? (Enter x/o): ";
        cin >> player1Choice;
        if (player1Choice == 'x')
        {
            player2Choice = 'o';
        }
        else
        {
            player2Choice = 'x';
        }

        // Enter game logic
        do
        {
            system("clear");

            //Print board with player selections.
            printBoard(boardArr, player1Choice, player2Choice, player1Selection, player2Selection, control);

            // Get player 1 choice
            cout << "Player 1 make your selection (1-9): ";
            cin >> player1Selection;
            sumPlayerSelections = sumPlayerSelections + player1Selection;
            control = 1;

            // Check win condition for player 1
            player1Wins = winCondition(player1Choice, player2Choice, player1Selection, player2Selection, row1Total, row2Total, 
                    row3Total, column1Total, column2Total, column3Total, DiagonalLRTotal, 
                    DiagonalRLTotal, control);
            
            
            
            // Print congrats screen if player 2 is victorious
            if (player1Wins)
            {
                printBoard(boardArr, player1Choice, player2Choice, player1Selection, player2Selection, control);
                cout << "Congratulations Player 1! To the victor go the spoils!!" << endl;
                break;
            }
            
            // Check for cats game
            if (sumPlayerSelections == 477)
                {
                    printBoard(boardArr, player1Choice, player2Choice, player1Selection, player2Selection, control);
                    cout << "An evenly matched game. A cats game!" << endl;
                    catsGame = true;
                    break;
                }
            
            // Print board again
            printBoard(boardArr, player1Choice, player2Choice, player1Selection, player2Selection, control);

            // Get player 2 choice
            cout << "Player 2 make your selection (1-9): ";
            cin >> player2Selection;
            sumPlayerSelections = sumPlayerSelections + player2Selection;
            control = 2;

            // Check win condition for player 2
            player2Wins = winCondition(player1Choice, player2Choice, player1Selection, player2Selection, row1Total, row2Total, 
                    row3Total, column1Total, column2Total, column3Total, DiagonalLRTotal, 
                    DiagonalRLTotal, control);

            // Print congrats screen if player 2 victorious
            if (player2Wins)
            {
                printBoard(boardArr, player1Choice, player2Choice, player1Selection, player2Selection, control);
                cout << "Congratulations Player 2! To the victor go the spoils!!" << endl;
                break;
            }

            // Check for cats game
            if (sumPlayerSelections == 477)
                {
                    printBoard(boardArr, player1Choice, player2Choice, player1Selection, player2Selection, control);
                    cout << "An evenly matched game. A cats game!" << endl;
                    catsGame = true;
                    break;
                }

        } while ((!player1Wins) && (!player2Wins) && (!catsGame));

        // Ask players if they would like to play again
        cout << "Run it back? (Enter y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y');
    return 0;
}