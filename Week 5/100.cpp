//@author: Luis Bello
//@date: 9/17/2025
//@purpose: This programs loops until the correct tempautre is inputted

#include <iostream>

int main()
{
    int num = 1,                        
        MAXnum = 100;

    for (num;num <= MAXnum; num++)
    {
        std:: cout << num << std:: endl;
    

        if (num == MAXnum)
        {    
            std:: cout << num << " is the number of iterations." << std:: endl;
        }
    }
return 0;
}