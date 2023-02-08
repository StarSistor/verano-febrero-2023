
void setup() {

 pinMode(13, OUTPUT);  
}

void loop() {
  
  digitalWrite(13, HIGH); // enciende el LED.
  delay(500); // retardo en milisegundos
  digitalWrite(13, LOW); // apaga el LED.
  delay(500); 
}
