//@author: Luis Bello
//@date: 10/29/2025
//@purpose: This programs gives the max interger in a array

#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    int number = 0;

    
    cout << "How many integers are you going to list?" << endl;
    cin >> size;

    int array[size];

    for(int num = 0; num < size; num++)         //goes through the loop to initiliaze the array
    {
        cout << "Please enter a interger" << endl;

        while(!(cin >> array[num]))         //validates if the character inputted is a interger if the cin statement fails
        {
            cout << "You did NOT enter a integer. Try again." << endl;
            cin.clear();                        //clears the cin failure
            cin.ignore(10000, '\n');
        }

    }
    
    cout << "Integers inputted are: ";
    
    for (int count = 0; count < size; count++)      //goes throught the numbers inputted
    {
    cout << array[count] << " ";
    }

    cout << endl;

    int highest = array[0];                         //the array sub 0 is set to the highest

    for (int count = 0; count < size; count++)      //the loop goes through the array and comapres the other sectors with the sub 0 to find the highest value
    {
        if(array[count] > highest)                  //if a higher sector value is found
        {
            highest = array[count];                 //initalize that value to highest
        }
    }

    cout << "The largest integer is: " << highest << endl;      //print the highest

return 0;
}