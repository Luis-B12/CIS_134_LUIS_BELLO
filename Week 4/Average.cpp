//@author: Luis Bello
//@date: 9/8/2025
//@purpose: This programs calculates and prints the average of three numbers

#include <iostream>

using namespace std;

int main()
{
    float grade1 = 0.0, grade2 = 0.0, grade3 = 0.0;                      //divides the sum with the total numbers of the sum
    
    cout << "What are the 3 grades? Press enter when inputed.";
    
    cin >> grade1 >> grade2 >> grade3;

    float average = (grade1 + grade2 + grade3)/3;

    cout << "The average of your three numbers are: " << average << ".";

    return 0;
}


