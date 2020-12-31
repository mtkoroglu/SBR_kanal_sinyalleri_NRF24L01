#include <SPI.h>
#include "RF24.h" // the library for controlling the radio modem (nRF24L)

const int n = 2; // kanal sayısı, drone projesi çin 4 olmalı
byte kanal[n]; 
RF24 radio(7, 8); // 8 and 10 are a digital pin numbers --> CE and CSN of NRF24L01
const uint64_t pipe = 0xE8E8F0F0E1LL; // the address of a register NRF24L01 <--> Arduino.

void setup() {
  Serial.begin(57600);
  radio.begin();                    //it activates the modem.
  radio.openReadingPipe(1, pipe);   //determines the address of our modem which receive data.
  radio.startListening();           //enable receiving data via modem
}

void loop() {
  if (radio.available()) {
    radio.read(kanal, n);
    //Serial.write('h'); Serial.write(kanal,2);
    Serial.print(kanal[0]); Serial.print(' '); Serial.println(kanal[1]);
  }
}
