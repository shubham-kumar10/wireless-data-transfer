#include <SoftwareSerial.h>

#define rxPin 3  
#define txPin 4  

SoftwareSerial XSERIAL =  SoftwareSerial(rxPin, txPin);

void setup()  
{
     XSERIAL.begin(9600);
}

void loop() 
{ 
    XSERIAL.println("ZOLA LAB:  HELLO WORLD !!!");
    delay(1000);  
}
