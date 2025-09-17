//@author: Luis Bello
//@date: 9/15/2025
//@purpose: This programs calculates and prints the angles of a right triangle

#define _USE_MATH_DEFINES 
#include <iostream>             //needed to define pi
#include <cmath>                //needs to be included to sqrt and atan2()
#include <iomanip>

using namespace std;

int main ()
{
    float x = 3,                //base of the triangle
          c = 0,                //hypotenuse of the triagnle
          y = 4,                //height of the traingle
          theta = 0,            //angle between the base and hypotenuse
          check_theta = 53.1301;        //the theta for 3-4-5 triangle

    c = sqrt((x*x)+(y*y));      //Uses the pythergoean thereom to find c

    cout << "C is " << c << "." << endl;    //Prints c

    theta = atan2(y,x);         //Finds theta

    cout << "Angle in radians: " << theta << endl;      //atan2 gives theta in radians
    theta = theta * (180/M_PI);                         //M_PI is pi

    cout << "Angle in degree: " << theta << endl;       //converts the angle to degrees
    
    if (theta == check_theta)
    {
        cout << "This is a 3-4-5 triangle.";
    }
    
    else 
    {
        cout << "This is NOT a 3-4-5 triangle.";
    }

return 0;


}