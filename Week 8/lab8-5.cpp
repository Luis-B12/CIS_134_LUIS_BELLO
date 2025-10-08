//@author: Luis Bello
//@date: 10/7/2025
//@purpose: This programs creates a file with my friends name

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream output_file;

    output_file.open("lab5.txt");           //opens the file and names it

    cout << "This creates a file with the names of three friends in it called lab5.txt.";

    output_file << "Aldo Garcia\nJohn Batch\nIan Cross";        //prints the names to the file

    output_file.close();        //closes the file

    return 0;


}