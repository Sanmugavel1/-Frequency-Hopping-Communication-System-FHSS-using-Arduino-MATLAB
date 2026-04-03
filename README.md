# 📡 Frequency Hopping Communication System (FHSS) using Arduino & MATLAB

## 🚀 Project Overview
This project demonstrates a **Frequency Hopping Spread Spectrum (FHSS)** based wireless communication system using Arduino and nRF24L01 modules, with real-time visualization in MATLAB.

Unlike traditional communication systems that use a single frequency, this system dynamically switches across multiple channels to improve reliability and reduce interference.

---

## 🎯 Key Highlights
- 🔁 Frequency hopping across multiple channels (10 → 40 → 70 → 100)
- 📡 Wireless communication using nRF24L01
- 💻 Real-time MATLAB dashboard
- 📈 Data visualization and monitoring
- 📶 Channel hopping tracking
- 🎯 Signal reliability analysis
- 🛰️ Radar-style visualization

---
## 📂 Project Structure

FHSS-Communication-System/
│
├── Arduino/
│ ├── transmitter.ino
│ └── receiver.ino
│
├── MATLAB/
│ └── dashboard.m
│
├── Images/
│ ├── setup1.jpg
│ ├── setup2.jpg
│ └── setup3.jpg
│
├── Docs/
│ ├── block_diagram.png
│ └── report.pdf
│
└── README.md
## 🛠️ Hardware Components

- Arduino UNO R4 Minima (Transmitter)
- Arduino Nano (Receiver)
- nRF24L01 RF Modules (2x)
- Breadboard
- Jumper wires
- USB cables

---

## 💻 Software Requirements
- Arduino IDE
- MATLAB

---

## 🔌 Circuit Connections

| nRF24L01 | Arduino |
|----------|--------|
| VCC      | 3.3V ⚠️ |
| GND      | GND    |
| CE       | D9     |
| CSN      | D10    |
| SCK      | D13    |
| MOSI     | D11    |
| MISO     | D12    |

⚠️ Use a **10µF capacitor** between VCC and GND to avoid instability.

---

## ⚙️ Working Principle
1. Transmitter generates data packets.
2. Data is transmitted using nRF24L01.
3. Frequency hopping is applied across predefined channels.
4. Receiver synchronizes and receives data.
5. Data is sent to MATLAB via serial communication.
6. MATLAB dashboard visualizes:
   - Data
   - Channel hopping
   - Signal reliability
   - Active channel radar

---

## 📊 MATLAB Dashboard Features
- 📈 Data vs Time Graph
- 📶 Frequency Channel Plot
- 🎯 Reliability Percentage
- 🛰️ Radar-style Channel Activity
- 📊 Packet Counter

---

## 🛡️ Importance in Defense Applications
Frequency hopping is a core technology in **military communication systems**, helping prevent signal jamming and interception.  
It ensures **secure, reliable, and resilient communication** in critical environments.

---

---

## ▶️ How to Run

### Arduino
1. Upload transmitter code to Arduino UNO R4
2. Upload receiver code to Arduino Nano
3. Verify wiring connections

### MATLAB
1. Open `dashboard.m`
2. Set COM port:
   ```matlab
   port = "COM9";
⚠️ Troubleshooting
nRF not detected → Check wiring and 3.3V supply
No MATLAB data → Verify COM port
Unstable communication → Add capacitor
Serial error → Close Arduino Serial Monitor
📈 Future Enhancements
📡 Jamming detection system
🎯 Adaptive frequency hopping
🧠 AI-based interference prediction
🎮 Interactive MATLAB GUI
📊 Advanced analytics
🧠 Key Learnings
Embedded systems design
RF communication
Real-time data visualization
Hardware-software integration
Debugging complex systems
👨‍💻 Author

Sanmugavel

⭐ Show Your Support

If you like this project:

⭐ Star this repo
🍴 Fork it
📢 Share with others
📬 Connect

Let’s connect and collaborate on exciting projects!


