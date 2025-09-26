//@author: Luis Bello
//@date: 9/23/2025
//@purpose: This programs loops and prints the sum of the iteration and adder

#include <iostream>

using namespace std;

int main()
{
    int sumOP = 0, adder = 10;          //sets sumOp to 0 and adder to 10

    for (int num = 0; num <= 50; num++)     //num is set to 0, if num is less than or equal to 50 do below
    {
        sumOP = num + adder;                    //num and adder are added and set initialized to sumOP

        cout << sumOP << endl;                  //sumOP is print and add one to num
    }
    
return 0;
}