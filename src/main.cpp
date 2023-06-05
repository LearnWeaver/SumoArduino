#include <Arduino.h>
#include <Sumo.h>

Sumo sumo = Sumo();


void setup() {
  // put your setup code here, to run once:
  
  sumo.forward(255);
  delay(1000);
  sumo.stop();
  delay(1000);
  sumo.reverse(255);
  delay(1000);
  sumo.coast();

  pinMode(DIP1, INPUT_PULLUP);
  pinMode(DIP2, INPUT_PULLUP);
  pinMode(DIP3, INPUT_PULLUP);

  pinMode(AC1, INPUT);
  pinMode(DC4, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("DIP1: ");
  Serial.println(digitalRead(DIP1));

  Serial.print("DIP2: ");
  Serial.println(digitalRead(DIP2));

  Serial.print("DIP3: ");
  Serial.println(digitalRead(DIP3));

  Serial.print("DC4: ");
  Serial.println(digitalRead(DC4));

  Serial.print("AC1: ");
  Serial.println(analogRead(AC1));



}
