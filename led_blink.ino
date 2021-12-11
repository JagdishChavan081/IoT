// C++ code
//

int LEDpin=11;
void setup()
{
  pinMode(LEDpin, OUTPUT);
}

void loop()
{
  digitalWrite(LEDpin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LEDpin, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}