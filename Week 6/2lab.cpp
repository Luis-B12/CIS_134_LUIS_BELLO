//@author: Luis Bello
//@date: 9/22/2025
//@purpose: This programs loops based on the number

#include <iostream>

using namespace std;

int main()
{
    int MAXnum = 0;                 //Initalize MAXnum

    cout << "What is the integers." << endl;        //Ask for the max num
    
    cin >> MAXnum;

    for (int num = 0; num < MAXnum; num++)          //initialize num to 0, if num is less than MAXnum print num and add one to num
        cout << num<< endl;
}
