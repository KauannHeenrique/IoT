#define R 3
#define G 5
#define B 6

void setup()
{
  Serial.begin(9600);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

}

void loop()
{
  analogWrite(R,255);    // branco
  analogWrite(G, 255);
  analogWrite(B, 255);
  Serial.println("Branco");
  delay (500);  
  analogWrite(R, 255);   // vermelho
  analogWrite(G, 0);
  analogWrite(B, 0);
  Serial.println("Vermelho");
  delay (500);
  analogWrite(R, 0);     // verde
  analogWrite(G, 255);
  analogWrite(B, 0);
  Serial.println("Verde");
  delay (500);
  analogWrite(R, 0);     // azul
  analogWrite(G, 0);
  analogWrite(B, 255);
  Serial.println("Azul");
  delay (500);
  analogWrite(R, 255);   // amarelo
  analogWrite(G, 255);
  analogWrite(B, 0);
  Serial.println("Amarelo");
  delay (500);
  analogWrite(R, 255);   // magenta
  analogWrite(G, 0);
  analogWrite(B, 255);
  Serial.println("Magenta");
  delay (500);
  analogWrite(R, 0);     // ciano
  analogWrite(G, 255);
  analogWrite(B, 255);
  Serial.println("Ciano");
  delay (500);
  analogWrite(R, 255);     // laranja
  analogWrite(G, 102);
  analogWrite(B, 0);
  Serial.println("Laranja");
  delay (500);
  analogWrite(R, 0);     // turquesa
  analogWrite(G, 220);
  analogWrite(B, 220);
  Serial.println("Turquesa");
  delay (500);
  analogWrite(R, 30);     // azul furtivo
  analogWrite(G, 144);
  analogWrite(B, 255);
  Serial.println("Azul furtivo");
  delay (500);
  analogWrite(R, 128);     // roxo
  analogWrite(G, 0);
  analogWrite(B, 128);
  Serial.println("Roxo");
  delay (500);
  analogWrite(R, 199);     // rosa
  analogWrite(G, 21);
  analogWrite(B, 133);
  Serial.println("Rosa");
  delay (500);
  analogWrite(R, 0);     // desligado
  analogWrite(G, 0);
  analogWrite(B, 0);
  Serial.println("Desligado");
  delay (500);
}
