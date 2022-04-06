#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void printBoard(char* boardArr, char player1Choice, char player2Choice, char player1Selection, 
                char player2Selection, int control) {
    
    // Clear Screen
    system("clear");

    if (control == 1)
    {
        switch(player1Selection) {
            case '7':
                if (boardArr[6] == '-')
                {
                    boardArr[6] = player1Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '8':
                if (boardArr[7] == '-')
                {
                    boardArr[7] = player1Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '9':
                if (boardArr[8] == '-')
                {
                    boardArr[8] = player1Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '4':
                if (boardArr[3] == '-')
                {
                    boardArr[3] = player1Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '5':
                if (boardArr[4] == '-')
                {
                    boardArr[4] = player1Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '6':
                if (boardArr[5] == '-')
                {
                    boardArr[5] = player1Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '1':
                if (boardArr[0] == '-')
                {
                    boardArr[0] = player1Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '2':
                if (boardArr[1] == '-')
                {
                    boardArr[1] = player1Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                    break;
            case '3':
                if (boardArr[2] == '-')
                {
                    boardArr[2] = player1Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
        }
    }
    if (control == 2)
    {
        switch(player2Selection) {
            case '7':
                if (boardArr[6] == '-')
                {
                    boardArr[6] = player2Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '8':
                if (boardArr[7] == '-')
                {
                    boardArr[7] = player2Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '9':
                if (boardArr[8] == '-')
                {
                    boardArr[8] = player2Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '4':
                if (boardArr[3] == '-')
                {
                    boardArr[3] = player2Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '5':
                if (boardArr[4] == '-')
                {
                    boardArr[4] = player2Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '6':
                if (boardArr[5] == '-')
                {
                    boardArr[5] = player2Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '1':
                if (boardArr[0] == '-')
                {
                    boardArr[0] = player2Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
            case '2':
                if (boardArr[1] == '-')
                {
                    boardArr[1] = player2Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                    break;
            case '3':
                if (boardArr[2] == '-')
                {
                    boardArr[2] = player2Choice;
                }
                else
                {
                    cout << "Position not available. Please select another spot." << endl;
                }
                break;
        }
    }

    //Print board with player selections.
    cout << "|" << setw(118) << setfill('-') << right << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(20) << setfill(' ') << right << boardArr[6] << setw(20) << "|" << setw(20) << boardArr[7] << setw(20) << "|" << setw(20) << boardArr[8] << setw(18) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(118) << setfill('-') << right << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(20) << setfill(' ') << right << boardArr[3] << setw(20) << "|" << setw(20) << boardArr[4] << setw(20) << "|" << setw(20) << boardArr[5] << setw(18) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(118) << setfill('-') << right << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(20) << setfill(' ') << right << boardArr[0] << setw(20) << "|" << setw(20) << boardArr[1] << setw(20) << "|" << setw(20) << boardArr[2] << setw(18) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(40) << setfill(' ') << right << "|" << setw(40) << "|" << setw(38) << "|" << endl;
    cout << "|" << setw(118) << setfill('-') << right << "|" << endl;

}