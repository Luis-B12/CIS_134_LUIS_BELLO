//@author: Luis Bello
//@date: 11/19/2025
//@purpose: This programs uses four functions. 1 funcitons calls to funtions to find the average of 3 values and the sqaure of a value.

#include <iostream>

using namespace std;

//creates functions prototypes
int averageValues();
int squareNumber();
void multipleFunctions();

int main()
{
    cout << "The will find the average of 3 values and squeare of a number." << endl;

    multipleFunctions();    //calls the functions

    return 0;
}


//the functions for the average values
int averageValues(int value1, int value2, int value3)
{
    return (value1 + value2 + value3)/3; //returns the average
}

//the function for the square value
int squareNumber(int value4)
{
    return value4 * value4;     //returns the square
}

//the functions that does the average and squeare value
void multipleFunctions()
{
    int value1 = 0, value2 = 0, value3 = 0;
    int value4 = 0;

    int average = 0;
    int square = 0;

    cout <<"What are the 3 values you wish to average?" << endl;
    cin >> value1;
    cin >> value2;
    cin >> value3;

    cout << "What is the value you wish to square?" << endl;
    cin >> value4;

    average = averageValues(value1, value2, value3);        //calls the average value and assigns it to average
    square = squareNumber(value4);                          //calls the square value and assigns it to square

    //prints the values
    cout << "The average values of the 3 numbers are " << average << "." << endl;
    cout << "The square the of the number is " << square << "." << endl;

}