#include <Servo.h>

byte pinPot = A0;
Servo miServo;
int angle;
int readings;

void setup() {
	pinMode(pinPot, INPUT);
	miServo.attach(2);
	Serial.begin(9600);
}

void loop() {
	readings = analogRead(pinPot);
	angle = map(readings, 0, 1023, 0, 180);
	miServo.write(angle);
	Serial.println(angle);
}
