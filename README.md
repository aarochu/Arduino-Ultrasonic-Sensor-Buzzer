# Ultrasonic Sensor with Buzzer and LED

This project uses an HC-SR04 ultrasonic sensor to measure how close an object is.  
A buzzer and LED react depending on the distance, similar to a car parking sensor.

---

## Features
- Detects distance in centimeters.
- Buzzer and LED change behavior based on how close an object is:
  - < 10 cm → buzzer and LED stay on.
  - 10–20 cm → buzzer and LED blink fast.
  - 20–30 cm → buzzer and LED blink slower.
  - > 30 cm → buzzer and LED stay off.
- Distance is also printed to the Serial Monitor.

---

## Hardware
- Arduino Mega 2560 (Elegoo Mega R3)
- HC-SR04 ultrasonic sensor
- Active buzzer
- LED (pin 13, onboard LED works too)
- Jumper wires / breadboard

---

## Wiring

| HC-SR04 | Arduino Mega |
|---------|--------------|
| VCC     | 5V |
| GND     | GND |
| Trig    | D9 |
| Echo    | D10 |

| Buzzer | Arduino Mega |
|--------|--------------|
| +      | D11 |
| -      | GND |

| LED | Arduino Mega |
|-----|--------------|
| +   | D13 |
| -   | GND |

---

## How to Use
1. Connect everything as shown above.
2. Open the sketch in Arduino IDE.
3. Select **Arduino Mega 2560** under Board and the right Port.
4. Upload the code.
5. Open Serial Monitor at 9600 baud to see the distance readings.

---

