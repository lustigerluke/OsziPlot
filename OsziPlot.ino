#include "SSD1306.h" // alias for `#include "SSD1306Wire.h"'

#define x 25    // x pin
#define y 26    // y pin
int res = 50; // resolution of the lines

const float pi = 3.1415;

// Initialize the OLED display using Wire library
SSD1306  display(0x3c, 5, 4);

void setup() {
  pinMode(x, OUTPUT);
  pinMode(y, OUTPUT);
  
  display.init();
  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
  display.setColor(WHITE);
  display.setTextAlignment(TEXT_ALIGN_CENTER);
  display.drawString(64, 15, "everything set up");
  display.display();
}


void loop() {
  int tic = millis();
  
  drawLine(118,0,  138,0,res);    // beginn down left
  drawLine(138,0,  138,40,res);
  drawLine(138,40, 200, 40,res);
  drawCircle(180,30,10,res);          // down right circle
  drawLine(200,40, 138,102,res);
  drawLine(138,102, 190,102,res);
  drawCircle(175,92,10,res);
  drawLine(190, 102, 138,154,res);
  drawLine(138,154, 180, 154,res);
  drawCircle(170,144,10,res);
  drawLine(180, 154, 128,206,res);  // to top
  drawCircle(128,216,10,res); // top circle
  drawLine(128,206, 76,154,res);
  drawCircle(86,144,10,res);
  drawLine(76,154, 118,154,res);
  drawLine(118,154, 66,102,res);
  drawCircle(81,92,10,res);
  drawLine(66,102, 118,102,res);
  drawLine(118,102, 56,40,res);
  drawCircle(76,30,10,res);
  drawLine(56,40, 118,40,res);
  drawLine(118,40, 118,0,res);

  int toc = millis();

  display.clear();
  display.drawString(64, 15, "fps: " + String(1000/(toc-tic), DEC) );
  display.display();
}




  
