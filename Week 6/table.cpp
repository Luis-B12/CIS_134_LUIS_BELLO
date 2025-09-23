//@author: Luis Bello
//@date: 9/23/2025
//@purpose: This programs loops to form a table for the sqaured

#include <iostream>

using namespace std;

int main ()
{
    int minNUM = 0;             //min num to 0
    int maxNUM = 100;           //max num to 100

    cout << "Number | Number squared" << endl       //sets up the chart
         << "-----------------------" << endl;

    for ( int num = minNUM; num <= maxNUM; num++)      //sets num to minNUM, if num is less than or equal to max num print below and add one to num
    {
        cout << num << "\t\t" << (num * num) << endl;       //\t\t is two tab spaces.
    }

return 0;
}