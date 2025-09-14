//@author: Luis Bello
//@date: 9/8/2025
//@purpose: This programs calculates and prints the average of three numbers

#include <iostream>

using namespace std;

int main()
{
    float grade1 = 0.0, grade2 = 0.0, grade3 = 0.0;                     
    
    cout << "What are the 3 grades? Press enter when inputed.";         //askes for the grades and intrusction input the grades
    
    cin >> grade1 >> grade2 >> grade3;      //allows the grades to be inputted

    float average = (grade1 + grade2 + grade3)/3;       //finds the average of the grades

    cout << "The average of your three numbers are: " << average << ".";            //Prints the average

    return 0;
}


