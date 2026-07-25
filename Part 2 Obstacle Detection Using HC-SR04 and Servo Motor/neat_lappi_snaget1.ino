#include <Servo.h>

Servo myServo;

const int trigPin = 10;
const int echoPin = 11;

long duration;
int distance;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  myServo.attach(9);
  myServo.write(90);

  Serial.begin(9600);
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= 10) {

    myServo.write(0);
    delay(1000);

    myServo.write(180);
    delay(1000);

    myServo.write(90);
    delay(1000);

  }

  delay(200);

}