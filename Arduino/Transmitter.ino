#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(9,10);
const byte address[6]="00001";
int channels[]={10,40,70,100};
int i=0;
int data=100;
int packetID=0;
void setup(){
Serial.begin(9600);
if(!radio.begin()){
Serial.println("ERROR:NRF_FAIL");
while(1);
}
radio.openWritingPipe(address);
radio.setPALevel(RF24_PA_LOW);
radio.stopListening();
}
void loop(){
radio.setChannel(channels[i]);
bool ok=radio.write(&data,sizeof(data));
Serial.print("TX,");
Serial.print(packetID);
Serial.print(",");
Serial.print(data);
Serial.print(",");
Serial.print(channels[i]);
Serial.print(",");
Serial.println(ok?1:0);
packetID++;
i=(i+1)%4;
delay(500);
}
