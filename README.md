# 🔴 IR-Based Object Detection System using Arduino Uno

> A real-time embedded system that detects the presence of objects using infrared sensors and an Arduino Uno — triggering an LED output on detection.

---

## 📌 Overview

This project implements a simple and effective object detection system using an **IR (Infrared) sensor** and an **Arduino Uno**. The IR sensor emits infrared light and detects when an object (such as a hand or any physical obstacle) reflects that light back to the receiver. When an object is detected, the Arduino triggers an **LED indicator** as a visual output signal.

This project demonstrates core embedded systems concepts including sensor interfacing, real-time signal reading, threshold-based detection, and output control — directly applicable to obstacle avoidance and automation systems.

---

## 👤 Developer

**Rambilas Sah**
B.E. Computer Science & Engineering
Sona College of Technology, Salem
GitHub: [Ram-Sah19](https://github.com/Ram-sah19)

---

## 🛠️ Components Required

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| IR Sensor Module | 1 |
| LED | 1 |
| Resistor (220Ω) | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |
| Computer with Arduino IDE | 1 |

---

## ⚙️ How It Works

```
IR Sensor emits infrared light continuously
        ↓
Object (hand / obstacle) enters detection range
        ↓
Infrared light reflects back to the receiver
        ↓
Sensor output pin goes LOW (object detected)
        ↓
Arduino reads the sensor signal
        ↓
Arduino triggers LED ON as output indicator
        ↓
Object removed → IR signal lost → LED OFF
```

### Detection Logic

| Sensor Output | Meaning | LED State |
|---------------|---------|-----------|
| LOW | Object detected | ON |
| HIGH | No object | OFF |

---

## 🔌 Circuit Connections

| IR Sensor Pin | Arduino Pin |
|---------------|-------------|
| VCC | 5V |
| GND | GND |
| OUT | Digital Pin 2 |

| LED | Arduino Pin |
|-----|-------------|
| Anode (+) via 220Ω resistor | Digital Pin 13 |
| Cathode (−) | GND |


## 🚀 Applications

- **Obstacle Avoidance Robots** — detect and avoid objects in path
- **Security Systems** — detect presence of intruders
- **Automated Counters** — count objects passing a point
- **Industrial Automation** — detect parts on conveyor belts
- **Smart Home Systems** — proximity-based lighting or alerts

---

## ✅ Results

The system successfully detects objects such as hands and physical obstacles in real time. Upon detection, the LED turns ON immediately and turns OFF when the object is removed — demonstrating reliable threshold-based signal detection with minimal latency.

---

## 📚 Key Concepts Demonstrated

- IR sensor interfacing with Arduino Uno
- Digital signal reading and threshold detection
- Real-time output triggering (LED)
- Embedded C programming
- Test bench setup and edge-case validation
- Serial Monitor debugging

---

## 📄 License

This project is academic and open for educational reference.
