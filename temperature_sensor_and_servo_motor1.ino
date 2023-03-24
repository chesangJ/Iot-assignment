#include <Servo.h>

Servo servo1;                               
 
int sensorPin=A0;
 float temperature;


void setup()                            
{
  Serial.begin(9600);                   
  servo1.attach(3);                     
}

void loop()                             
{
  int reading = analogRead(sensorPin);  
  
 temperature=(reading*5.0)/1024.0*100.0;
  
 
  
 Serial.println(" Temperature");
 Serial.print(temperature);
 Serial.println("C");

    if (temperature > 30)                                  
    {                                                      
      servo1.write(90);                                
     
    }
    else                                                   
    {
      servo1.write(0);                               
     
    }
  delay(1000);                                             
}