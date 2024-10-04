// Traffic Light Simulation using ESP32

// Pin definitions
const int redLightPin = ;   //Pick a GPIO pin for Red.
const int yellowLightPin = ; // Pick a GPIO pin for Yellow.
const int greenLightPin = ;  // Pick a GPIO pin for Green.

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

  // Green light for 5 seconds
  digitalWrite(redLightPin, LOW);   // Turn off red light
  digitalWrite(yellowLightPin, LOW); // Turn off yellow light
  digitalWrite(greenLightPin, HIGH); // Turn on green light

  // Yellow light for 2 seconds
  digitalWrite(redLightPin, LOW);   // Turn off red light
  digitalWrite(yellowLightPin, HIGH); // Turn on yellow light
  digitalWrite(greenLightPin, LOW);  // Turn off green light
}

