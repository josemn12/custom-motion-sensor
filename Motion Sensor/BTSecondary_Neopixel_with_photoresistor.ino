#include <Adafruit_NeoPixel.h>



#define LED_COUNT 50  
#define NUMPIXELS 50
#define LED_PIN    9
#define PIN 9
#define DELAYVAL 0 
#define DELAYVAL2 0 
int state = 0;
unsigned long startTime; 

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
  strip.setBrightness(100);
  Serial.begin(38400);
  pixels.begin();
}


void loop() {
if (Serial.available() > 0) {
  state = Serial.read();
Serial.print("state: ");
Serial.write(state);
}

/*if (state == '1') {
  //rainbow();
  notRdy();
  int time = hour();
  Serial.println();
  state = 0;
}
else if (state == '0') {
  rdy();
  state = 0;
}*/

switch (state) {
      case '0':
        rdy();
        //state = 0;
        break;
      case '1':
       notRdy();
       //state = 0;
        break;
        case '2':
        ledOff();
        break;
      default:
        // statements
        break;
    }

}//end main loop

void rdy(){

 for(int i=0; i<NUMPIXELS; i++) {
    // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 0, 255));
    pixels.show();   // Send the updated pixel colors to the hardware.

    delay(DELAYVAL); // Pause before next pass through loop
  }
}

//int wait) {
  /*pixels.clear();
  for(long firstPixelHue = 0; firstPixelHue < 1*65536; firstPixelHue += 256) {
    for(int i=0; i<strip.numPixels(); i++) { 
      int pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());
      strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue)));
    }
    strip.show();
    //delay(wait);
  }*/


void notRdy() {
  //pixels.clear();
  for(int i=0; i<NUMPIXELS; i++) {
    // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    pixels.show();   // Send the updated pixel colors to the hardware.

    delay(DELAYVAL); // Pause before next pass through loop
  }
  }


 void ledOff() {
 //pixels.clear();
 for(int i=0; i<NUMPIXELS; i++) {
   // For each pixel...
   // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
   // Here we're using a moderately bright green color:
   pixels.setPixelColor(i, pixels.Color(0, 0, 0));
   pixels.show();   // Send the updated pixel colors to the hardware.


   delay(DELAYVAL2); // Pause before next pass through loop
 }
 }
 

  
 




