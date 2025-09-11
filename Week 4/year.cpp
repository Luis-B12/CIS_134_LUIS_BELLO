//@author: Luis Bello
//@date: 9/10/2025
//@purpose: This programs accepts a year and determines if it is a leap year

#include <iostream>

using namespace std;

int main()
{
    int year = 0;

    cout << "Please enter a year to see if it is a leap. Press enter once typed out."; //ask the user to enter a year

    cin >> year;                                                    //users enters year
   
//It is a leap year if it multiple of 4 and not a multiple 100 or a multiple of 400

    if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        cout << "The year you entered " << year << " is a leap year.";          
    
    } else 
    {
        cout << "The year you entered " << year << " is NOT a leap yaer."; //If it does fit nothing from above, it is not a leap year
    }
return 0;
}