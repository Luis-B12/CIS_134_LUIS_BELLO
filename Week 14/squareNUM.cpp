//@author: Luis Bello
//@date: 11/18/2025
//@purpose: This programs squares a number with a different function

#include <iostream>

using namespace std;

//function prototype
int squareNumber(int);

int main()
{
    int Num = 0;
    int square = 0;

    cout << "Please enter a number for it to be squared" << endl;
    cin >> Num;

    //calss the functions and passes the number. Assignes the return number as square
    square = squareNumber(Num);

    cout << "The square is " << square << "." << endl;
}

//This function returns the square of the number
int squareNumber(int Num)
{
    return Num * Num;
}