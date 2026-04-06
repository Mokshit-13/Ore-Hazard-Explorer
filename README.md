# 🚜 Ore Hazard Explorer

[![Live Demo](https://img.shields.io/badge/Live%20Demo-Netlify-blue?style=for-the-badge)](https://orehazardexplorer4.netlify.app/)
[![Hardware](https://img.shields.io/badge/Hardware-ESP32%20|%20ESP32--CAM-orange?style=for-the-badge)](#)
[![Safety First](https://img.shields.io/badge/Focus-Occupational%20Safety-success?style=for-the-badge)](#)

> An IoT-based autonomous rover and real-time alert system designed for comprehensive toxic gas detection and environmental monitoring in underground mining environments.

---

## 📖 Overview

Mining remains one of the most hazardous industries, with workers frequently exposed to toxic, odorless, and combustible gases like Methane (CH₄), Carbon Monoxide (CO), and Hydrogen Sulfide (H₂S). Traditional fixed-sensor monitoring systems are often insufficient for large, dynamic mining operations. 

The **Ore Hazard Explorer** is a cost-effective, scalable, and mobile IoT solution. By deploying an ESP32-CAM powered rover equipped with a highly calibrated multi-sensor array, this system navigates dangerous, hard-to-reach underground zones to detect gas leaks in real-time. It streams live video, maps hazard zones, and transmits critical environmental data to a remote web dashboard, ensuring worker safety and drastically reducing the risk of fatal accidents.

---

## ✨ Key Features

* **Real-Time Gas Detection:** Continuous monitoring of CH₄, CO, and H₂S using a specialized sensor array.
* **Remote Rover Navigation:** Omni-directional control via a web interface to navigate rough, unpredictable terrains without risking human lives.
* **Live Video Telemetry:** ESP32-CAM integration provides low-latency video streaming of the underground environment directly to the dashboard.
* **Intelligent Alert System:** Automated color-coded visual alerts and on-site buzzer activation when toxic gas concentrations exceed safe threshold limits.
* **Data Logging & Analysis:** Interactive gauge meters, real-time graphs, and historical data tracking for trend analysis and predictive maintenance.
* **Cost-Effective & Scalable:** Built on accessible, robust microcontrollers, making it highly adaptable for various industrial applications.

---

## 🛠️ Hardware Architecture

The physical system is divided into two primary subsystems to optimize processing and mobility:

### 1. The Rover Module
* **Microcontroller:** ESP32-CAM (Handles live video streaming and Wi-Fi communication).
* **Motor Driver:** L298N Motor Driver.
* **Propulsion:** 4 x DC Motors with high-traction wheels for uneven surfaces.
* **Power:** Rechargeable Lithium-Ion Battery pack for uninterrupted remote operation.

### 2. The Sensor Module
* **Microcontroller:** ESP32 (Handles analog data acquisition and threshold processing).
* **MQ-4 Sensor:** Detects Methane (CH₄) to prevent combustion risks.
* **MQ-7 Sensor:** Detects Carbon Monoxide (CO) to prevent poisoning.
* **MQ-135 Sensor:** Broad-spectrum detection for Hydrogen Sulfide (H₂S), ammonia, benzene, and smoke.
* **Audio Alert:** Integrated active buzzer for immediate on-site evacuation warnings.

---

## 💻 Web Dashboard & Software Interface

The web application serves as the central command hub, prioritizing situational awareness and rapid response. 
* 🌐 **Live Website:** [Ore Hazard Explorer Dashboard](https://orehazardexplorer4.netlify.app/)

### Dashboard Modules
* **Home/Monitoring Station:** Displays live data feeds from the MQ-4, MQ-7, and MQ-135 sensors using interactive UI elements.
* **Rover Control Panel:** Features a live video feed and directional control logs to maneuver the rover and adjust speeds.
* **Safety Measures Page:** Outlines emergency response protocols, evacuation procedures, and manual alarm overrides.
* **Service & Calibration Page:** Provides maintenance documentation, sensor calibration steps, and system diagnostics.

---

## 🚀 Getting Started

### Prerequisites
* Arduino IDE (configured for ESP32 and ESP32-CAM boards).
* Required Arduino Libraries: `WiFi.h`, `WebServer.h`, and specific sensor libraries (if applicable).
* Node.js & npm (if running the frontend locally).

### Hardware Setup
1. Assemble the 4-wheel drive chassis and connect the DC motors to the L298N motor driver.
2. Interface the L298N with the ESP32-CAM GPIO pins.
3. Wire the MQ-4, MQ-7, and MQ-135 analog outputs to the designated ADC pins on the standard ESP32.
4. Ensure both microcontrollers share a common ground if powered from the same battery source.

### Software Deployment
 **To Clone the Repository:**
   ```bash
   git clone [https://github.com/Mokshit-13/Ore-Hazard-Explorer.git](https://github.com/Mokshit-13/Ore-Hazard-Explorer.git)
