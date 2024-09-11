// C++ code
//
#define R 3
#define G 6
#define B 5
int buzzer = 8; 
int count;
int frequence; 


void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  frequence = 1000; 
  for (count=1;count<=5;count++){
    colors();
   	som();
	}
  count = 0;
  colors();
  
  delay(2000);
}

void som(){
  tone(buzzer, frequence, 1000);
  delay(500);
  noTone(buzzer);
  delay(500); // Wait for 1000 millisecond(s)
  frequence = frequence + 500; 
}

void colors(){
  if (count==1){
    analogWrite(R, 0);
    analogWrite(G, 255); // verde
    analogWrite(B, 0);
  }
  
  else if (count==2){
    analogWrite(R, 255); // vermelho
    analogWrite(G, 0);
    analogWrite(B, 0);
  }
  
  else if (count==3){
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255); // azul
  }
  
  else if (count==4){
  	analogWrite(R, 255);     // laranja
  	analogWrite(G, 102);
  	analogWrite(B, 0);
  }
  
  else if (count==5){
    analogWrite(R, 199);     // rosa
  	analogWrite(G, 21);
  	analogWrite(B, 133);
  }
  
  else if (count==0){
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
  }
    

}