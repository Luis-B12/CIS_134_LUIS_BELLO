//@author: Luis Bello
//@date: 10/29/2025
//@purpose: This programs find the sum of an array based on a file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int sum = 0, ARRAY_SIZE = 5, count = 0;
    int sales[ARRAY_SIZE];                      //initializes array to array size
    ifstream input_file;                        //prepares to read file

    input_file.open("sales.txt");               //opens file

    cout << "Reading the file." << endl;

    while( count < ARRAY_SIZE && input_file >> sales[count])        //reads the file and prints the information to the array until it no can
    {
        count++;
    }

    input_file.close();     //closes file

    for (int num = 0; num < count; num++)       //sums the elements of file
    {
        sum += sales[num];
    }
    
    cout << "The sum of the sales is $" << sum << endl;     //prints the sum
    
return 0;
}