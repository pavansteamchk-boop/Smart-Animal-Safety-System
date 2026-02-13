# Smart Animal Safety System

## Problem Statement
Injured street and monitored animals often do not receive timely medical care because detection depends on human observation and manual reporting. This causes delays in rescue, poor coordination, and sometimes loss of life.

## Proposed Solution
The Smart Animal Safety System uses wearable sensors connected to a microcontroller to detect abnormal movement, impact, or temperature in animals. When unusual conditions are detected, the system sends real-time GPS location alerts to nearby NGOs through a mobile application.

## Target Users
- Animal rescue NGOs
- Veterinarians
- Rescue volunteers
- Animal shelters
- Municipal animal welfare officers

## System Architecture
Wearable Sensor → Microcontroller (ESP32) → GPS Module → Cloud Server → Mobile App → NGO Rescue Team

## Technology Used
- ESP32 Microcontroller
- MPU6050 Accelerometer
- Temperature Sensor
- GPS Module
- Firebase Cloud Backend
- Mobile Application Interface

## Core Algorithm Logic
The system continuously monitors:
- Sudden impact (high acceleration spike)
- Long inactivity
- Abnormal temperature

If any condition exceeds predefined thresholds, the system triggers an emergency alert and sends GPS coordinates to registered NGOs.

## Debugging & Improvements
Initially, the system generated false alerts due to low impact threshold values. We refined threshold calibration to reduce false positives while ensuring safety.

## Future Scope
- Intelligent threshold optimization
- Distance-based NGO prioritization
- Data analytics for animal injury trends
