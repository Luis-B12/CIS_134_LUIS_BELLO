//@author: Luis Bello
//@date: 10/20/2025
//@purpose: This programs creates a file with the numbers of sales of the day

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    double days = 0, sales = 0, tsales = 0;         //creates and sets the variables used
    ofstream output_file;               //creates a file

    output_file.open("week9_lab1.txt");         //opens and names the file week9_lab1.txt

    cout << "Please enter the amount of sale days" << endl;         //asks for the amount of sale days
    cin >> days;

    for( int num = 1; num <= days; num++)           //prints the below until num reaches the # of days
    {
        cout << "What is the amount of sales for day " << num << "?" << endl;  //asks for the amount of sale for that day
        cin >> sales;

        tsales += sales;            //finds the total sale
        output_file << "Day " << num << ": $" << sales << endl;         //prints the sale of that day to the file
    }

    output_file << "The total sales is $" << tsales << "."; //Prints the total sale to file

    output_file.close();        //closes the file

    cout << "The file, week9_lab1.txt, is ready.";

return 0;
}
