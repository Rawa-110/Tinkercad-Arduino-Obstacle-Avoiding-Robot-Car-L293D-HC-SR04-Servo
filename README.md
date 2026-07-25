# Tinkercad-Arduino-Obstacle-Avoiding-Robot-Car-L293D-HC-SR04-Servo

Arduino-Based Autonomous Robot Using L293D Motor Driver, DC Motors, Servo Motor, and HC-SR04 Ultrasonic Sensor

Part 1: Controlling Four DC Motors Using L293D
Objective

The objective of this part is to control four DC motors using an Arduino Uno and two L293D motor driver ICs. The motors execute a predefined movement sequence.

Components
Arduino Uno
2 × L293D Motor Driver IC
4 × DC Motors
Operation

The motors perform the following sequence:

Move forward for 30 seconds.
Move backward for 60 seconds.
Turn right and left alternately for 60 seconds.




Expected Result

The four motors complete the required movement sequence automatically according to the programmed timing.


<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/2b8a5c51-edeb-438d-a59a-edd2ee3f4378" />






Part 2: Obstacle Detection Using HC-SR04 and Servo Motor

Objective

The objective of this part is to detect obstacles using the HC-SR04 ultrasonic sensor. When an obstacle is detected at a distance of 10 cm or less, the robot stops, and the servo motor rotates to change the robot's direction and avoid the obstacle.

Components
Arduino Uno
HC-SR04 Ultrasonic Sensor
Servo Motor (SG90)
Jumper Wires


Operation

The ultrasonic sensor continuously measures the distance in front of the robot.

If the measured distance is greater than 10 cm, the robot continues moving.
If the distance is 10 cm or less:
The DC motors stop immediately.
The servo motor rotates to scan or change the direction.
The robot changes its direction to avoid the obstacle.
The robot continues moving after avoiding the obstacle.
Expected Result

The robot moves normally until an obstacle is detected. It then stops, changes its direction using the servo motor, and continues moving safely without hitting the obstacle.
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/69403988-1b75-4778-a2a4-0ed96ee44a50" />


