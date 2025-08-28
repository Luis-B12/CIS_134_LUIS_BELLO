//@author: Luis Bello
//@date: 8/28/2025
//@purpose: This programs prints the voltage

#include <iostream>

using namespace std;

int main ()
{
    int resistance = 2; 
    int amps = 10;
    int voltage = resistance * amps;

    cout << "The voltage is " << voltage << " volts.";

    return 0;
}