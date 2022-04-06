/*************************************************
 * Function: Tic Tac Toe game
 * *********************************************
 * Purpose: having fun
 * ***********************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
bool winCondition(char player1Choice, char player2Choice, char player1Selection, char player2Selection, int& row1Total, int& row2Total, 
                int& row3Total, int& column1Total, int& column2Total, int& column3Total, int& DiagonalLRTotal, 
                int& DiagonalRLTotal, int control) {
    bool playerWins = false;

    if (control == 1)
    {
        switch(player1Selection) {
            case '7':
                row1Total = row1Total + player1Choice;
                column1Total = column1Total + player1Choice;
                DiagonalLRTotal = DiagonalLRTotal + player1Choice;
                if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                    || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                {
                    playerWins = true;
                }
                break;
            case '8':
                row1Total = row1Total + player1Choice;
                column2Total = column2Total + player1Choice;
                if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                    || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                {
                    playerWins = true;
                }
                break;
            case '9':
                row1Total = row1Total + player1Choice;
                column3Total = column3Total + player1Choice;
                DiagonalRLTotal = DiagonalRLTotal + player1Choice;
                if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                    || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                    {
                        playerWins = true;
                     }
                    break;
            case '4':
                row2Total = row2Total + player1Choice;
                column1Total = column1Total + player1Choice;
                    if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                        || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                    {
                        playerWins = true;
                    }
                break;
            case '5':
                row2Total = row2Total + player1Choice;
                column2Total = column2Total + player1Choice;
                DiagonalLRTotal = DiagonalLRTotal + player1Choice;
                DiagonalRLTotal = DiagonalRLTotal + player1Choice;
                if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                    || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                {
                    playerWins = true;
                }
                break;
            case '6':
                row2Total = row2Total + player1Choice;
                column3Total = column3Total + player1Choice;
                if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                    || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                {
                    playerWins = true;
                }
            case '1':
                row3Total = row3Total + player1Choice;
                column1Total = column1Total + player1Choice;
                DiagonalRLTotal = DiagonalRLTotal + player1Choice;
                if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                    || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                    {
                        playerWins = true;
                    }
                    break;
                case '2':
                    row3Total = row3Total + player1Choice;
                    column2Total = column2Total + player1Choice;
                    if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                        || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                    {
                        playerWins = true;
                    }
                    break;
                case '3':
                    row3Total = row3Total + player1Choice;
                    column3Total = column3Total + player1Choice;
                    DiagonalLRTotal = DiagonalLRTotal + player1Choice;
                    if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                        || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                    {
                        playerWins = true;
                    }
                    break;
             }
    }

    if (control == 2)
    {
       switch(player2Selection) {
            case '7':
                row1Total = row1Total + player2Choice;
                column1Total = column1Total + player2Choice;
                DiagonalLRTotal = DiagonalLRTotal + player2Choice;
                if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                    || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                {
                    playerWins = true;
                }
                break;
            case '8':
                row1Total = row1Total + player2Choice;
                column2Total = column2Total + player2Choice;
                if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                    || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                {
                    playerWins = true;
                }
                break;
            case '9':
                row1Total = row1Total + player2Choice;
                column3Total = column3Total + player2Choice;
                DiagonalLRTotal = DiagonalLRTotal + player2Choice;
                if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                    || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                    {
                        playerWins = true;
                     }
                    break;
            case '4':
                row2Total = row2Total + player2Choice;
                column1Total = column1Total + player2Choice;
                    if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                        || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                    {
                        playerWins = true;
                    }
                break;
            case '5':
                row2Total = row2Total + player2Choice;
                column2Total = column2Total + player2Choice;
                DiagonalLRTotal = DiagonalLRTotal + player2Choice;
                DiagonalRLTotal = DiagonalRLTotal + player2Choice;
                if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                    || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                {
                    playerWins = true;
                }
                break;
            case '6':
                row2Total = row2Total + player2Choice;
                column3Total = column3Total + player2Choice;
                if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                    || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                {
                    playerWins = true;
                }
            case '1':
                row3Total = row3Total + player2Choice;
                column1Total = column1Total + player2Choice;
                DiagonalRLTotal = DiagonalRLTotal + player2Choice;
                if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                    || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                    {
                        playerWins = true;
                    }
                    break;
                case '2':
                    row3Total = row3Total + player2Choice;
                    column2Total = column2Total + player2Choice;
                    if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                        || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                    {
                        playerWins = true;
                    }
                    break;
                case '3':
                    row3Total = row3Total + player2Choice;
                    column3Total = column3Total + player2Choice;
                    DiagonalLRTotal = DiagonalLRTotal + player2Choice;
                    if ((row3Total == 360) || (row3Total == 333) || (column2Total == 360) || (column2Total == 333)
                        || (DiagonalLRTotal == 360) || (DiagonalLRTotal == 333) || (DiagonalRLTotal == 360) || (DiagonalRLTotal == 333))
                    {
                        playerWins = true;
                    }
                    break;
             }
    }

    return playerWins;
}