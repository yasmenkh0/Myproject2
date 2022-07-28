#include <Servo.h>
Servo myservo;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() 
{
  String data_from_web = Serial.readStringUntil('\r');
  if(data_from_web == "right")
  {
    myservo.write(180);
    Serial.println("Servo right");
    delay(15);  
  }
  else if(data_from_web == "left")
  {
    myservo.write(0);
    Serial.println("Servo left");
    delay(15);  
  }
}
