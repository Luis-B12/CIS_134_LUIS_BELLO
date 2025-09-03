//@author: Luis Bello
//@date: 8/27/2025
//@purpose: This programs divides a number by 0 causing an error

#include <iostream>

using namespace std;

int main()
{
    // divides the number 10 with 0. This should cause an error due to dividing by 0 or do nothing.
    int num1 = 10;
    int num2 = 0;
    int qoutient = num1 / num2;

    std::cout << qoutient<< std:: endl;

    return 0;
}