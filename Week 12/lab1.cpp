//@author: Luis Bello
//@date: 11/6/2025
//@purpose: This programs creates a graph with for range loops

#include <iostream>

using namespace std;

int main()
{
    int m = 2;      //slope of line
    int b = 3;      //y intercet of line

    int y = 0;
    int x = 0;

//initializes an array with values of the axis's
    int xaxis[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int yaxis[] = { 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};



    for (int y : yaxis)         //prints the y axis and the linear line
    {
        cout << y << "|";                  
        

        for( int x : xaxis)         //sets the creation of the linear line, goes through the x array
        {
            int line = m*x + b;     //equation of linear line

            if(line == y)           //if line is equal to the current y then print X
            {
                cout << "X";
            }

            else
            {
                cout << " ";        //if not print " "
            }
        }
        
        cout << endl;           //start the new line of the y-axis
    }

    cout << " ";

    for ( int x : xaxis)            //prints the x axis with a for range loop
    {
        cout << "|" << x;
    }

return 0;
}