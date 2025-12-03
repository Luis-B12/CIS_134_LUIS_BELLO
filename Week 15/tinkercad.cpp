/*
author: Luis Bello
date: 11/24/2025
purpose: makes the led blink
*/

int led = 8;

void setup()
{
	//set the pin to output
  	pinMode(led,OUTPUT);
    
    //set the serial port speed
    Serial.begin(9600);
}

void loop()
{
	//set the led pin to HIGH
  	digitalWrite(led,HIGH);
    delay(500);
  	digitalWrite(led,LOW);
  	delay(500);
}