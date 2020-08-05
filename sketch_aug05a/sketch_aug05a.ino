#include <Servo.h>

Servo banana;

void setup() {
  banana.attach(4);
  banana.write(0);
  delay(500);
}

void loop() {
  
  for(int i = 0; i <= 180; i++){
    banana.write(i);
    delay(20);
  }
  delay(500);
  for(int i = 180; i >= 0; i--){
    banana.write(i);
    delay(20);
  }
  delay(500);
}
