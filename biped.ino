#include <Servo.h>

// definiranje pinova
#define kukDPin 9
#define koljenoDPin 8
#define glezanjDPin 7

#define kukLPin 6
#define koljenoLPin 5
#define glezanjLPin 4


const int kukDReset = 90;
const int koljenoDReset = 95;
const int glezanjDReset = 100;

const int kukLReset = 93;
const int koljenoLReset = 87;
const int glezanjLReset = 95;


// ===== stvaranje objekata zglobova =====
Servo kukD;
Servo koljenoD;
Servo glezanjD;

Servo kukL;
Servo koljenoL;
Servo glezanjL;

void setup() {

  pinMode(kukDPin, OUTPUT);
  pinMode(koljenoDPin, OUTPUT);
  pinMode(glezanjDPin, OUTPUT);
  pinMode(kukLPin, OUTPUT);
  pinMode(koljenoLPin, OUTPUT);
  pinMode(glezanjLPin, OUTPUT);

  //===== dodavanje objekata pinovima D/L =====
  kukD.attach(kukDPin);
  koljenoD.attach(koljenoDPin);
  glezanjD.attach(glezanjDPin);

  kukL.attach(kukLPin);
  koljenoL.attach(koljenoLPin);
  glezanjL.attach(glezanjLPin);
  stani();
  delay(1000);
  test();
}

void loop() {
  //hodajNaprijed();
}


void test() {
  kukL.write(kukLReset - 30);
  delay(1000);
  kukL.write(kukLReset);
  delay(1000);
  koljenoL.write(koljenoLReset - 30);
  delay(1000);
  koljenoL.write(koljenoLReset);
  delay(1000);
  glezanjL.write(glezanjLReset - 30);
  delay(1000);
  glezanjL.write(glezanjLReset);
  delay(1000);
  kukD.write(kukDReset - 30);
  delay(1000);
  kukD.write(kukDReset);
  delay(1000);
  koljenoD.write(koljenoDReset - 30);
  delay(1000);
  koljenoD.write(koljenoDReset);
  delay(1000);
  glezanjD.write(glezanjDReset - 30);
  delay(1000);
  glezanjD.write(glezanjDReset);
  delay(1000);
}

void stani () {
  // ===== resetiranje servoa =====
  kukD.write(kukDReset);
  koljenoD.write(koljenoDReset);
  glezanjD.write(glezanjDReset);

  kukL.write(kukLReset);
  koljenoL.write(koljenoLReset);
  glezanjL.write(glezanjLReset);
}

#define m_kuk 30
#define m_kolj 40
#define m_glez 10

void priprema(){
  for (int i = 0; i <= 30; i++) {
    kukD.write(kukDReset - 30 + i);
    koljenoD.write(koljenoDReset - 30 + i);
    glezanjD.write(glezanjDReset - 15 + i/2);
    kukL.write(kukLReset - 30 + i);
    koljenoL.write(koljenoLReset - 30 + i);
    glezanjL.write(glezanjLReset - 15 + i/2);
    delay(20);
  }
  
  
}

void hodajNaprijed() {
  for (int i = -40; i <= 30; ++i) {
    kukD.write(kukDReset - i);
    koljenoD.write(koljenoDReset - i);
    glezanjD.write(glezanjDReset - i/5);
    kukL.write(kukLReset - i);
    koljenoL.write(koljenoLReset - i);
    glezanjL.write(glezanjLReset - i/5);
    delay(20);
  }
  for (int i = 0; i <= 60; i++) {
    kukD.write(kukDReset - 30 + i);
    koljenoD.write(koljenoDReset - 30 + i);
    glezanjD.write(glezanjDReset - 6 + i/5);
    kukL.write(kukLReset - 30 + i);
    koljenoL.write(koljenoLReset - 30 + i);
    glezanjL.write(glezanjLReset - 6 + i/5);
    delay(20);
  }
  delay(50);
}

  
  
  /*kukD.write(kukDReset - 30);
  koljenoD.write(koljenoDReset - 40);
  glezanjD.write(glezanjDReset - 10);
  kukL.write(kukLReset - 30);
  koljenoL.write(koljenoLReset - 40);
  glezanjL.write(glezanjLReset - 10);
  delay(750);
  kukL.write(kukLReset + 30);
  koljenoL.write(koljenoLReset + 40);
  glezanjL.write(glezanjLReset + 10);
  kukD.write(kukDReset + 30);
  koljenoD.write(koljenoDReset + 40);
  glezanjD.write(glezanjDReset + 10);
  delay(750);*/
