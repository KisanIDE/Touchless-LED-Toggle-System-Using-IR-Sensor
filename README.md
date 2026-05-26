DEMO VIDEO: ( https://youtu.be/mm9QGoA6Pp8 )


1. Project Title
Touchless LED Toggle System using IR Sensor and Arduino

2. Objective
To design a touchless switching system where an LED can be controlled using an IR sensor and Arduino.

3. Components Required
- Arduino Uno
- IR Sensor Module
- LED
- 330Ω Resistor
- Breadboard
- Jumper Wires
- USB Cable

4. Circuit Connections
- IR Sensor VCC → 5V
- IR Sensor GND → GND
- IR Sensor OUT → Pin 2

- LED Anode (+) → Pin 8 (through 330Ω resistor)
- LED Cathode (-) → GND

5. Working Principle
The IR sensor detects an object and sends a LOW signal to Arduino. Each detection toggles the LED ON or OFF. A detection flag ensures single trigger per object.

6. Result
The LED successfully toggles ON/OFF using touchless detection.

7. Conclusion
This project demonstrates a simple touchless control system using Arduino and IR sensor.
