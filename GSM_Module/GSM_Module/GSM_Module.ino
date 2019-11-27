#include <SoftwareSerial.h>
SoftwareSerial Tomisin(11,10);
int pir = 3;
int led = 4;
void setup() {
  // put your setup code here, to run once:
  Tomisin.begin(9600);
  pinMode(pir,INPUT);
  pinMode(led,OUTPUT);
  delay(30000);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead (pir) == HIGH)
  {Tomisin.println("ATD+2348108265487;");
  digitalWrite(led,1);
  delay(1000);
  digitalWrite(led,0);
  
  delay(1000);}

}
