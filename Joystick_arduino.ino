#include <LiquidCrystal_I2C.h>
#include <Wire.h>

int potx = A0; // Pino x
int poty = A1; // Pino y
int botao = 2; // Pino do botão
int valor_x;
int valor_y;

LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
  lcd.init(); // Inicia a comunicação com o display
  lcd.backlight(); // Liga a iluminação do display
  lcd.clear(); // Limpa o display

  pinMode(botao, INPUT_PULLUP);

  Serial.begin(9600);

  lcd.setCursor(0, 0); // Move para a segunda linha
  lcd.print("Botao livre");

}

void loop() {
  valor_x = analogRead(potx);
  valor_y = analogRead(poty);

  bool botaoPressionado = digitalRead(botao) == LOW; // LOW significa que o botão está pressionado

  // Limpa o display e exibe o estado do botão
  lcd.clear();
  if (botaoPressionado) {
    lcd.print("Botao pressionado, ");
  } else {
      lcd.setCursor(0, 0); // Move para a segunda linha
        if (valor_y < 510) {
          lcd.print("Para cima");
        } else if (valor_y > 510) {
          lcd.print("Para baixo");
        } else if (valor_x < 517) {
          lcd.print("Para esquerda");
        } else if (valor_x > 517) {
          lcd.print("Para direita");
        } else {
          lcd.print("Parado");
        }
      }
  

  delay(100); // Pequeno atraso para estabilidade
}

