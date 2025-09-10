//@author: Luis Bello
//@date: 9/10/2025
//@purpose: This programs calculates, prints the average of three numbers, and gives a letter grade

#include <iostream>

using namespace std;

int main()
{
    float grade1 = 0.0, grade2 = 0.0, grade3 = 0.0;           //sets the grade to 0
    
    cout << "What are the 3 grades? Press space after each value and enter onces all values have been given.";
    
    cin >> grade1 >> grade2 >> grade3;                       //allows user to enter the grade values

    float average = (grade1 + grade2 + grade3)/3.0;         //calculates the average

    cout << "The average of your three numbers are: " << average << ".\n";      //Prints the average
                     
   if(average >= 90 && average <=100){                           // If average is between 100 and 90, prints a A
        cout << "Your grade is a A.";
    
    }else if (average >= 80 && average <=89.9){                    // If average is between 89.9 and 80, prints a B
        cout << "Your grade is a B.";
    
    }else if (average >= 70 && average <= 79.9){                   // If average is between 79.9 and 70, prints an C
        cout << "Your grade is a C.";

    }else if (average >= 60 && average <=  69.9){                  // If average is between 69.9 and 60, prints an D
        cout << "Your grade is a D.";

    }else if (average <= 59.9){                           // If average is less than or equal to 60.9, print an F
        cout << "Your grade is a F.";
    }
    
    return 0;
}