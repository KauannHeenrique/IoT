int sensor = 2;
int led = 12;
int estado_sensor; 

void setup() {
  pinMode (sensor, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  estado_sensor = digitalRead(sensor);

  if (estado_sensor == 1){
    digitalWrite(led, 1);
  }

  else {
    digitalWrite(led, 0);
  }
  delay(100);
}