#include <SoftwareSerial.h>
SoftwareSerial SerialATtiny(3,4); // RX e TX

void setup() {
SerialATtiny.begin(9600);
pinMode(0, OUTPUT);
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
}
void loop() {
char c = SerialATtiny.read();

if (c == 'o') digitalWrite(0, HIGH);
if (c == 'p') digitalWrite(0, LOW);

if (c == 'm') digitalWrite(1, HIGH);
if (c == 'n') digitalWrite(1, LOW);

if (c == 'k') digitalWrite(2, HIGH);
if (c == 'l') digitalWrite(2, LOW);
}
