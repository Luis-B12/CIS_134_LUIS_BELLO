//@author: Luis Bello
//@date: 10/20/2025
//@purpose: This programs creates a file with the numbers of sales of the day in a cleaner format

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    double days = 0.0, sales = 0.0, tsales = 0.0;       //creates and sets the variables used
    ofstream output_file;                               //creates an output file

    output_file.open("week9_lab2.txt");                 //opens the file and names it week9_lab2.txt

    cout << "Please enter the amount of sale days" << endl;
    cin >> days;

    for( int num = 1; num <= days; num++)               //prints the below until num reaches the # of days
    {
        cout << "What is the amount of sales for day " << num << "?" << endl;
        cin >> sales;

        tsales += sales;   //find the total sales
        output_file << "Day " << num << ": $" << setprecision(2) << fixed << sales << endl;         ////prints the sale of that day to the file, sets the sales to always have a hundredth decimal point
    }

    output_file << endl << endl << "====================" << endl << "Total costs: $" << setprecision(2) << fixed 
                    << tsales << endl << "====================";        //prints the total cost and gives the total cost with a set preicision set at the hundredth decimal point

    output_file.close();        //closes the file

    cout << "The file, week9_lab2.txt, is ready." << endl;

return 0;
}
