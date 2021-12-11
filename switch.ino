// C++ code
//

int switchPin=8;
int Ledpin=4;
int reading;

void setup()
{
  pinMode(Ledpin, OUTPUT);
}

void loop()
{
	reading = digitalRead(switchPin);
  	digitalWrite(Ledpin, reading);
}