//Contributed by ShripadJagtap & Phantonym21
#include<Servo.h>
Servo Myservo;
int pos;
void setup()
{
Myservo.attach(3);
}

void loop()
{
  
  
for(pos=0;pos<=180;pos++){
Myservo.write(pos);
delay(15);
}
  delay(1000);
  
  for(pos=180;pos>=0;pos--){
Myservo.write(pos);
delay(15);
}
  delay(1000);
  
}