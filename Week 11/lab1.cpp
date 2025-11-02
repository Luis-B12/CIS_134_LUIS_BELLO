//@author: Luis Bello
//@date: 10/27/2025
//@purpose: This programs uses an array to find the grade average

#include <iostream>

using namespace std;

int main()
{
    int ftotal = 0, amountG = 10, inputG = 0;           //inititaliazes the variables
    float averageG = 0;
    int grades[amountG];                                //initilizaes the array with 10 elements

    for( int num = 1; num <= amountG; num++)            //loops until num reaches the array count
    {
        cout << "Please enter a integer number for grade " << num << endl;      //asks for a grade
        cin >> inputG;                                  //allows the input of a grade

        ftotal += inputG;                               //finds the grades total
    }

    averageG = ftotal/amountG;          //finds the average of the grades

    cout << "The average of the grades is " << averageG;        //prints the average

return 0;

}