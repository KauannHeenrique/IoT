// C++ code
//

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int digitalInput;
  
  for (digitalInput=0; digitalInput<255; digitalInput++){
    Serial.print("digitalInput: ");
    Serial.println(digitalInput);
    analogWrite(9, digitalInput);  // multimetro 9
    analogWrite(6, digitalInput);  // led 6
    analogWrite(3, digitalInput);  // osciloscopio 3
}
  for (digitalInput =255; digitalInput>=0; digitalInput--){
    Serial.print("digitalInput: ");
    Serial.println(digitalInput);
    analogWrite(9, digitalInput);  // multimetro 9
    analogWrite(6, digitalInput);  // led 6
    analogWrite(3, digitalInput);  // osciloscopio 3
  }
  
}
