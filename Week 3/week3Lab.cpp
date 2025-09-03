//@author: Luis Bello
//@date: 9/3/2025
//@purpose: This programs calculates and prints the tempature average for three cities

#include <iostream>

using namespace std;

int main ()
{
    double NYC = 85,                        //stores them tempature of NYC
            Denver = 88,                    //stores the tempature of Denver
            Phoenix = 106,                  //stores the tempature of Phoenix
            tempR = 0.02;                   //stores the tempature rise

// prints and calculates the tempature of the cities

            cout << "The average high tempature for New York City in July is now " << ((NYC *tempR)+ NYC)<< " F.\n"
                    << "The average high tempatuer for Denver in July is now "<< (Denver + (Denver * tempR)) << " F.\n"
                    << "The average high tempatuer for Phoenix in July is now "<< (Phoenix + (Phoenix * tempR)) << " F.\n";

return 0;
}