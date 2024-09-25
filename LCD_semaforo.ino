#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {
  lcd.init(); // INICIA A COMUNICAÇÃO COM O DISPLAY
  lcd.backlight(); // LIGA A ILUMINAÇÃO DO DISPLAY
  lcd.clear(); // LIMPA O DISPLAY
    
// put your setup code here, to run once:
pinMode(12, OUTPUT); // vermelho carro
pinMode(11, OUTPUT); // amarelo carro
pinMode(10, OUTPUT); // verde carro
pinMode(9, OUTPUT); // vermelho pedestre
pinMode(8, OUTPUT); // verde pedestre

}

void loop() {

digitalWrite(12, 1);
lcd.setCursor(4,0);   
lcd.print("Vermelho");
digitalWrite(8, 1);
delay(2000);
digitalWrite(8, 0);
digitalWrite(12, 0);
digitalWrite(11, 1);
lcd.clear(); // LIMPA O DISPLAY
lcd.setCursor(4,0);   
lcd.print("Amarelo");
digitalWrite(4, 0);
digitalWrite(9, 1);
delay(1000);
digitalWrite(11, 0);
digitalWrite(10, 1);
lcd.clear(); // LIMPA O DISPLAY
lcd.setCursor(4,0); 
lcd.print("Verde");
digitalWrite(8, 0);
delay(3000);
digitalWrite(10, 0);
digitalWrite(9, 0);
digitalWrite(8, 0);


}