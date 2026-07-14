# Arduino Bluetooth Controlled Car

## Overview
This project demonstrates how to control a two-wheel robot car using Bluetooth communication and an Arduino board.

The robot receives commands from a Bluetooth module (such as HC-05 or HC-06) connected to a mobile application. Based on the received command, the Arduino controls the motors to move the car forward, backward, left, right, or stop.



## Features
- Bluetooth wireless control
- Forward and backward movement
- Left and right turning
- Stop function
- PWM motor speed control
- Beginner-friendly Arduino robotics project



## Components Required
- Arduino Uno (or compatible board)
- HC-05 / HC-06 Bluetooth Module
- L298N Motor Driver
- 2 DC Motors
- Robot Chassis
- Battery Pack
- Jumper Wires



## Pin Connections

| Component | Arduino Pin |
|----------|-------------|
| Right Motor Speed (ENA) | D5 (PWM) |
| Right Motor IN4 | D6 |
| Right Motor IN3 | D7 |
| Left Motor IN2 | D8 |
| Left Motor IN1 | D9 |
| Left Motor Speed (ENB) | D10 (PWM) |
| Bluetooth TX | Arduino RX |
| Bluetooth RX | Arduino TX *(through a voltage divider if required)* |


## Bluetooth Commands

| Command | Action |
|---------|--------|
| **F** | Move Forward |
| **B** | Move Backward |
| **L** | Turn Left |
| **R** | Turn Right |
| **S** | Stop |



## How It Works

1. The Bluetooth module receives commands from a smartphone.
2. The Arduino reads the incoming character using `Serial.read()`.
3. A `switch` statement checks the received command.
4. The corresponding motor control function is executed.
5. PWM signals control the motor speed while digital pins determine the movement direction.



## Programming Concepts
- Arduino Programming
- Bluetooth Serial Communication  
- DC Motor Control
- PWM Speed Control
- Functions
- Switch Statement
- Serial Communication



## Example Commands


F → Forward
B → Backward
L → Left
R → Right
S → Stop
```


## Output

The robot car can be controlled wirelessly from a mobile phone via Bluetooth, allowing smooth movement in all directions.


## Future Improvements
- Adjustable speed control
- Obstacle avoidance using an ultrasonic sensor
- Line-following mode
- Voice control
- Mobile app interface with joystick control


