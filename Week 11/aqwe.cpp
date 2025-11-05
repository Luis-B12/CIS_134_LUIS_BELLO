//@author: Luis Bello
//@date: 10/29/2025
//@purpose: This programs uses Luhn algorithm to check the validibility of a credit card

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int sum = 0;
    string ccNUM = "5500000000000004";
    string Rev_ccNUM;
    int characters = ccNUM.length();

    cout << "Credit Card Number: " << ccNUM << endl;

//find the reverse of the credit card

    for (int index = characters - 1; index >= 0; index--)
    {
            Rev_ccNUM += ccNUM[index];
    }
    
    cout << "Reverse String: " << Rev_ccNUM << endl;
    
//converts the string credit card to a long long interger

    long long Rev_intcc = stoll(Rev_ccNUM);
    cout << "Reverse Intger: " << Rev_intcc << endl;

    long long array[Rev_intcc];
}