//@author: Luis Bello
//@date: 9/23/2025
//@purpose: This programs create a multiplication table based on a integer 

#include <iostream>

using namespace std;

int main()
{
    int input = 0, num = 0, output = 0;         //initializes input, num, and output

    cout << "Please enter an interger to show its mutliplications values from 0 to 12." << endl;

    cin >> input;

    cout << "Multiplication Table" << endl << "---------------------" << endl
         << "Multiple x Input = Answer" << endl;

    for (num; num <= 12; num++)         //if num is less than and equal to 12 do below and add one to num
    {
        output = num * input;           //multiple the num and input

        cout << num << " x " << input << " = " << output << endl;       //prints the order of multiplication with the output
    }

return 0;
}