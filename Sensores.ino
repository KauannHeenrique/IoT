#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int inches = 0;
int buzzer = 8; 
int led = 4;
int buttonState = 0;
int alarmActive = true; 
int lastBtnState = 0;
int SensorTempPino = A0;

int cm = 0;
bool buzzerActive = false;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
    pinMode(triggerPin, OUTPUT);  
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);
    pinMode(echoPin, INPUT);
    return pulseIn(echoPin, HIGH);
}

void setup()
{
    Serial.begin(9600);
    
    lcd.init();
    lcd.clear();         
    lcd.backlight();
    
    pinMode(buzzer, OUTPUT);
    pinMode(12, INPUT);
    pinMode(led, OUTPUT);

    lcd.setBacklight(HIGH);
    
    // define a quantidade de colunas e linhas do LCD
    lcd.begin(16, 2);
    delay(100);
    // imprime a mensagem no LCD
    lcd.setCursor(2, 0);   // 
    lcd.print("Temperatura:");
    // muda o cursor para a primeira coluna e segunda linha do LCD
    lcd.setCursor(0, 1);
    lcd.print("          C");
}

void loop()
{
    int SensorTempTensao = analogRead(SensorTempPino);
  
    // Converte a tensão lida
    float Tensao = SensorTempTensao * 5;
    Tensao /= 1024;

    // Converte a tensão lida em Graus Celsius
    float TemperaturaC = (Tensao - 0.5) * 100;

    buttonState = digitalRead(12);
    
    if (buttonState == 1 && lastBtnState == LOW) {
        alarmActive = !alarmActive; 
        buzzerActive = false;
        noTone(buzzer);
        lcd.setCursor(4, 1);
        lcd.print("     ");  // limpa a linha de temperatura
    }
    
    lastBtnState = buttonState; 

    cm = 0.01723 * readUltrasonicDistance(5, 7);
    inches = (cm / 2.54);
    
      if (cm < 20 && alarmActive) {
      digitalWrite(led, 1);
      tone(buzzer, 1200);
      buzzerActive = true;
      lcd.setCursor(4, 1);
      lcd.print(TemperaturaC);  // exibe a temperatura
      } 
  
      else {
        digitalWrite(led, 0);    
        noTone(buzzer);
        buzzerActive = false;
        lcd.setCursor(4, 1);
        lcd.print("     ");  // limpa a linha de temperatura
    	}
}