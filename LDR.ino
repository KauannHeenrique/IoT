// C++ code
//
int LDR = 0;
int LED = 13;
void setup()
{
  pinMode(A1, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int LDR = analogRead(A1);
  	if (LDR>650){
      Serial.println("LED ligado");
    	digitalWrite(LED, 1);
    }
  
  	else {
      digitalWrite(LED, 0);
      Serial.println("LED desligado");
    }
  delay(1000); 
  
}