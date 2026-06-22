# 🏠 Sensor-Based Home Automation System

## 📌 Overview
This project presents a modular home automation system using embedded system concepts and sensor-based decision logic. The system simulates automatic control of household devices based on environmental conditions.

The system follows a structured design separating sensing and control layers, enabling scalability for real-world IoT integration.

---

## 🚀 Features
- Sensor-based automatic device control
- ON/OFF switching logic based on environmental conditions
- Modular architecture with separation of components
- Real-time simulation of smart home behavior
- Extendable for real IoT deployment

---                                                                          

## 🛠️ Technologies Used
- C++ (Embedded-style programming)
- Modular system architecture
- Control logic implementation
- Sensor simulation

---

## ⚙️ System Architecture

The system is designed using modular components:

- **Sensor Module**
  - Simulates environmental input (light, temperature, motion)

- **Controller Module**
  - Processes sensor inputs
  - Applies decision logic for device control

- **Device Module**
  - Represents home devices (light, fan, etc.)

- **Main Application**
  - Integrates all modules and executes system flow

---

## 🔄 How It Works

1. Sensors simulate environmental data (e.g., light level, motion)
2. Data is passed to the controller module
3. Controller processes inputs using predefined logic
4. Devices are automatically switched ON/OFF
5. System prints output for monitoring behavior

---

## ▶️ How to Run

### Compile:
g++ main.cpp sensors.cpp controller.cpp device.cpp -o home_system

### Run:
./home_system

---

## 📁 Project Structure

sensor-based-home-automation/
│
├── main.cpp         # Entry point
├── sensors.cpp      # Simulated sensor input
├── sensors.h        # Sensor interface
├── controller.cpp   # Decision-making logic
├── controller.h     # Controller interface
├── device.cpp       # Device control logic
├── device.h         # Device interface

---

## 📊 Example Output

Home Automation System

Light Level: LOW
Motion Detected: YES

[ACTION] Lights ON
[ACTION] Fan OFF
-----------------------

---

## 🧠 Design Highlights

- Modular system design for scalability
- Separation of sensing, control, and device layers
- Simulation-based validation without hardware
- Rule-based automated decision making

---

## ⚠️ Limitations

- Uses simulated sensor data (no physical hardware)
- No wireless communication or cloud integration
- No persistent system state

---
                                                      
## 📷 Future Improvements

- Integration with Arduino / ESP32 hardware
- Wireless communication (WiFi / BLE)
- Mobile app control interface
- Voice assistant integration
- Smart scheduling and learning-based automation

---

## 📚 What I Learned
- Embedded system architecture design
- Control logic implementation in IoT systems
- Modular programming and system integration
- Real-time system simulation

---

## 👨‍💻 Author
Mahan Hithalamakki Sundaresh  
Master’s Student – Electrical & Microsystems Engineering  
