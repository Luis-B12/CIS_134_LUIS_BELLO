//@author: Luis Bello
//@date: 9/23/2025
//@purpose: This programs rolls dice (0-6) based on the  inputed interger

#include <iostream>
#include <random>

using namespace std;

int main()
{
    int minR = 1, maxR = 0;                         //initialize the min rolls to 0 and max rolls to 0

    random_device dice;                             //sets a random engine called dice

    uniform_int_distribution<int> randomInt(0,6);   //set the random engine to only intergers from 0 to 6

    
    //asks from max amount of rolls
    
    cout << "This program will give a dice rolls depending the on amount of rolls you want." << endl 
        << "Please insert the amount of rolls you want.";

    cin >> maxR;                                       

    for (int num = minR; num <= maxR; num ++)     //num is initialized to minR, if num less than and equal to max R do below and add one to num once finished
    {
        cout << randomInt(dice) << endl;          //prints the random number that is created by the engine
    }

return 0;
}