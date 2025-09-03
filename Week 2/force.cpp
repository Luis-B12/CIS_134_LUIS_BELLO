//@author: Luis Bello
//@date: 8/28/2025
//@purpose: This programs calculates and prints the Force

#include <iostream>

using namespace std;

int main ()
{
    double  a = 9.81,                   //defines acceleration
            m = 10,                     //defines mass
            force;                      //holds force
    
     force = a * m;                     //calculates force

    cout << "The force is " << force << ".";

    return 0;
}