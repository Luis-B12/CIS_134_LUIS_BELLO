//@author: Luis Bello
//@date: 8/28/2025
//@purpose: This programs finds and prints the distance traveled with a velocity of 80mph in 2 hours.

#include <iostream>

using namespace std;

int main()
{
    // finds the the distance travel(x) when it has a velocity of 80mph(v) and a time(t) of 2 hours
    int v = 80;
    int t = 2;
    int x = v * t;
    cout << "The distance traveled is " << x << " miles.";

    return 0;
}