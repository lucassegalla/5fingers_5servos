#include <Servo.h>

Servo servo1;

int pinoPotenciometro = A0;
int valorPotenciometro;
int angulo;

void setup() {
  servo1.attach(9);
}

void loop() {
  valorPotenciometro = analogRead(pinoPotenciometro);

  angulo = map(valorPotenciometro, 0, 1023, 20, 160);

  servo1.write(angulo);

  delay(15);
}