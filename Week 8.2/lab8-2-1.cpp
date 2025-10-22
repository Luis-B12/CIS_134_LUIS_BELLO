//@author: Luis Bello
//@date: 10/7/2025
//@purpose: This programs prints the names found in a file to the console

#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

int main()
{
    string name;
    ifstream input_file;


    input_file.open("friends.txt");         //opens the file

    while(input_file >> name)           //reads the first name
    {                
        cout << name << " ";            //prints the first name
        
        input_file >> name;             //reads the name name
        cout << name << endl;           //prints last name
    }

    input_file.close();                 //closes file

    return 0;
}