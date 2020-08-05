#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

unsigned char logo[][16] = {
  {0,112,30,112,0,122,78,0,126,66,66,0,66,74,126,0},
  {0,126,66,66,90,66,66,74,74,66,66,90,66,66,126,0},
  {0,126,66,90,66,66,74,74,66,66,90,66,66,66,126,0},
  {0,126,66,66,66,90,66,66,74,74,66,66,90,66,126,0},
  {0,126,66,70,90,66,66,74,74,66,66,90,70,66,126,0},
  {0,42,84,42,84,42,84,42,84,42,84,42,84,42,84,0}
};

unsigned char yes[] = {128, 64, 32, 16, 8, 4, 2, 1};

void setup(){
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  } else {
    Serial.println("allocated");
  }

  display.clearDisplay();

  display.display();
}

int state = 0;

void loop() {
  ++state;
  if (state >= 6) state = 0;
  
  for (int i = 0; i < 16; ++i) {
    for (int j = 0; j < 8; ++j) {
      bool light = (logo[state][i] & yes[j]) == 0;
      if (light) {
        for (int k = 0; k < 8; ++k) {
          for (int l = 0; l < 8; ++l) {
            display.drawPixel(i * 8 + k, j * 8 + l, WHITE);
          }
        }
      }
    }
  }

  display.display();
  display.clearDisplay();
  delay(500);
}
