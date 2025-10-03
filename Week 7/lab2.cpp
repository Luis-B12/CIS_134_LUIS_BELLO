//@author: Luis Bello
//@date: 9/29/2025
//@purpose: This programs prints a right triangle with astricks

#include <iostream>

using namespace std;

int main ()
{
    int Numrow = 0;
    
    cout << "Enter the amount of rows you want: ";
    cin >> Numrow; 

    for (int num = 1; num <= Numrow; num ++)            //sets the amount of rows that will be printed
    {
        for( int count = 1; count <= num; count++)      //sets the amount of * that will printed depending on the row it is on
        {
            cout << "*";
        }
    cout << endl;
    }

    
    
}