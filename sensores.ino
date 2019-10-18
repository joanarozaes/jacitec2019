
#include <Ultrasonic.h> // Inclue a biblioteca do ultrassonico

Ultrasonic Ultra (12, 13); // As respectivas portas em que cada pino do sensor está conectado no arduíno (Trig E Echo)
long valUltra;
int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
   
    valUltra = Ultra.Ranging(CM); // converte a unidade lida no sensor para cm
    Serial.print("valUltra: ");
    Serial.print(valUltra);
    Serial.print(" cm \n"); 

    if (valUltra <= 10){  // caso a distancia seja menor ou igual a 10cm
       digitalWrite(led, HIGH); // acende o LED
       delay(100);  // tempo que o LED demora para apagar
    }  
   
    digitalWrite(led, LOW); // apaga o LED
}

