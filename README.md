# IoT Smoke Detector Project

This project is an IoT-based smoke detector designed to detect smoke and alert users through visual and auditory signals. It was completed as part of the IOT 281 module. The system uses an Arduino microcontroller, a smoke sensor, an LCD display, an LED, and a buzzer to provide real-time smoke detection and alerts. The project was built and simulated using Tinkercad, an online platform for circuit design and simulation.

![](https://github.com/Felix-Red/Smoke-detector-IOT/blob/master/Screenshot%202025-03-22%20071132.png)

## Components:
- Arduino Microcontroller: The main control unit for the system.
- Smoke Sensor (A0): Detects the presence of smoke.
- LCD Display: Shows the status of the environment (Safe or Smoke Detected).
- Red LED: Visual indicator for smoke detection.
- Buzzer: Auditory alert for smoke detection.
- Button: Used to reset the system.

## Functionality
Smoke Detection: The system continuously monitors the environment for smoke. If smoke is detected (analog value > 400), the red LED lights up, the buzzer sounds, and the LCD displays "SMOKE DETECTED!!" and "EVACUATE".

Safe Environment: If no smoke is detected, the LCD displays "SAFE..." and the LED and buzzer remain off.

Reset: Pressing the button resets the system, turning off the buzzer and displaying "Resetting..." on the LCD.
