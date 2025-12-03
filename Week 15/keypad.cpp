/*
@author: Luis Bello
@Date: 12/3/2025
@Purpose: simple security system that checks the password from keypad
*/
#include <Keypad.h>

int ledRed = 2; //this is the red LED pin
int failDelay = 0;
int successDelay = 0;
int ledGreen = 4; //this is the green LED pin
const byte ROWS = 4; //this is the number of rows
const byte COLS = 4; //this is the number of columns
char  keyPadEntries[5];

//represents the keypad
char  keys[ROWS][COLS] = {'1','2','3','A',
                          '4','5','6','B',
                          '7','8','9','C',
                          '*','0','#','D'};
//password of the keypad
const char password[5] = {'2','4','B','*','D'};


byte rowPins[ROWS] = {13,12,11,10}; //keypad rows
byte colPins[COLS] = {9,8,7,6}; //keypad cols

bool correct = true;

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

int keyPressCount = 0;

//executes when the arduino starts up
void setup()
{
  //sets the pins to output
  pinMode(ledRed,OUTPUT);
  pinMode(ledGreen,OUTPUT);
  
  //sets the serial port speed
  Serial.begin(9600);
}

//infinite loop
void loop()
{
  
  char key = keypad.getKey();
  
  //if a key was pressed
  if (key)
  {
    Serial.println(key);      //prints key press
    keyPadEntries[keyPressCount] = key;
    keyPressCount++;
    
    if(key == '#')		//
    {
		for(int num =0; num < 5;num++)
        {
			if(password[num] != keyPadEntries[num])
            {
              correct = false;
            }
  		}
            
        if(correct == true)
        {
          digitalWrite(ledGreen,HIGH);
          delay(3000);
          digitalWrite(ledGreen,LOW);
          
        }
            
        if(correct == false)
        {
          digitalWrite(ledRed,HIGH);
          delay(3000);
          digitalWrite(ledRed,LOW);
        }
      correct = true;		//resets the statement
    }
  }
}