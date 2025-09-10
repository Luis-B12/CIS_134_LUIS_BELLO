//@author: Luis Bello
//@date: 9/10/2025
//@purpose: This programs determines if a number is even or odd and prints it.

#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    cout << "Enter a interger and I will tell you if it is even or odd.\n" 
         << "Press enter once the interger is typed out.";
    
    cin >> number;                  //allows interger get to be entered

    if (number % 2 == 0)                                   //divides the interger by 2 and if the remainder is 0 it is even
        cout << "The interger, " << number << ", is even";

    else
        cout << "The interger, " << number << ", is odd";   //If the remainder is not 0, then interger is odd
}