int potx = A0; // Pino x
int poty = A1; // Pino y
int valor_x;
int valor_y;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valor_x = analogRead(potx);
  valor_y = analogRead(poty);
  Serial.print("Posicao X: "); // Aspas duplas
  Serial.print(valor_x); // Imprime o valor lido
  Serial.print("  /  Posicao Y: "); // Aspas duplas
  Serial.println(valor_y); // Imprime o valor lido            
  delay(100);
}
