// Traffic Light Simulation using ESP32

// Pin definitions
const int redLightPin = 18;   // Red LED connected to GPIO 23
const int yellowLightPin = 22; // Yellow LED connected to GPIO 22
const int greenLightPin = 21;  // Green LED connected to GPIO 21

void setup() {
  // Initialize the LED pins as outputs
  pinMode(redLightPin, OUTPUT);
  pinMode(yellowLightPin, OUTPUT);
  pinMode(greenLightPin, OUTPUT);
}

void loop() {
  // Red light for 5 seconds
  digitalWrite(redLightPin, HIGH);  // Turn on red light
  digitalWrite(yellowLightPin, LOW); // Turn off yellow light
  digitalWrite(greenLightPin, LOW);  // Turn off green light
  delay(5000);                       // Wait for 5 seconds

  // Green light for 5 seconds
  digitalWrite(redLightPin, LOW);   // Turn off red light
  digitalWrite(yellowLightPin, LOW); // Turn off yellow light
  digitalWrite(greenLightPin, HIGH); // Turn on green light
  delay(5000);                       // Wait for 5 seconds

  // Yellow light for 2 seconds
  digitalWrite(redLightPin, LOW);   // Turn off red light
  digitalWrite(yellowLightPin, HIGH); // Turn on yellow light
  digitalWrite(greenLightPin, LOW);  // Turn off green light
  delay(2000);                       // Wait for 2 seconds
}

