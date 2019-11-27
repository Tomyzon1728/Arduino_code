#include<SoftwareSerial.h>
SoftwareSerial Tomtom(11,10);

int LED =9;
char Tes;

void setup() {
  // put your setup code here, to run once:
  Tomtom.begin(9600);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Tomtom.available())
  Tes = Tomtom.read();
  Serial.println(Tes);
  if(Tes=='a')
  {digitalWrite(LED,HIGH);
  Serial.print(" light on ");
  delay(2000);
  }
 // Serial.println(Tes);
  if(Tes=='b')
  {digitalWrite(LED,LOW);
  Serial.print(" light off ");
  
  delay(2000);
  }
 //Serial.println(Tes);
}
