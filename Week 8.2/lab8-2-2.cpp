//@author: Luis Bello
//@date: 10/7/2025
//@purpose: This programs reads the numbers from a value and prints its sum

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int value = 0, sum = 0;
    ifstream input_file;
   
    input_file.open("C:\\Users\\siulg\\Sandhills\\25-26\\CSC\\numbers.txt");

    cout << "Reading the file." << endl;

    while(input_file >> value)
    {
        sum = value + sum;
    }

    cout << "The sum of the numbers is: " << sum << endl;

    input_file.close();
    return 0;
}