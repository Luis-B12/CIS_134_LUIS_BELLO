//@author: Luis Bello
//@date: 9/29/2025
//@purpose: This programs prints a multiplication table with nested for loops

#include <iostream>

using namespace std;

int main()
{

    for (int line=1; line < 11;++line)              //sets the amount of lines from 1 to 10
    {
        for (int num=1; num < 11; ++num)            //sets the multiplcation of what the line will be multiplied from 1 to 10
        {
            cout << line * num << "\t";             //prints the multiplication of the line and num
        }
        cout << endl;                              
        
    }
    

return 0;
}