#define trigPin 5
#define echoPin 6
#define ledPin 7
#include "LedControlMS.h" 
LedControl LC=LedControl(12,11,10,2); 

/* 12 para el DIN, 11 para el CLK, 10 para el CS y el 1 <se refiere a la asignacion de la matriz*/
 
#define demora 130
byte Perro[8] =
{
  B00000100,
  B00011100,
  B00111111,
  B00111111,
  B00000111,
  B00000110,
  B00001100,
  B00011000
};

byte Perro2[8] = 
{
  B00011000,
  B00001100,
  B11111100,
  B11111100,
  B11111000,
  B00011000,
  B00110000,
  B01100000
};

byte Perro3[8] = 
{
  B00000100,
  B00011100,
  B00111111,
  B00111111,
  B00000111,
  B00000110,
  B00000011,
  B00000001
};

byte Perro4[8] = 
{
  B00000110,
  B00001100,
  B11111100,
  B11111000,
  B11111000,
  B00011000,
  B00001100,
  B00000110
};
 
void setup() {
 
Serial.begin (9600);
  LC.shutdown(0,false);
  LC.setIntensity(0,0);// La valores estan entre 1 y 15 
  LC.clearDisplay(0);

  LC.shutdown(1,false);
  LC.setIntensity(1,0);// La valores estan entre 1 y 15 
  LC.clearDisplay(1);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(ledPin,OUTPUT);
}
 
void loop() {


long duration, distance;
digitalWrite(trigPin, 0); // Added this line
delayMicroseconds(2); // Added this line
 
digitalWrite(trigPin, 1);
// delayMicroseconds(1000); - Removed this line
delayMicroseconds(10); // Added this line
digitalWrite(trigPin, 0);
 
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
if (distance >= 200 || distance <= 0){
Serial.println("Out of range");

}

else {

Serial.print(distance);
Serial.println(" cm");
 
}

if (distance <=40 && distance >= 0){
   digitalWrite(ledPin,HIGH);
  mostrar0();
  delay(demora);
  mostrar1();
  delay(demora);
  mostrar0();
  delay(demora);
  mostrar1();
  delay(demora);
  mostrar0();
  delay(demora);
  mostrar1();
  delay(demora);
  mostrar2();
  delay(demora);
  mostrar2();
  delay(demora);
  mostrar2();
  delay(demora);
}
 else{
   digitalWrite(ledPin,LOW);
 }
   
 delay(1);
}
 void mostrar0(){
  for(int i = 0; i < 8; i++){
    LC.setColumn(0,i,Perro[7-i]);
    LC.setColumn(1,i,Perro4[7-i]);
  }
 }

 void mostrar1(){
  for(int i = 0; i < 8; i++){
    LC.setColumn(0,i,Perro3[7-i]);
    LC.setColumn(1,i,Perro2[7-i]);
  }
}

void mostrar2(){
  for(int i = 0; i < 8; i++){
  }
}
