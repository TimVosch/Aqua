
// configureer hier de Tempsensor pin, deze sluiten we hier
// aan op de analoge poort 0 van de arduino: A0
#define Tempsensor A0

void setup() {                
  Serial.begin(9600); // zet seriele poort aan op 9600 baud.
}
 
// deze loop wordt continu herhaald
void loop() {
  // print temperatuur waarde via seriele monitor
  Serial.print("TDR waarde: ");
  Serial.print(analogRead(Tempsensor));
  Serial.println("");
  delay(100); // wacht 100 ms
}
