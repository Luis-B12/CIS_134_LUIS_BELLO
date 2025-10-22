//@author: Luis Bello
//@date: 10/7/2025
//@purpose: This programs reads the numbers from a value and prints its sum

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int value = 0, sum = 0;
    ifstream input_file;           //allows you to read a file      
   
    input_file.open("numbers.txt");        //opens file

    cout << "Reading the file." << endl;

    while(input_file >> value)      //does input_file detect the end of the  file
    {
        sum = value + sum;          //finds the sum based on the values
    }

    cout << "The sum of the numbers is: " << sum << endl;       //prints the end sum

    input_file.close();         //closes file
    return 0;
}