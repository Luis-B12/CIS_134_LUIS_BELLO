//@author: Luis Bello
//@date: 10/29/2025
//@purpose: This programs creates an arrray and reverses it

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
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
    
    int revarray[size];

    for (int i = 0; i < size; i++)
    {
            revarray[i] = array[size - i - 1];
    }

    cout << "Regular array: ";

    for ( int size : array)
    {
        cout << size << " ";
    }

    cout << endl << "Reverse Array: ";

    for(int size : revarray)
    {
        cout << size << " ";
    }

}

/*if(cin.fail())
        {
            cout << "You did NOT enter a integer. Try again." << endl;
            cin.clear();
        }*/