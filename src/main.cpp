#include <Arduino.h>
#include <Sumo.h>

Sumo sumo = Sumo();


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Ready");
  delay(4000);
  sumo.forward(255);
  Serial.println("Forward");
  delay(2000);
  sumo.stop();
  Serial.println("Stop");
  delay(2000);
  sumo.reverse(255);
  Serial.println("Reverse");
  delay(1000);
  sumo.coast();
  Serial.println("Coast");

  pinMode(DIP1, INPUT_PULLUP);
  pinMode(DIP2, INPUT_PULLUP);
  pinMode(DIP3, INPUT_PULLUP);

  pinMode(AC1, INPUT);
  pinMode(AC2, INPUT);
  pinMode(AC3, INPUT);
  pinMode(AC5, INPUT);

  pinMode(DC4, INPUT);

  pinMode(DCB1, INPUT);
  pinMode(DCB2, INPUT);

  pinMode(MOTOR_1A, OUTPUT);
  pinMode(MOTOR_1B, OUTPUT);

  
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

  Serial.print("AC2: ");
  Serial.println(analogRead(AC2));

  Serial.print("AC3: ");
  Serial.println(analogRead(AC3));

  Serial.print("AC5: ");
  Serial.println(analogRead(AC5));

  Serial.print("DCB1: ");
  Serial.println(digitalRead(DCB1));

  Serial.print("DCB2: ");
  Serial.println(digitalRead(DCB2));
  

  delay(250);

}
