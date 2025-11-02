//@author: Luis Bello
//@date: 10/29/2025
//@purpose: This programs find the sum of an array

#include <iostream>

using namespace std;

int main()
{
    int tsum = 0; 
    const int count = 5;
    int number[] = { 3, 4 , 3 , 1 , 4};         //initliazes the array with 5 elements

    for (int num = 0; num < count; num++)       //sums the elements
    {
        tsum += number[num];
    }
    
    cout << tsum;                   //prints the sum

return 0;
}