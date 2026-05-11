
// Arduino-Based Object Distance Detection
// Ultrasonic Sensor HC-SR04

const int trigPin = 9;
const int echoPin = 10;

long duration;
float distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  Serial.println("Object Distance Detection Started...");
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send 10µs HIGH pulse to trigPin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin — returns sound wave travel time in µs
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  distance = (duration * 0.034) / 2;

  // Display on Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}
