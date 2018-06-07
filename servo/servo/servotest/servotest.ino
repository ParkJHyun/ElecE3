#define srv 4
#include <Servo.h>

Servo servo;
int angle=140;

void setup()
{
  Serial.begin(9600);
  servo.attach(srv);
}

void loop()
{
  
  servo.write(-50);
  delay(1000);
  servo.write(angle);
  delay(5000); 
}

