#include <Servo.h>

Servo servo1;
Servo servo2;
int joyX=0;
int joyY=1;

int joyval;
void setup()
{
  servo1.attach(5);
  servo2.attach(6);

  
}
void loop()
{
  joyval = analogRead(joyX);
  joyval = map(joyval,0,1023,0,180);
  servo1.write(joyval);

  joyval = analogRead(joyY);
  joyval = map(joyval,0,1023,0,180);
  servo2.write(joyval);
  delay(15);
  
}
