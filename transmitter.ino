#include <SPI.h>
#include "RF24.h" // the library which helps us to control the radio modem

const int n = 2; // kanal sayısı, drone projesi için 4 olmalı
int analogPin[n] = {A0, A1}; // eğer n = 4 ise A2 ve A3'ü de ekleyin
byte kanal[n];
RF24 radio(7, 8); // digital pins that CE and CSN are connected.
const uint64_t pipe = 0xE8E8F0F0E1LL; // the address of the modem, that will receive data from Arduino

void setup() {
  radio.begin();                      //it activates the modem.
  radio.openWritingPipe(pipe);        //sets the address of the receiver to which the program will send data.
}

void loop() {
  for (int i=0; i<n; i++)
    kanal[i] = map(analogRead(analogPin[i]), 0, 1023, 0, 255);
  radio.write(kanal, 2);
  delay(10);
}
