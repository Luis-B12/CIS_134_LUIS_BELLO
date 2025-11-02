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

 // Luhn check processing from right to left using the reversed credit cart. With the double being 1,3,5,... etc

    for( long long p = 0; p < Rev_ccNUM.length(); p++) 
    {
        long long digits = array[p];
        
        if (p % 2 != 0)
        {
            digits = digits * 2;

            if( digits > 9)
            {
                digits -= 9;
            }
        }
        sum += digits;
    }

    cout << "Sum" << sum << endl;


    return 0;
}
