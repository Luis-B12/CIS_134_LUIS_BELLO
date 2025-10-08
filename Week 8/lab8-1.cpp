//@author: Luis Bello
//@date: 9/29/2025
//@purpose: This programs creates a new file and prints values

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputfile;            //creates a file

    outputfile.open("lab1.txt");        //opens a file named lab1.txt

    cout << "Writing text in a file called lab1.txt." << endl;

    //writes on the file

    outputfile << "Bourne Identity\n" << "Star Wars Episode IV\n" << "The Hunger Games\n" << "Dead Pool\n" << "X-Men First Class\n"
                <<"Star Wars Episode V\n" << "Get Out\n";
    
    outputfile.close();         //closes the file

    cout << "File is ready.";

    return 0;
}