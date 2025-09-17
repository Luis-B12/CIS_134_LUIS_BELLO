//@author: Luis Bello
//@date: 9/17/2025
//@purpose: This programs prompts a user for 10 grades and prints the average.

#include <iostream>

int main()
{
    float sumGrade = 0,         //Sum of the grades
          gradeC = 0,           //numbers of grades
          gradeA = 0,           //average of grades
          inputG = 0;           //inputted grade

    while (gradeC < 10)             //continues asking for a grade until grade C reaches 10
    {
        std:: cout << "What is one of grades?" << std:: endl;       //asks for single grade
        std:: cin >> inputG;
        gradeC ++;                                                  //increases the count of gradeC by 1
        sumGrade = sumGrade + inputG;                               //finds the sum of grade by adding the current sumGrade and the inputGrade
    }

    gradeA = sumGrade/gradeC;               //Finds the average

    std:: cout << "The average of the grades are " << gradeA;           //Prints it

return 0;
    
}