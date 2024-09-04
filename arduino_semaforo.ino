void setup()
{
  pinMode(8, OUTPUT);  // verde pedrestre
  pinMode(9, OUTPUT); // vermelho pedestre
  pinMode(10, OUTPUT);  // verde carro 
  pinMode(11, OUTPUT);  // amarelo carro
  pinMode(12,  OUTPUT);  //vermelho carro

}

void loop()
{
manha();
tarde();
noite();
}

void manha(){
    int contador=0, piscar; 
  do {
    
  digitalWrite(10, HIGH); // acende verde carro
  digitalWrite(9, HIGH); //acende vermelho pedestre
    delay(40000);
  digitalWrite(10, LOW); // apaga verde carro
  digitalWrite(11, HIGH); // acende amarelo carro
    delay(5000);
  digitalWrite(11, LOW);//apaga amarelo carro
  digitalWrite(9, LOW);//apaga vermelho pedreste
  digitalWrite(12,HIGH); // acende vermelho carro
  digitalWrite(8, HIGH); // acende verde pedestre
    delay(26000);
  digitalWrite(8, LOW); // apaga verde pedestre
         piscar=0;
      while (piscar<=4){
  digitalWrite(9, HIGH); //acende vermelho pedestre
      delay(500); //pisca vermelho pedestre
  digitalWrite(9, LOW);//apaga vermelho pedestre
      delay(500);
  piscar++;
  }
   digitalWrite(12,LOW); // apaga vermelho carro
  contador++;
  }while (contador<=5);
}

void tarde() {
  int tempo, contador=0, piscar; 
  
  do {
  digitalWrite(10, HIGH); // acende verde carro
  digitalWrite(9, HIGH); //acende vermelho pedestre
     delay(60000);
  digitalWrite(10, LOW); // apaga verde carro
  digitalWrite(11, HIGH); // acende amarelo carro
      delay(10000);
  digitalWrite(11, LOW);//apaga amarelo carro
  digitalWrite(9, LOW);//apaga vermelho pedreste
  digitalWrite(12,HIGH); // acende vermelho carro
  digitalWrite(8, HIGH); // acende verde pedestre
     delay(46000);
  digitalWrite(8, LOW); // apaga verde pedestre
       piscar=0;
         while (piscar<=4){
  digitalWrite(9, HIGH); //acende vermelho pedestre
     delay(500); //pisca vermelho pedestre
  digitalWrite(9, LOW);//apaga vermelho pedestre
     delay(500);
  piscar++;
  }
   digitalWrite(12,LOW); // apaga vermelho carro
  contador++;
  }while (contador<=5);
  }

  void noite(){
    int contador=0; 
    
  do {
  digitalWrite(11, HIGH); // acende amarelo carro
  digitalWrite(9, HIGH); //acende vermelho pedreste
      delay(500);
  digitalWrite(11, LOW); // apaga amarelo carro
  digitalWrite(9, LOW); //apaga vermelho pedreste
    delay(500);
    contador++;
    
  }while (contador<=5);
}
