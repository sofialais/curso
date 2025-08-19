// Define o pino do LED
const int ledPin = 13;

void setup() {
  // Define o pino do LED coo saida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Acende o LED
  digitalWrite(ledPin, HIGH);
  delay(1000); // Aguarda 1 segundo

  // Desliga o LED
  digitalWrite(ledPin, LOW);
  delay(1000); // Aguarda 1 segundo
}
