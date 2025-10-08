//@author: Luis Bello
//@date: 9/29/2025
//@purpose: This programs creates a file with the printing a interget loop

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int input = 0;

    ofstream output_file;
    output_file.open("lab4.txt");

    cout << "Please enter a interger to print on a file: ";

    cin >> input;

    for(int num =0; num < input; num++)
    {
            output_file << num << endl;
    }

    output_file.close();

    cout << "Done writing.";
}