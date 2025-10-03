//@author: Luis Bello
//@date: 9/29/2025
//@purpose: This programs prints a chess board with *

#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    
    cout << " What is the size of chessboard that you want?";       //asks for the size of the chessboard
    cin >> size;

    for(int lines = 1; lines <= size; lines++)             //set the amount of lines depending on the size entered
    {
        if(lines % 2 != 0)                                       //if a lines is not divisable by 2 then the for loop below
        {
        
            for(int num = 1; num <= size; num++)                 //counts the amount characters that will be printed depending the size entered
            {
                if(num % 2 != 0)                                        //if number of character is not divisble by 0 print *
                {
                    cout << "*";
                }

                else
                    cout << "  ";                                       //if not print "space"
            }
        }
        
        else                                                      //if a line is divisable by 2 then the for loop below          
        {
            for(int num = 1; num <= size; num++)                 //counts the amount characters that will be printed depending the size entered
            {
                if(num % 2 != 0)                                 //if the charactered that will printed ends being the counted as odd then print " "
                {
                    cout << "  ";
                }

                else
                    cout << "*";                                 // if even print *
            }
        }
        
    cout << endl;                                               //starts a new line
    }

}