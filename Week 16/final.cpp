//@author: Luis Bello
//@date: 12/7/2025
//@purpose: This programs determines the distance traveled

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "This code will determine the distance the human cannonball will travel when he hits the ground." << endl;
//the information for the equation
    double a = -0.01568;
    double b = 1.00000;
    double c = 1.5;
//does the addition and subtraction version of the equation
    double Pos_equation = (-b+sqrt(b*b - 4 * a * c)) / (2*a);
    double Neg_equation = (-b-sqrt(b*b - 4 * a * c)) / (2*a);
    
//decides which answer to use based if it is positive and prints it
    if(Pos_equation > 0.0)
    {
        cout << "The human travels " << Pos_equation << " meters." ;
    } 

    if(Neg_equation)
    {
        cout << "The human travels " << Neg_equation << " meters.";
    }

}
