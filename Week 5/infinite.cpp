//@author: Luis Bello
//@date: 9/15/2025
//@purpose: This programs causes an infinite loop and prints it

#include <iostream>

using namespace std;

int main()
{
    int num = 1;

    while (num < 2)                     //as long num is less than 2 it will print
    {
        cout << "This is infinite.\n";
    }                                   //there is no code that increases num to be greater than 1 so it prints infinetly

return 0;
}