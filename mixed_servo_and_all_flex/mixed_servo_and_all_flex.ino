#include <Servo.h>
const int flexPin1 = A0;
Servo myServo1;

void setup()
{
Serial.begin(9600);
pinMode(flexPin1,INPUT);
 myServo1.attach(11);
}
void loop()
{
  int flexValue1;  
  int servoPosition1;
  flexValue1 = analogRead(flexPin1);
  servoPosition1 = map(flexValue1,800,900,0,180);
  servoPosition1 = constrain(servoPosition1,0,180);
  Serial.println(servoPosition1);
  myServo1.write(servoPosition1);
  delay(100);

 if (servoPosition1 < 900)
  myServo1.write(0);
 else
  myServo1.write(180);
}
