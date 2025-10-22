//@author: Luis Bello
//@date: 9/29/2025
//@purpose: This programs creates a new file and prints values without \n

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputfile;                        //creates the file

    outputfile.open("lab3.txt");                //opens the file

    cout << "Writing text in a file called lab3.txt." << endl;

//writes in the file

    outputfile << "Bourne Identity" << "Star Wars Episode IV" << "The Hunger Games" << "Dead Pool" << "X-Men First Class"
                <<"Star Wars Episode V" << "Get Out";
    
    outputfile.close();         //closes the file  

    cout << "File is ready.";

    return 0;
}