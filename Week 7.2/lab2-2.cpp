//@author: Luis Bello
//@date: 9/29/2025
//@purpose: This programs prints if a person is over or under their entered budget

#include <iostream>

using namespace std;

int main()
{
    float budget = 0, expensives = 0, expensivesT = 0, count = 0;


//asks how much you budgeted
    cout << "How much have you budgeted this month?" << endl;
    cin >> budget;                  

//asks how many expensives you have for that month
    cout << "How many expensives do you have for the month>" << endl;
    cin >> count;

//asks for the costs of those expensives
    cout << "Please enter the cost of those expensives. Press enter after entering one expensive." << endl;
    
//A loop happens until it reaches amount of expensives entered
    for(int num = 1; num <= count; num++)
    {
        cin >> expensives;

        expensivesT = expensivesT + expensives;             //find the sum of those expensives, expensivesT
    } 

//Prints the total cost of those expensives
    cout << "The total cost of those expensives is $" << expensivesT << "." << endl;

//if the total cost of the expensives is greater than the budget print the statement below
    if(expensivesT > budget)
    {
        float Over = expensivesT - budget;              //find how much the cost of the expensives is over the budget
        cout << "You are over your budget by $" << Over << "." << endl;
    }

//if the total cost of the expensives is less than the budget then print the statement below
    else if (expensivesT < budget)
    {
        float Under = budget - expensivesT;  //finds how much the total cost of the expensives is below the budget
        cout << "You are under your budget by $" << Under << "." << endl;
    }

//if the total cost of expensive is the same as the budget then print the statement below
    else
    {
    cout << "You are on your budget." << endl;
    }

return 0;
    
} 