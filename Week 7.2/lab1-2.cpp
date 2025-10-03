//@author: Luis Bello
//@date: 9/29/2025
//@purpose: This programs prints projected sales for the next 5 years

#include <iostream>

using namespace std;

int main ()
{
    float charge = 250000.00, Irate = 0.06, chargeChange = 0;       //sets the charge, increate rate, and the change of the charge
    
    for( int year = 1; year <=5; year ++)                       //does the things below until it reaches year 5
    {
        chargeChange = charge * Irate;          //finds the change of the charge with the percent increase
        charge = chargeChange + charge;         //finds the total charge with the change of the charge
        
        cout << "The charge for year " << year << " since the rate increase is: $" << charge << endl; //prints the charge for that year
    }
}
