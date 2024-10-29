#include <Wire.h> //Biblioteca para uso do protocolo I2C;
#include <Adafruit_GFX.h> //Biblioteca para manipulação gráfica no display;
#include <Adafruit_SH1106.h> //Biblioteca para operação do driver de controle do display;

#include <Fonts/FreeMono9pt7b.h> //Fonte para alteração do texto;
#include <Fonts/FreeSansBoldOblique9pt7b.h> //Fonte para alteração do texto;
#include <Fonts/FreeMonoOblique9pt7b.h> //Fonte para alteração do texto;

#define OLED_RESET -1 //Em displays que não possuem pino RESET, é dado o valor -1;

Adafruit_SH1106 display(OLED_RESET); //Declaração da tela com o nome "display";

int sensor = 4; 
int som;



void setup() {
  pinMode(sensor, INPUT);
  display.begin(SH1106_SWITCHCAPVCC, 0x3C); //Inicialização do display com a biblioteca e endereço de hardware do display;
  Serial.begin (9600);

}

void loop() {  
  som = digitalRead(sensor);

  display.clearDisplay(); //Comando para limpar a tela;
  display.setFont(&FreeMonoOblique9pt7b); //Comando para definir a fonte que será utilizada;
  display.setTextColor(WHITE); //Comando para definir a cor do texto;
  display.setTextSize(1); //Comando para definir tamanho od
  display.setCursor(45, 17); //Definição de onde o texto será escrito. Lembre se que: linha, coluna;
  
    if (som == LOW){

      display.print("Som"); 
      display.setCursor(45, 35); //Definição de onde o texto será escrito. Lembre se que: linha, coluna;
      display.print("nao");
      display.setCursor(15, 54); //Definição de onde o texto será escrito. Lembre se que: linha, coluna;
      display.print("detectado");
    }

    else {
      display.print("Som"); 
      display.setCursor(15, 35); //Definição de onde o texto será escrito. Lembre se que: linha, coluna;
      display.print("detectado");
      
    }

display.display(); //Mostrar informações na tela;
delay (500);

}
