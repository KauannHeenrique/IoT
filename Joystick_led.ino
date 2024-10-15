#include <LiquidCrystal_I2C.h>
#include <Wire.h>

int potx = A0; // Pino x
int poty = A1; // Pino y
int botao = 2; // Pino do botão
int valor_x;
int valor_y;
int led_v = 3;
int led_a = 5;

LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
  lcd.init(); // Inicia a comunicação com o display
  lcd.backlight(); // Liga a iluminação do display
  lcd.clear(); // Limpa o display

  pinMode(botao, INPUT_PULLUP);
  pinMode(led_v, OUTPUT);
  pinMode(led_a, OUTPUT);

  Serial.begin(9600);

  lcd.setCursor(0, 0); // Move para a segunda linha
  lcd.print("Botao livre");

}

void loop() {
  valor_x = analogRead(potx);
  valor_y = analogRead(poty);

digitalWrite(led_a, 1);
digitalWrite(led_v, 1);


  bool botaoPressionado = digitalRead(botao) == LOW; // LOW significa que o botão está pressionado
  int ledXIntensity = map(valor_x, 0, 1023, 0, 255);
  int ledYIntensity = map(valor_y, 0, 1023, 0, 255);
 
  int buttonState = digitalRead(botao);
  
  
  if (buttonState == HIGH) {
    analogWrite(led_v, ledXIntensity);  
    analogWrite(led_a, ledYIntensity);  
  } else {
    
    analogWrite(led_v, 0);
    analogWrite(led_a, 0);
  }
  // Limpa o display e exibe o estado do botão
  lcd.clear();
  if (botaoPressionado) {
    lcd.print("Botao pressionado, ");
    delay(300);
  } else {
      lcd.setCursor(0, 0); // Move para a segunda linha
        if (valor_y < 500) {
          lcd.print("Para cima");
        } else if (valor_y > 520) {
          lcd.print("Para baixo");
        } else if (valor_x < 500) {
          lcd.print("Para esquerda");
        } else if (valor_x > 520) {
          lcd.print("Para direita");
        } else {
          lcd.print("Parado");
        }
      }
  

  delay(100); // Pequeno atraso para estabilidade
}

