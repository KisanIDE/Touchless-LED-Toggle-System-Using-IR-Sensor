// IR Sensor Touchless LED Toggle Project

// Pin connections
int irSensor = 2;   // IR sensor output pin connected to Arduino digital pin 2
int led = 8;        // LED connected to Arduino digital pin 8

// Variables to store system state
bool ledState = LOW;     // Stores current LED state (ON/OFF)
bool detected = false;   // Helps avoid multiple triggers for same object

void setup() {
  pinMode(irSensor, INPUT);   // Set IR sensor as input
  pinMode(led, OUTPUT);       // Set LED as output

  Serial.begin(9600);         // Start Serial Monitor for debugging
}

void loop() {

  // Read IR sensor value
  int sensorStatus = digitalRead(irSensor);

  // If object is detected AND it was not already detected before
  if (sensorStatus == LOW && detected == false) {

    // Toggle LED state (ON ↔ OFF)
    ledState = !ledState;

    // Apply LED state to output pin
    digitalWrite(led, ledState);

    // Print status in Serial Monitor
    if (ledState == HIGH) {
      Serial.println("Object Detected → LED ON");
    } 
    else {
      Serial.println("Object Detected → LED OFF");
    }

    // Mark that object has been detected
    detected = true;

    // Small delay to avoid rapid multiple toggles
    delay(500);
  }

  // Reset detection flag when object is removed
  if (sensorStatus == HIGH) {
    detected = false;
  }
}