//@author: Luis Bello
//@date: 10/29/2025
//@purpose: This programs uses Luhn algorithm to check the validibility of a credit card

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    long long sum = 0;
    string ccNUM = "5454545454545474";          //credit card number
    string Rev_ccNUM;
    long long characters = ccNUM.length();          //length of the credit card

    cout << "Length of credit card number: " << characters << endl;
    cout << "Credit Card Number: " << ccNUM << endl;

//finds the reverse of the credit card in string

    for (int index = characters - 1; index >= 0; index--)       //if int index = characters; index > 0; I get a negative
    {
            Rev_ccNUM += ccNUM[index];
    }
    
//builds an int array using the reveresed string with ASCll 11

    int digits[characters];                 //the int array

    for(int i = 0; i < characters; i++)
    {
        digits[i] = Rev_ccNUM[i] - '0';           //so the decimal code of the character of Rev_ccNUM minus the decimal of code of the character 0, (# - 48)        
    }

//Uses the above array and prints it
    cout << "Reversed: ";
    for(int x = 0; x < characters; x++)
    {
        cout << digits[x];                           
    }

    cout << endl;

//Luhn check processing from right to left using the reversed credit cart. With the double being the p of 1,3,5,... etc
//Finds the sum as well
 
    for ( int num = 0; num < characters; num++)
    {
        long long DoubleOdd = 0;

        if(num % 2 == 0)
        {
            sum = sum + digits[num];
        }

        if( num % 2 != 0)
        {
            DoubleOdd = digits[num] * 2;       //if the digits is a ever other number

            if(DoubleOdd > 9)                   //if the product of the double is greated then 9 subtract by 9
            {
                long long SubstractedDoubleOdd = DoubleOdd - 9;

                sum = sum + SubstractedDoubleOdd;
            }

            else
            {
                sum = sum + DoubleOdd;
            }

        }
    }

//Prints the sum
cout << "Sum: " << sum << endl;

//Does the mod 10 to check if the credit card number is valid

    if(sum % 10 == 0)
    {
        cout << "The credit card number is valid.";
    }
    
    if( sum % 10 != 0)
    {
        cout << "The credit card number is not valid.";
    }

    return 0;
}
