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

    for(int num = 0; num < size; num++)
    {
        cout << "Please enter a interger" << endl;

        while(!(cin >> array[num]))
        {
            cout << "You did NOT enter a integer. Try again." << endl;
            cin.clear();                        //clears the cin failure
            cin.ignore(10000, '\n');
        }

    }
    
    cout << "Integers inputted are: ";
    
    for (int count = 0; count < size; count++)
    {
    cout << array[count] << " ";
    }

    cout << endl;

    int highest = array[0];

    for (int count = 0; count < size; count++)
    {
        if(array[count] > highest)
        {
            highest = array[count];
        }
    }

    cout << "The largest integer is: " << highest << endl;

return 0;
}