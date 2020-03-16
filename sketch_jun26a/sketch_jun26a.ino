int rojo = 13;
int verde = 12;
int rojo2 = 8;
int verde2 = 7;
int a = 0;
int b =0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(rojo , OUTPUT);
  pinMode(rojo2 , OUTPUT);
  pinMode(verde , OUTPUT);
  pinMode(verde2 , OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead (A0);
  int sensorValue2 = analogRead (A1);
  String one = "El primer voltaje es:";
  String two = "El segundo voltaje es:";

  float voltage =sensorValue *(0.5 / 1023.0);
  float voltage2 =sensorValue2 *(0.5 / 1023.0);

  Serial.print(one);
  Serial.println(voltage);
  Serial.print(two);
  Serial.println(voltage2);
  if(voltage<voltage2){
    digitalWrite(verde ,  HIGH);
    digitalWrite(rojo ,  LOW);
    digitalWrite(verde2 ,  LOW);
    digitalWrite(rojo2 ,  HIGH);

    a +=5;
    }else if(voltage>voltage2){
    digitalWrite(verde2 ,  HIGH);
    digitalWrite(rojo2 ,  LOW);
    digitalWrite(verde ,  LOW);
    digitalWrite(rojo ,  HIGH);
    b += 5;
      
      }else {
        digitalWrite(verde, LOW);
        digitalWrite(rojo, HIGH);
        digitalWrite(verde2, LOW);
        digitalWrite(rojo2, HIGH);
        
        }
        delay(8000);

}
