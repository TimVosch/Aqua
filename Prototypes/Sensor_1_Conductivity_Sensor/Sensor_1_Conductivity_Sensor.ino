#define SensorPin A0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  analogRead(SensorPin);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  digitalWrite(2, HIGH);
  delay(100);
  Serial.println(analogRead(SensorPin));
  digitalWrite(2, LOW);
  delay(1000);
}
