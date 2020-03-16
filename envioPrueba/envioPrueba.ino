#include <SoftwareSerial.h>
SoftwareSerial HC12(10, 11); // HC-12 TX Pin, HC-12 RX Pin
const int pcA1 = 22;
const int pcA2 = 23;
 int valueA1 = 0;
  int valueA2 = 0;

void setup() {
  Serial.begin(9600);             // Serial port to computer
  HC12.begin(9600);
  Serial.println("SISTEMA FUNCIONANDO");// Serial port to HC12
  pinMode(pcA1,INPUT);
  pinMode(pcA2,INPUT);
  
}
void loop() {  
  
     valueA1 = digitalRead(pcA1);
     valueA2 = digitalRead(pcA2);
  
   switch (valueA1 == 1) {
   case LOW:
      Serial.println("mensaje enviado");
      Serial2.print("1");
      delay(5000);   
    break;
  default:
    break;
    }
    switch (valueA2 == 1) {
   case LOW:
      Serial.println("mensaje enviado");
      Serial2.print("2");
      delay(5000);   
    break;
  default:
    break;
    } 
}
