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
| **Rambilas Sah** |
| Jerome John Itty |
| Parash Daulyal | 
| Rahul K |


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
