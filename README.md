# 📡 Arduino-Based Object Distance Detection Using Ultrasonic Sensor

> A real-time embedded system that measures the distance of objects using ultrasonic waves and an Arduino Uno microcontroller — built as part of the Fundamentals of Robotics course (U23MC1008).

---

## 📌 Overview

Object distance detection is a core concept in robotics and automation. This project implements a simple, low-cost, and efficient distance measurement system using an **Arduino Uno** and an **HC-SR04 Ultrasonic Sensor**.

The ultrasonic sensor emits sound waves and measures the time taken for them to reflect back from an object. The Arduino processes this time delay to compute the exact distance, which is then displayed live on the Serial Monitor via Arduino IDE.

---

## 👥 Team

| Name | Reg No |
|------|--------|
| **Rambilas Sah** | 61782323102131 |
| Jerome John Itty | 61782323102057 |
| Parash Daulyal | 61782323102115 |
| Rahul K | 61782323102127 |

**Course:** Fundamentals of Robotics (U23MC1008)
**Department:** Computer Science and Engineering
**Institution:** Sona College of Technology, Salem

---

## 🛠️ Components Required

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Ultrasonic Sensor (HC-SR04) | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |
| Computer with Arduino IDE | 1 |

---

## ⚙️ How It Works

```
Arduino Uno triggers the Trig pin
        ↓
HC-SR04 emits ultrasonic sound waves
        ↓
Sound waves travel toward the object
        ↓
Waves reflect back on hitting the object
        ↓
Echo pin receives the reflected signal
        ↓
Arduino calculates travel time of the wave
        ↓
Distance = (Time × Speed of Sound) / 2
        ↓
Real-time distance displayed on Serial Monitor
```

### Distance Formula

```
Distance (cm) = (Duration × 0.034) / 2
```

Where `Duration` is the time (in microseconds) between the Trig pulse and Echo response.

---

## 🔌 Circuit Connections

| HC-SR04 Pin | Arduino Pin |
|-------------|-------------|
| VCC | 5V |
| GND | GND |
| Trig | Digital Pin 9 |
| Echo | Digital Pin 10 |

---

## 💻 Arduino Code

```cpp
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
```

---

## 🚀 Applications

- **Obstacle Detection Robots** — autonomous navigation and collision avoidance
- **Parking Assistance Systems** — vehicle proximity alerts
- **Security Monitoring** — motion and intrusion detection
- **Industrial Automation** — conveyor belt object sensing
- **Distance Measuring Devices** — portable measurement tools

---

## ✅ Results

The system successfully measures object distance in real time and displays it continuously on the Serial Monitor. The HC-SR04 sensor provides reliable readings in the range of **2 cm to 400 cm** with approximately **3mm accuracy**.

---

## 📚 Key Concepts Demonstrated

- Ultrasonic sensing and signal processing
- Embedded C programming on Arduino
- Sensor interfacing (Trig/Echo pin protocol)
- Real-time data acquisition and serial communication
- Threshold detection and output triggering

---

## 📄 License

This project is academic and open for educational reference.
