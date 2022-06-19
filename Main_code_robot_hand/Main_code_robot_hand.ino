#include <Servo.h>
const int flexPin1 = A0;
const int flexPin2 = A1;
const int flexPin3 = A2;
const int flexPin4 = A3;
const int flexPin5 = A4;
int flexValue1; 
int flexValue2; 
int flexValue3; 
int flexValue4;
int flexValue5;
int servoPosition1;
int servoPosition2;
int servoPosition3;
int servoPosition4;
int servoPosition5;
Servo myServo1;
Servo myServo2;
Servo myServo3;
Servo myServo4;
Servo myServo5;

void setup()
{
Serial.begin(9600);
pinMode(flexPin1,INPUT);
pinMode(flexPin2,INPUT);
pinMode(flexPin3,INPUT);
pinMode(flexPin4,INPUT);
pinMode(flexPin5,INPUT);
myServo1.attach(11);
myServo2.attach(10);
myServo3.attach(9);
myServo4.attach(6);
myServo5.attach(5);
}
void loop()
{
//servo1();
  servo2();
  //servo3();
 //servo4();
// servo5();
}
void servo1(){
 if (servoPosition1 < 900)
  myServo1.write(0);
 else
  myServo1.write(180);
  flexValue1 = analogRead(flexPin1);
  servoPosition1 = map(flexValue1,800,900,0,180);
  servoPosition1 = constrain(servoPosition1,0,180);
  Serial.print("Sensor1= ");
  Serial.println(servoPosition1);
  myServo1.write(servoPosition1);
  delay(50);
}
void servo2(){
  if (servoPosition2 < 900) 
  myServo2.write(0);
 else
  myServo2.write(180);
  flexValue2 = analogRead(flexPin2);
 // Serial.println(flexValue2);
  servoPosition2 = map(flexValue2,800,900,0,180);
  servoPosition2 = constrain(servoPosition2,0,180);
  Serial.print("Sensor2= ");
  Serial.println(servoPosition2);
  myServo2.write(servoPosition2);
  delay(500);
}
void servo3(){
  if (servoPosition3 < 900)
  myServo3.write(0);
 else
  myServo3.write(180);
  flexValue3 = analogRead(flexPin3);
 // Serial.println(flexValue3);
 
  servoPosition3 = map(flexValue3,970,1000,0,180);
  servoPosition3 = constrain(servoPosition3,180,0);
  Serial.print("Sensor3= ");
  Serial.println(servoPosition3);
  myServo3.write(servoPosition3);
  delay(100);
}
void servo4(){
 if (servoPosition4 < 900)
  myServo4.write(0);
 else
  myServo4.write(180);
  flexValue4 = analogRead(flexPin4);
  servoPosition4 = map(flexValue4,800,900,0,180);
  servoPosition4 = constrain(servoPosition4,10,100);
  Serial.print("Sensor4= ");
  Serial.println(servoPosition4);
  myServo4.write(servoPosition4);
delay(100);
}
void servo5(){
 if (servoPosition5 < 900)
  myServo5.write(0);
 else
  myServo5.write(0);
  flexValue5 = analogRead(flexPin5);
  servoPosition5 = map(flexValue5,800,900,0,180);
  servoPosition5 = constrain(servoPosition5,100,180);
  Serial.print("Sensor5= ");
  Serial.println(servoPosition5);
  myServo5.write(servoPosition5);
  delay(100);
}
