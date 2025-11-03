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

    int array[size];                //creates an array with it being the size being the integer inputted

    for(int num = 0; num < size; num++)             //goes through the loop to initialize the array
    {
        cout << "Please enter a interger" << endl;      
        
        while(!(cin >> array[num]))             //validates if the character inputted is a interger if the cin statement fails
        {
            cout << "You did NOT enter a integer. Try again." << endl;
            cin.clear();                        //clears the cin failure
            cin.ignore(50000, '\n');            //ignore the any character before until 50000 character or new lines starts
        }
    }
    
    int revarray[size];                     //reverse array is created

    for (int i = 0; i < size; i++)          //the content of the array is printed to the reversed array in reverse order
    {
            revarray[i] = array[size - i - 1];
    }

    cout << "Regular array: ";         

    for ( int size : array)     //prints the regular array
    {
        cout << size << " ";
    }

    cout << endl << "Reverse Array: ";

    for(int size : revarray)            //prints the reverse array
    {
        cout << size << " ";
    }

}
