#include <Servo.h>
#define motor 22
#define sensorFlex 36

Servo servo;

void setup()
{
  servo.attach(motor);
  Serial.begin(115200);
  pinMode(sensorFlex, INPUT);
}

void loop(){
  int flex = analogRead(sensorFlex);
  Serial.print("flex = ");
  Serial.println(flex);
  
  int angle = map(flex, 1350, 2300, 135, 0);
  servo.write(angle);
  Serial.print("angle = ");
  Serial.println(angle);
  delay(200);
}
