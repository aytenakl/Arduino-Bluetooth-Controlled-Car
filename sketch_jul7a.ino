/*
 * Project: Bluetooth Controlled Robot Car
 * Author:    Eng Ayten ehan akl
 * Description:
 * Control a robot car using Bluetooth commands from a mobile phone.
 */
 // Motor Control Pins
#define speedR 5    // Right motor speed (PWM)
#define IN4 6       // Right motor direction
#define IN3 7       // Right motor direction
#define IN2 8       // Left motor direction
#define IN1 9       // Left motor direction
#define speedL 10   // Left motor speed (PWM)

char command; // Stores the Bluetooth command

// Setup function (runs once)
void setup() {
  Serial.begin(9600);

  // Configure motor pins as outputs
  for (int i = 5; i <= 10; i++) {
    pinMode(i, OUTPUT);
  }
}

// Main loop (runs continuously)
void loop() {
  // Check if data is received from the Bluetooth module
  if (Serial.available() > 0) {
    command = Serial.read();

    // Execute the corresponding movement
    switch (command) {
      case 'F':
        moveForward();
        break;

      case 'B':
        moveBackward();
        break;

      case 'R':
        turnRight();
        break;

      case 'L':
        turnLeft();
        break;

      case 'S':
        stopCar();
        break;
    }
  }
}

// Move the robot forward
void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(speedL, 150);
  analogWrite(speedR, 150);
}

// Move the robot backward
void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  analogWrite(speedL, 150);
  analogWrite(speedR, 150);
}

// Turn the robot right
void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  analogWrite(speedL, 150);
  analogWrite(speedR, 0);
}

// Turn the robot left
void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(speedL, 0);
  analogWrite(speedR, 150);
}

// Stop the robot
void stopCar() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  analogWrite(speedL, 0);
  analogWrite(speedR, 0);
}