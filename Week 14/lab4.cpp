//@author: Luis Bello
//@date: 11/19/2025
//@purpose: This programs finds the average of three numbers with a function

#include <iostream>

using namespace std;

//functions prototype
int loop(int);

int main()
{
    int count = 0;
    int num;
    count  = loop(num);     //calls the function and assigns the return value as count
    cout << count;          //prints the value
}

int loop(int num)
{
    for(num = 0; num < 1000;num++)  //loops until it reachs 1000
    {
    }
    return num;
}

