#define R 3
#define G 5
#define B 6

int LDR = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  Serial.begin(9600);

}

void loop() 
{
  
  int LDR = analogRead(A0);
  
  
  
  if (LDR<=150){ 
    analogWrite(R, 255);   // vermelho
    analogWrite(G, 0);
    analogWrite(B, 0);
     Serial.println(LDR);
  }
  
  else if(LDR>150 && LDR<=300){
  analogWrite(R, 0);     // verde
  analogWrite(G, 255);
  analogWrite(B, 0);
    Serial.println(LDR);
  }
  
  else if(LDR>300 && LDR<=450){
  analogWrite(R, 0);     // azul
  analogWrite(G, 0);
  analogWrite(B, 255);
  Serial.println(LDR);

  }
  
  else if (LDR>450 && LDR<=600){
  analogWrite(R, 255);   // amarelo
  analogWrite(G, 255);
  analogWrite(B, 0);
  Serial.println(LDR);
  }
  
  else if (LDR>600 && LDR<=750){
  analogWrite(R, 255);     // laranja
  analogWrite(G, 102);
  analogWrite(B, 0);
      Serial.println(LDR);
  }
  
  else if (LDR>750 && LDR<=900){
  analogWrite(R, 199);     // rosa
  analogWrite(G, 21);
  analogWrite(B, 133);
      Serial.println(LDR);
  }
  else{
     analogWrite(R, 0);     // desligado
  analogWrite(G, 0);
  analogWrite(B, 0);
    Serial.println(LDR);
    
  }
      delay(2000);
}





  

 
  
  