#include <Wire.h> //Biblioteca para uso do protocolo I2C;
#include <Adafruit_GFX.h> //Biblioteca para manipulação gráfica no display;
#include <Adafruit_SH1106.h> //Biblioteca para operação do driver de controle do display;


#include <Fonts/FreeMono9pt7b.h> //Fonte para alteração do texto;
#include <Fonts/FreeSansBoldOblique9pt7b.h> //Fonte para alteração do texto;
#include <Fonts/FreeMonoOblique9pt7b.h> //Fonte para alteração do texto;


#define OLED_RESET -1 //Em displays que não possuem pino RESET, é dado o valor -1;


Adafruit_SH1106 display(OLED_RESET); //Declaração da tela com o nome "display";


#define pinSensor1 7


void setup() {
  pinMode(pinSensor1, INPUT);
  display.begin(SH1106_SWITCHCAPVCC, 0x3C); //Inicialização do display com a biblioteca e endereço de hardware do display;
  Serial.begin(9600);
}

void loop()
{
  bool estadoSensor1 = digitalRead(pinSensor1);

  display.clearDisplay(); //Comando para limpar a tela;
  display.setFont(&FreeMonoOblique9pt7b); //Comando para definir a fonte que será utilizada;
  display.setTextColor(WHITE); //Comando para definir a cor do texto;
  display.setTextSize(1); //Comando para definir tamanho od
  
  if (estadoSensor1) {
    display.setCursor(15, 38); //Definição de onde o texto será escrito. Lembre se que: linha, coluna;
  	display.print("Obstaculo");
    Serial.println("Obstaculo");

  }
  
  else {
    display.setCursor(15, 25); //Definição de onde o texto será escrito. Lembre se que: linha, coluna;
  	display.println(" Nenhum ");
    display.setCursor(15, 50); //Definição de onde o texto será escrito. Lembre se que: linha, coluna;
  	display.println("Obstaculo");
  	Serial.println("Nada");
  }

 display.display();
}