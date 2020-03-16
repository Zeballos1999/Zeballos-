#include <Servo.h>

int r = 13; // R
int l = 12; //L
Servo servo1; //PWM
Servo servo2;//PWM
Servo servo3; //PWM
int state = 0; // Variable lectrura serial
 
void setup() {

    servo1.attach(6);
    servo2.attach(5);
    servo3.attach(3);
    pinMode(r, OUTPUT);   //Declara pin de Salida
    digitalWrite(r, LOW); //Normalmente Apagado
    pinMode(l, OUTPUT);   //Declara pin de Salida
    digitalWrite(l, LOW); //Normalmente Apagado
    Serial.begin(9600);
}
 
void loop() {
 //si el modulo a manda dato, guardarlo en estado.
  if(Serial.available() > 0){
       state = Serial.read();
  } // esta parte del código es para solo 1 Carácter o Unidad. 
 
 //RUEDAS
 if (state == 'i') {
    digitalWrite(l, HIGH);
 }
 if (state == 'd') {
    digitalWrite(r, HIGH);
 }
 //RUEDAS

 if (state == 'm') {
    servo1.write(0);
 }
 if (state == 'n') {
    servo1.write(178);
 }
 if (state == 't') {
    servo2.write(0);
 }
 if (state == 't') {
    servo2.write(178);
 }
 //CABEZA
 if (state == 'd') {
    servo3.write(0);
 }
 if (state == 'c') {
    servo3.write(178);
 }
}
