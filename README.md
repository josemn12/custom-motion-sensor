# Arduino Project: [custom-motion-sensor]

## Overview
This Arduino project detects movement in a room, and alerts via a lighting system in another room, when the first room is empty. 

A primary bluetooth module transmits PIR motion sensor data to a separate secondary bluetooth module that receives the sensor data. The secondary bluetooth module provides the data to the Arduino board, which then controls the lighting system.

---

## Features
- PIR motion sensor data is transmitted via primary bluetooth module.
- Secondary bluetooth module receives sensor data.
- Arudino board receives sensor data and controls lighting system accordingly.
- Designed for detecting when a room is empty and alerting in a separate room.

---

