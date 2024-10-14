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

  // Definindo a direção para o eixo Y
  if (valor_y < 511) {
    Serial.println("Para cima");
  } else if (valor_y > 511) {
    Serial.println("Para baixo");
  } else {
    Serial.println("No meio");
  }

  // Definindo a direção para o eixo X
  if (valor_x < 511) {
    Serial.println("Para direita");
  } else if (valor_x > 511) {
    Serial.println("Para esquerda");
  } else {
    Serial.println("No meio");
  }

  delay(100);
}
