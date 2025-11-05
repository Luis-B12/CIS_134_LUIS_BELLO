 // Luhn check processing from right to left using the reversed credit cart. With the double being the p of 1,3,5,... etc
 
    for ( int num = 0; num < characters; num++)
    {
        long long DoubleOdd = 0;

        if(num % 2 == 0)
        {
            sum = sum + Rev_IntCC[num];
        }

        if( num % 2 != 0)
        {
            DoubleOdd = Rev_IntCC[num] * 2;

            if(DoubleOdd > 9)
            {
                long long SubstractedDoubleOdd = DoubleOdd - 9;

                sum = sum + SubstractedDoubleOdd;
            }

            else
            {
                sum = sum + DoubleOdd;
            }

        }
    }

cout << "Sum: " << sum << endl;

//Does the mod 10 check if the credit card number is valid

    if(sum % 10 == 0)
    {
        cout << "The credit card number is valid.";
    }
    
    else
    {
        cout << "The credit card number is not valid.";
    }

    return 0;
}
