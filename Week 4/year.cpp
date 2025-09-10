//@author: Luis Bello
//@date: 9/10/2025
//@purpose: This programs accepts a year and determines if it is a leap year

#include <iostream>

using namespace std;

int main()
{
    int year = 0;

    cout << "Please enter a year to see if it is a leap. Press enter once typed out.";

    cin >> year;

    if (year % 4 == 0 && year % 400 == 0){                                               
        cout << "The year you entered " << year << " is a leap year.";
    }

    else if ( year % 100 ==0 ){
        cout << "The year you entered " << year << " is NOT leap year.";
    }
return 0;
}