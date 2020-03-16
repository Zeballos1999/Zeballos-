int L = 8;
int L2 = 9;
int r = 10;
int r2 = 11;
int state = 0;

void setup() {

pinMode(L,OUTPUT);
pinMode(L2,OUTPUT);
pinMode(r,OUTPUT);
pinMode(r2,OUTPUT);
Serial.begin(9600);

}

void loop() {
  if(Serial.available() > 0){
  state = Serial.read();
  Serial.print(state);
  } 
  //adelante
  if (state == 'y') {
    digitalWrite(L2,1);
    digitalWrite(r2,1);
 }
 if (state == 'Y') {
    digitalWrite(L2,0);
    digitalWrite(r2,0);
 }
 //atras
 if (state == 'j') {
   digitalWrite(L,1);
   digitalWrite(r,1);
 }
  if (state == 'J') {
   digitalWrite(L,0);
   digitalWrite(r,0);
 }
//izquierda
 if (state == 'n') {
   digitalWrite(r2,1);
 }
  if (state == 'N') {
   digitalWrite(r2,0);
 }
//derecha
  if (state == 'm') {
  digitalWrite(L2,1);
 }
  if (state == 'M') {
  digitalWrite(L2,0);
 }
}
