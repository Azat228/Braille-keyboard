# Braille Keyboard with Audio Feedback

![Project Banner](https://github.com/user-attachments/assets/c3eb3216-6799-4d83-b8ed-28f241744864)

An Arduino-based Braille keyboard system that converts Braille input into audible speech output, designed to assist visually impaired users.

## 📋 Table of Contents
- [Features](#-features)
- [Hardware Requirements](#-hardware-requirements)
- [Software Dependencies](#-software-dependencies)
- [Circuit Diagram](#-circuit-diagram)
- [Installation](#-installation)
- [Usage](#-usage)
- [Contributors](#-contributors)

## ✨ Features
- Dual input mode (Braille & numbers)
- Real-time audio feedback using text-to-speech
- Support for standard Braille character set
- Simple button-based input interface

## 🔧 Hardware Requirements
| Component | Quantity | Purpose |
|-----------|----------|---------|
| Arduino Uno | 1 | Main microcontroller |
| Tactile Push Buttons | 6 | Braille dot input (dots 1-6) |
| SPDT Toggle Switch | 1 | Mode selection (Braille/Text) |
| 3.5mm Audio Jack | 1 | Audio output |
| 10kΩ Resistors | 6 | Button pull-down resistors |
| Breadboard | 1 | Circuit assembly |
| Jumper Wires | As needed | Connections |
| LED | 7 | Visual Output |

## 📚 Software Dependencies
This project requires the following Arduino libraries:
- [TMRpcm](https://docs.arduino.cc/libraries/tmrpcm/) - Audio playback
- [SD](https://docs.arduino.cc/libraries/sd/) - SD card functionality
- [Talkie](https://docs.arduino.cc/libraries/talkie/) - Text-to-speech
- [Vocab_US_Large](https://github.com/ArminJo/Talkie) - Speech vocabulary
- [Vocab_Special](https://github.com/ArminJo/Talkie) - Special characters
- [Vocab_US_TI99](https://github.com/ArminJo/Talkie) - Additional vocabulary

## 🔌 Circuit Diagram
![Circuit Implementation](https://github.com/user-attachments/assets/c3eb3216-6799-4d83-b8ed-28f241744864)

## ⚙️ Installation
1. Clone this repository or download the source code
2. Install required libraries via Arduino Library Manager
3. Connect hardware components as per the circuit diagram
4. Upload `Braille_Keyboard.ino` to your Arduino Uno

## 🖥️ Usage
1. Power on the system
2. Toggle switch to select mode:
   - **Braille Mode**: Use buttons 1-6 to input Braille characters
   - **Number Mode**: Braille for numbers
3. System provides audio feedback for each input
4. Long press (configurable duration) to confirm input

## 👥 Contributors
- **Raadmir** - Software implementation & Braille logic
- **Azat** - Hardware design & circuit implementation
- Dastan ME implementation Design
- Sergali Create presentation

## 📖 Additional Resources
[Project Presentation](https://www.canva.com/design/DAGC9wCBmbM/c-X1iLkpuYKiIMLYsMUl0Q/edit)
