//@author: Luis Bello
//@date: 11/10/2025
//@purpose: This programs creates a program for a tic tac toe game

#include <iostream>

using namespace std;

int main()
{
    int row, col;
    int turns = 0;
    //sets the array
    char board[3][3] = { {' ',' ',' '}, {' ',' ',' '}, {' ',' ',' '}};
 
    bool GameOver = false;
    

    cout << "Player 1 will be X and Player 1 will O." << endl;
    
    //sets the game over a while loop with bool statement
    while (GameOver == false)
    {
        int player = (turns % 2) + 1;
        bool input = false;

        while (input == false)
        {
    //creates the board

            cout << "   " << " 1  " << " 2  " << " 3  " << endl
                 << "1: " << " " << board[0][0] << " " << "|" << " " << board[0][1] << " "<< "|" << " " << board[0][2] << " " << endl
                 << "   " << "---+---+---" << endl
                 << "2: " << " " << board[1][0] << " " << "|" << " " << board[1][1] << " "<< "|" << " " << board[1][2] << " " << endl
                 << "   " << "---+---+---" << endl
                 << "3: " << " " << board[2][0] << " " << "|" << " " << board[2][1] << " "<< "|" << " " << board[2][2] << " " << endl;
            
            cout << "Player " << player << " pick a row from the board." << endl;
            cin >> row;
            //checks the input of the row
            
            while(row > 3||row < 0)
            {
                cout << "Invalid input. Outside of board. Try again." << endl;
                cin >> row;
            }

            cout << "Player " << player << " pick a column from the board." << endl;
            cin >> col;
            //checks the input of the column
            while( col < 0 || col > 3)
            {
                cout << "Invalid input. Outside of board. Try again." << endl;
                cin >> col;
            }
            //substracts one to the row and column to be used in the array
            row--;
            col--;
            
            //checks if the spot is taken or not
            if(board[row][col]== 'X'|| board[row][col] == 'O')
            {
                cout << "Spot is taken try again." << endl;
            }
            else
            {
                input = true;
            }
        }
        //places the check if above is true, depends on the player, where the player decides
        if(player == 1)
        {
            board[row][col] = 'X';
        }

        else
        {
            board[row][col] = 'O';
        }
        
        //goes over horizontal wins, if statement is true then it finishes the game        
        for(row = 0 ; row < 2; row++)
        {
            if(board[row][0] == board[row][1] && board[row][1] == board[row][2] && board [row][1] != ' ')
                {
                    cout << "Player " << player << " wins!" << endl;
                    GameOver = true;
                    cout << "Game finished." << endl;
                }
        }
        
        //goes over vertical wins
        for(col = 0; col < 2; col++)
        {
            if(board[0][col] == board[1][col] && board[1][col] == board[2][col] && board [1][col] != ' ')
            {
                cout << "Player " << player << " wins!" << endl;
                GameOver = true;
                cout << "Game finished." << endl;
            }
        }

        //goes over dygnal wins
        if(board[0][0] == board[1][1] && board [1][1] == board[2][2] && board[1][1] != ' ' || board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
        {
            cout << "Player " << player << " wins!" << endl;
            GameOver = true;
            cout << "Game finished." << endl;
        }
        //checks for a draw
        if( turns == 8)
        {
            cout << "The game is a draw." << endl;
            GameOver = true;
        }

        turns++;
    }
//prints last turn
cout << "   " << " 1  " << " 2  " << " 3  " << endl
     << "1: " << " " << board[0][0] << " " << "|" << " " << board[0][1] << " "<< "|" << " " << board[0][2] << " " << endl
     << "   " << "---+---+---" << endl
     << "2: " << " " << board[1][0] << " " << "|" << " " << board[1][1] << " "<< "|" << " " << board[1][2] << " " << endl
     << "   " << "---+---+---" << endl
     << "3: " << " " << board[2][0] << " " << "|" << " " << board[2][1] << " "<< "|" << " " << board[2][2] << " " << endl;
}