/* Quick Hardware test of Teensy / Audio 25k Potentiometer
   Prints values to Serial Monitor every 50ms.
   Should read 0-1023 as you turn the thumbwheel */
 
int a1=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pot_25k = analogRead(A1);
  Serial.println(pot_25k);
  delay(50);
}
