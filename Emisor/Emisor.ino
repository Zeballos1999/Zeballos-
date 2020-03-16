void setup()
  {
   Serial.begin(9600);
   Serial2.begin(9600);
   Serial.println("SISTEMA FUNCIONANDO");
  }

void loop()
  {
  Serial.println("mensaje enviado");
  Serial2.print("hola");  
  delay(5000);
  }
