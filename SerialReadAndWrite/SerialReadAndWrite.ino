void setup()
{
	Serial.begin(9600);
}

void loop()
{
	// Serial.println("Hello!!");
	if (Serial.available()) {
		char c = Serial.read();
		if (c == 'a') {
			Serial.println("A");
		}
	}
	// delay(1000);
}
