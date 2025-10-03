//@author: Luis Bello
//@date: 9/29/2025
//@purpose: This programs prints a square with astrickes

#include <iostream>

using namespace std;

int main()
{
    int length = 1;

    cout << "What is the length of the square that you want?";
    cin >> length;                                              //decides the length of the square

    for (int num = 0; num < length; num++)                      //set amount of lines to the length
    {
        for(int count = 0; count < length; count++)             //set the amount of * for each lines to the length
        {
            cout << "*  ";                                      //prints the *
        }

        cout << endl;                                           //sets a new line
    }

return 0;

}