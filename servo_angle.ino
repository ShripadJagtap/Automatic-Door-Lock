//Contributed by ShripadJagtap & Phantonym21
#include <Servo.h>
Servo servo1;
int servoPin = 7;

void setup(){
  servo1.attach(servoPin);
}

void loop(){
  servo1.write(0);
  delay(1000);
  servo1.write(90);
  delay(1000);
  servo1.write(180);
  delay(1000);
}