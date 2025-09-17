//@author: Luis Bello
//@date: 9/17/2025
//@purpose: This programs loops until the correct tempautre is inputted

#include <iostream>

int main()
{
    float temp = 0,                         //tempature that will be changed
          cTemp = 212.34;                   //the correct tempature

    std:: cout << "What is the tempature?" << std::endl;        //ask for the tempature
    
    std:: cin >> temp;

    while (temp != cTemp)               //compares the temp and cTemp. If they are not equal it prints
    {
        std:: cout << "Please enter the correct tempature of 212.34." << std:: endl;
        std:: cin >> temp;              //allows temp to be inserted again

        if (temp == cTemp)              //compares temp and ctemp. If they are equal it prints
        std:: cout << "The tempature has been successfully set, thank you.";
    }

return 0;
}