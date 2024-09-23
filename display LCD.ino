#include<LiquidCrystal.h>
int SensorTempPino = A0;



LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
 lcd.begin(16, 2); 
  lcd.setCursor(2,0);          
  lcd.print("Temperatura:");
  lcd.setCursor(0, 1);
  lcd.print("          C");
}

void loop()
{
  int SensorTempTensao = analogRead(SensorTempPino);
  float Tensao = SensorTempTensao * 5;
  Tensao /= 1024;
  float TemperaturaC = (Tensao - 0.5) * 100;
  lcd.setCursor(4, 1);
  lcd.print(TemperaturaC);
  }