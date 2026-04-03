#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(9, 10);

// Use proper 5-byte address
const byte address[6] = "00001";

// Channels for FHSS
int channels[] = {10, 40, 70, 100};
int i = 0;

int data = 0;
int packetID = 0;

int led = 3;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);

  if (!radio.begin()) {
    Serial.println("ERROR: NRF24L01 not detected!");
    while (1);
  }

  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_LOW);
  radio.setDataRate(RF24_1MBPS);

  radio.startListening();
}

void loop() {

  // Stop listening before changing channel
  radio.stopListening();

  radio.setChannel(channels[i]);

  // Restart listening after channel change
  radio.startListening();

  delay(5);  // Small delay for stability

  if (radio.available()) {
    radio.read(&data, sizeof(data));

    digitalWrite(led, HIGH);

    Serial.print("RX,");
    Serial.print(packetID);
    Serial.print(",");
    Serial.print(data);
    Serial.print(",");
    Serial.print(channels[i]);
    Serial.print(",");
    Serial.println(1);

    packetID++;

    delay(50);  // LED visible blink
    digitalWrite(led, LOW);
  }

  // Move to next channel
  i = (i + 1) % 4;

  delay(100);  // Channel hopping delay
}
