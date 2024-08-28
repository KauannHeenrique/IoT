  int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT);  // entrada do botão
  
  pinMode(8, OUTPUT); // vermelho carro 
  pinMode(7, OUTPUT); // amarelo carro 
  pinMode(6, OUTPUT); // verde carro
  pinMode(5, OUTPUT); // vermelho pedestre 
  pinMode(4, OUTPUT); // verde pedestre 

}

void loop() {
  
  buttonState = digitalRead(12); // faz a leitura do pino 
  
  if (buttonState == 1)
  {
    
  digitalWrite(8, 1);
  digitalWrite(3, 1);
  delay(2000);
  digitalWrite(8, 0);
  digitalWrite(3, 0);
  digitalWrite(7, 1);
  digitalWrite(4, 1);
  delay(1000);
  digitalWrite(7, 0);
  digitalWrite(6, 1);
  digitalWrite(3, 0);
  delay(3000);
  digitalWrite(6, 0);
  digitalWrite(4, 0);

      
  }
  
  else {}

}