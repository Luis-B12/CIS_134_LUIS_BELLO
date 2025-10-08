//@author: Luis Bello
//@date: 9/29/2025
//@purpose: This programs creates a new file and prints values

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream output_file;   //creates the file

    output_file.open("lab2.txt");           //opens the file name lab2.txt

    //writes on the file

    output_file << "************************************\n" << "\t\t\tShoppingCart\n" << "************************************\n"
                << "product code\tqty\t\tprice\n" << "\t789\t\t\t7\t\t$12.00\n" << "\n" << "\t\t\t\t\t\tTotal:$84.00";

    cout << "File called lab2.txt is ready.";

    output_file.close();                    //closes the file

    return 0;
}