
const int relayPin = 7;  

void setup() {
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // Turn the relay ON
  digitalWrite(relayPin, HIGH);  // Relay ON 
  delay(2000);                   

  // Turn the relay OFF
  digitalWrite(relayPin, LOW);   // Relay OFF
  delay(2000);                  
}
