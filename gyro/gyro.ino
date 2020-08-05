#include <Servo.h>
#include <Wire.h>

const int MPU_ADDR = 0x68;

Servo servo;

void setup() {
  servo.attach(4);

  Wire.begin();
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true)
}

int getGyroY() {
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU_ADDR, 7 * 2, true);

  Wire.read(); Wire.read();
  
  return (Wire.read() << 8 | Wire.read()) / 500;
}

void loop() {
  servo.write(getGyroY() * -3 + 90);
  
  delay(100);
}
