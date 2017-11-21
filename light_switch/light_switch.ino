//On off switch

int ledPin = 5;
int buttonApin = 9;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW && digitalRead(ledPin) == HIGH)
  {
    digitalWrite(ledPin, LOW);
  }
  if (digitalRead(buttonApin) == LOW && digitalRead(ledPin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }
}
