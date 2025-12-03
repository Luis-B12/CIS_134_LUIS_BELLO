//@author: Luis Bello
//@date: 11/18/2025
//@purpose: This programs finds the average of three numbers with a function

#include <iostream>

using namespace std;

//function prototype
int averageValues(int,int,int);

int main()
{
    int value1 = 0;
    int value2 = 0;
    int value3 = 0;
    int average = 0;

    cout << "Please enter 3 values to find thier average." << endl;
    cin >> value1;
    cin >> value2;
    cin >> value3;

    //calss the functions and passes the number. Assignes the return number as square
    average = averageValues(value1, value2, value3);

    cout << "The average is " << average << "." << endl;
}

//This function returns the square of the number
int averageValues(int value1, int value2, int value3)
{
    return (value1 + value2 + value3)/3;
}