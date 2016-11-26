/*
HC-SR04 
 
Circuit:
  VCC to arduino 5v 
  GND to arduino GND
  Echo to Arduino pin 11 
  Trig to Arduino pin 12
*/
const int trigPin = 12;
const int echoPin = 11;
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop() {
  long duration, distance;
 
  // send the pulse
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); // low for 2 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // high for 10 microseconds
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); // measure the time to the echo
  distance = (duration/2) / 29.1;  // calculate the distance in cm
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range; reading invalid");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500); 
}
