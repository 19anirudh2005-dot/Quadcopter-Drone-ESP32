esc1.writeMicroseconds(MAX_THROTTLE);
esc2.writeMicroseconds(MAX_THROTTLE);
esc3.writeMicroseconds(MAX_THROTTLE);
esc4.writeMicroseconds(MAX_THROTTLE);
delay(2000);
esc1.writeMicroseconds(MIN_THROTTLE);
// Do same for others...
delay(2000);
