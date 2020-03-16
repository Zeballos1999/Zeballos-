int uno = 13; // usamos un pin de salida al LED
int dos = 12;
int tres = 11;
int cuatro = 10;
int state = 0; // Variable lectrura serial
 
void setup() {
    pinMode(uno, OUTPUT);   //Declara pin de Salida
    digitalWrite(uno, LOW); //Normalmente Apagado
      pinMode(dos, OUTPUT);   //Declara pin de Salida
    digitalWrite(dos, LOW); //Normalmente Apagado
      pinMode(tres, OUTPUT);   //Declara pin de Salida
    digitalWrite(tres, LOW); //Normalmente Apagado
      pinMode(cuatro, OUTPUT);   //Declara pin de Salida
    digitalWrite(cuatro, LOW); //Normalmente Apagado
    Serial.begin(9600);
}
 
void loop() {
 //si el modulo a manda dato, guardarlo en estado.
  if(Serial.available() > 0){
       state = Serial.read();
  } // esta parte del código es para solo 1 Carácter o Unidad. 
 
 // si el estado es 0 ese sería Apagado “OFF”
 if (state == 'p') {
    digitalWrite(uno, LOW);
    Serial.println("LED: off");
 }
 
 // de lo contrario si el estado es 1 ese sería Encendido “ON”
 else
 if (state == 'o') {
     digitalWrite(uno, HIGH);
     Serial.println("LED: on");
 }
 if (state == 'n') {
    digitalWrite(dos, LOW);
    Serial.println("LED: off");
 }
 
 // de lo contrario si el estado es 1 ese sería Encendido “ON”
 else
 if (state == 'm') {
     digitalWrite(dos, HIGH);
     Serial.println("LED: on");
 }
 if (state == 'l') {
    digitalWrite(tres, LOW);
    Serial.println("LED: off");
 }
 
 // de lo contrario si el estado es 1 ese sería Encendido “ON”
 else
 if (state == 'k') {
     digitalWrite(tres, HIGH);
     Serial.println("LED: on");
 }
 if (state == 'j') {
    digitalWrite(cuatro, LOW);
    Serial.println("LED: off");
 }
 
 // de lo contrario si el estado es 1 ese sería Encendido “ON”
 else
 if (state == 'i') {
     digitalWrite(cuatro, HIGH);
     Serial.println("LED: on");
 }
}
