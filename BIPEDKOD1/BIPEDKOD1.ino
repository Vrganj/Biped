#include <Servo.h>
#define kukDPin 4
#define koljenoDPin 5
#define glezanjDPin 6

  Servo kukD;
  Servo koljenoD;
  Servo glezanjD;
  
void setup() {
  // put your setup code here, to run once:

  kukD.attach(kukDPin);
  koljenoD.attach(koljenoDPin);
  glezanjD.attach(glezanjDPin);
  kukD.write(90);
  koljenoD.write(90);
  glezanjD.write(90);
  delay(1000);

}

void loop() {
  kukD.write(130);
  koljenoD.write(50);
  glezanjD.write(70);
  delay(1000);
  kukD.write(90);
  koljenoD.write(90);
  glezanjD.write(90);
  delay(1000);
}
