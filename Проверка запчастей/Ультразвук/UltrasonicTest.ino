int trigpin = 8;
int echopin = 9;

long duration, cm;

void setup() {
 Serial.begin (9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
}

void loop() {
digitalWrite(trigpin, LOW);
delay(5);
digitalWrite(trigpin, HIGH);

delay(10);
digitalWrite(trigpin, LOW);

duration = pulseIn(echopin, HIGH);
cm = (duration / 2) / 29.1;

Serial.print("Расстояние до объекта: ");
Serial.print(cm);
Serial.print(" см.");

delay(250);
}
