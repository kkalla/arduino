int switchPin = 8;
int LEDPin = 13;

void setup()
{
	pinMode(switchPin, INPUT);
    pinMode(LEDPin, OUTPUT);
}

void loop()
{
	int value = digitalRead(switchPin);

    if (value == HIGH){
        digitalWrite(LEDPin, HIGH);
    } else {
        digitalWrite(LEDPin, LOW);
    }

}
