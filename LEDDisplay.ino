#include <FastLED.h>
#define LED_PIN     10
#define NUM_LEDS    64

CRGB leds[NUM_LEDS];

unsigned int A[] = {0b00000000,0b00111100,0b01100110,0b01100110,0b01111110, 0b01100110,0b01100110,0b01100110};
unsigned int B[] = {0b01111000,0b01001000,0b01001000,0b01110000,0b01001000,0b01000100,0b01000100,0b01111100};
unsigned int C[] = {0b00000000,0b00011110,0b00100000,0b01000000,0b01000000,0b01000000,0b00100000,0b00011110};
unsigned int D[] = {0b00000000,0b00111000,0b00100100,0b00100010,0b00100010,0b00100100,0b00111000,0b00000000};
unsigned int E[] = {0b00000000,0b00111100,0b00100000,0b00111000,0b00100000,0b00100000,0b00111100,0b00000000};
unsigned int F[] = {0b00000000,0b00111100,0b00100000,0b00111000,0b00100000,0b00100000,0b00100000,0b00000000};
unsigned int G[] = {0b00000000,0b00111110,0b00100000,0b00100000,0b00101110,0b00100010,0b00111110,0b00000000};
unsigned int H[] = {0b00000000,0b00100100,0b00100100,0b00111100,0b00100100,0b00100100,0b00100100,0b00000000};
unsigned int I[] = {0b00000000,0b00111000,0b00010000,0b00010000,0b00010000,0b00010000,0b00111000,0b00000000};
unsigned int J[] = {0b00000000,0b00011100,0b00001000,0b00001000,0b00001000,0b00101000,0b00111000,0b00000000};
unsigned int K[] = {0b00000000,0b00100100,0b00101000,0b00110000,0b00101000,0b00100100,0b00100100,0b00000000};
unsigned int L[] = {0b00000000,0b00100000,0b00100000,0b00100000,0b00100000,0b00100000,0b00111100,0b00000000};
unsigned int M[] = {0b00000000,0b00000000,0b01000100,0b10101010,0b10010010,0b10000010,0b10000010,0b00000000};
unsigned int N[] = {0b00000000,0b00100010,0b00110010,0b00101010,0b00100110,0b00100010,0b00000000,0b00000000};
unsigned int O[] = {0b00000000,0b00111100,0b01000010,0b01000010,0b01000010,0b01000010,0b00111100,0b00000000};
unsigned int P[] = {0b00000000,0b00111000,0b00100100,0b00100100,0b00111000,0b00100000,0b00100000,0b00000000};
unsigned int Q[] = {0b00000000,0b00111100,0b01000010,0b01000010,0b01000010,0b01000110,0b00111110,0b00000001};
unsigned int R[] = {0b00000000,0b00111000,0b00100100,0b00100100,0b00111000,0b00100100,0b00100100,0b00000000};
unsigned int S[] = {0b00000000,0b00111100,0b00100000,0b00111100,0b00000100,0b00000100,0b00111100,0b00000000};
unsigned int T[] = {0b00000000,0b01111100,0b00010000,0b00010000,0b00010000,0b00010000,0b00010000,0b00000000};
unsigned int U[] = {0b00000000,0b01000010,0b01000010,0b01000010,0b01000010,0b00100100,0b00011000,0b00000000};
unsigned int V[] = {0b00000000,0b00100010,0b00100010,0b00100010,0b00010100,0b00010100,0b00001000,0b00000000};
unsigned int W[] = {0b00000000,0b10000010,0b10010010,0b01010100,0b01010100,0b00101000,0b00000000,0b00000000};
unsigned int X[] = {0b00000000,0b01000010,0b00100100,0b00011000,0b00011000,0b00100100,0b01000010,0b00000000};
unsigned int Y[] = {0b00000000,0b01000100,0b00101000,0b00010000,0b00010000,0b00010000,0b00010000,0b00000000};
unsigned int Z[] = {0b00000000,0b00111100,0b00000100,0b00001000,0b00010000,0b00100000,0b00111100,0b00000000};
unsigned int SPACE[] = {0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,0b00000000};

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  Serial.begin(9600);
}

int timeCount = 0;

void loop() {
  delay(20);
  if(timeCount < 20) {
    updateLeds(W);
  }
  else if(timeCount < 40) {
      updateLeds(E);
  }
  else if(timeCount < 60) {
      updateLeds(L);
  }
  else if(timeCount < 80) {
      updateLeds(C);
  }
  else if(timeCount < 100) {
      updateLeds(O);
  }
  else if(timeCount < 120) {
      updateLeds(M);
  }
  else if(timeCount < 140) {
      updateLeds(E);
  }
  else if(timeCount < 160) {
      updateLeds(SPACE);
  }
  else if(timeCount < 180) {
      updateLeds(T);
  }
  else if(timeCount < 200) {
      updateLeds(O);
  }
  else if(timeCount < 220) {
      updateLeds(SPACE);
  }
  else if(timeCount < 240) {
      updateLeds(C);
  }
  else if(timeCount < 260) {
      updateLeds(O);
  }
  else if(timeCount < 280) {
      updateLeds(M);
  }
  else if(timeCount < 300) {
      updateLeds(P);
  }
  else if(timeCount < 320) {
      updateLeds(U);
  }
  else if(timeCount < 340) {
      updateLeds(T);
  }
  else if(timeCount < 360) {
      updateLeds(E);
  }
  else if(timeCount < 380) {
      updateLeds(R);
  }
  else if(timeCount < 400) {
      updateLeds(SPACE);
  }
  else if(timeCount < 420) {
      updateLeds(E);
  }
  else if(timeCount < 440) {
      updateLeds(N);
  }
  else if(timeCount < 460) {
      updateLeds(G);
  }
  else if(timeCount < 480) {
      updateLeds(I);
  }
  else if(timeCount < 500) {
      updateLeds(N);
  }
  else if(timeCount < 520) {
      updateLeds(E);
  }
  else if(timeCount < 540) {
      updateLeds(E);
  }
  else if(timeCount < 560) {
      updateLeds(R);
  }
  else if(timeCount < 580) {
      updateLeds(I);
  }
  else if(timeCount < 600) {
      updateLeds(N);
  }
  else if(timeCount < 620) {
      updateLeds(G);
  }
  else if(timeCount < 640) {
      updateLeds(SPACE);
  }
  else if(timeCount < 660) {
      updateLeds(C);
  }
  else if(timeCount < 680) {
      updateLeds(L);
  }
  else if(timeCount < 700) {
      updateLeds(U);
  }
  else if(timeCount < 720) {
      updateLeds(B);
  }
  else if(timeCount < 740) {
      updateLeds(SPACE);
  }
  else if(timeCount < 760) {
      updateLeds(SPACE);
  }
  else {
      timeCount = 0;
  }

  timeCount += 1;
}

int ledIndex(int oldIndex) {
    int row = oldIndex / 8;
    if(row % 2 != 0) return oldIndex;
    int firstInRow = row * 8;
    return (firstInRow + 7) - (oldIndex - firstInRow);
}

void updateLeds(unsigned int newArray[]) {
  for(int i = 0; i < 8; i++) {
    for (int j = 7; j >= 0; j--) {
      int bit = newArray[i] & (1 << j);
      int index = 8*i + (7 - j);
      leds[ledIndex(index)] = bit ? CRGB::Red : CRGB::Black;
    }
  }
  FastLED.show();
}
