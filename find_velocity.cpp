//@author: Luis Bello
//@date: 8/28/2025
//@purpose: This programs calculate and prints the velocity

#include <iostream>

using namespace std;

int main ()
{
    //Uses equation v=d/t to find velocity
    
    int time = 4;
    int distance = 400;
    int velocity = distance/time;

    cout << "The velocity is " << velocity << " mph.";

    return 0;
}
