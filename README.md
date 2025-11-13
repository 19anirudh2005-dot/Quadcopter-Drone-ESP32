# Quadcopter-Drone-ESP32
Project: Wireless Controlled Quadcopter Drone 

Description: Built a stable quadcopter with remote wireless control via mobile app, featuring automatic self-leveling using MPU6050 sensor and precise motor balancing through PID control.

Control System: 
- Mobile app (Dabble) sends flight commands via Bluetooth/WiFi to ESP32 
- Real-time joystick input for throttle, pitch, roll, and yaw control 
- Instant motor speed adjustments based on wireless commands

Key Components:
 - ESP32 Development Board (flight controller) 
- 4 Brushless Motors with SimonK ESCs 
- MPU6050 IMU Sensor (gyroscope + accelerometer for stabilization)

Technical Challenge Solved: 
The drone initially had uneven motor power causing imbalance during flight. 
Fixed by: 
- Debugging and correcting motor-to-code mapping
 - Fine-tuning PID parameters for balanced motor output 
- Calibrating all ESCs simultaneously for equal power distribution
 - Individual motor testing to verify speed and direction accuracy

Skills Used: Embedded C, ESP32 programming, PID control, sensor integration, wireless communication, motor control, troubleshooting
