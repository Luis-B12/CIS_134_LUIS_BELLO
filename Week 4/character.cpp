//@author: Luis Bello
//@date: 9/10/2025
//@purpose: This programs determines if a character is a vowel or a consonant

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char character;

    cout << "Please enter a single character and press enter.";
    cin >> character;

//Lists all the vowels and checks if the character insert is vowel

    if (character == 'a' || character == 'A' || character == 'i' || 
        character == 'I' || character == 'e' || character == 'E' ||
        character == 'o' || character == 'O' || character == 'u' || 
        character == 'U'){
      
        cout << "The letter is a vowel.";       //Prints if the character is vowel

//Lists the numbers and checks if the character inserted is number.
    
    }else if (character == '1'|| character == '2' || character == '3' || 
            character == '4' || character == '5' || character == '6'||
            character == '7' || character == '8' || character == '9'|| character == '0'){
           
                cout << "The character entered is not a letter. Please enter a letter."; // Prints if the character is not a letter
            }
   
//Lists all the consonants and checks if the character is a consonant

            else if (character == 'q'|| character == 'Q'|| character =='w'|| 
            character =='W'|| character =='r'|| character =='R'|| 
            character =='t'|| character =='T'|| character =='y'|| 
            character =='Y'|| character =='p'|| character =='P'|| 
            character =='s'|| character =='S'|| character =='d'|| 
            character =='D'|| character =='f'|| character =='F'|| 
            character =='g'|| character =='G'|| character =='h'||
            character =='H'|| character =='j'|| character =='J'|| 
            character =='k'|| character =='K'|| character =='l'|| 
            character =='L'|| character =='z'|| character =='Z'|| 
            character =='x'|| character =='X'|| character =='c'|| 
            character =='C'|| character =='v'|| character =='V'|| 
            character =='b'|| character =='B'|| character =='n'|| 
            character =='N'|| character =='m'|| character =='M')
          
            cout << "The character is a consonant.";        //Prints if the character is a character
return 0;
}