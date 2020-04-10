int rSwitchPin = 2;
int gSwitchPin = 3;
int bSwitchPin = 4;
int r = 0;
int g = 0;
int b = 0;

void setup()
{
	pinMode(rSwitchPin, INPUT);
    pinMode(gSwitchPin, INPUT);
    pinMode(bSwitchPin, INPUT);
}

void loop()
{
	if (digitalRead(rSwitchPin) == HIGH) {
        ++r;
        if (r > 255) {
            r = 0;
        }
    }

    if (digitalRead(gSwitchPin) == HIGH) {
        ++g;
        if (g > 255) {
            g = 0;
        }
    }

    if (digitalRead(bSwitchPin) == HIGH) {
        ++b;
        if (b > 255) {
            b = 0;
        }
    }

    analogWrite(9, r);
    analogWrite(10, g);
    analogWrite(11, b);
    delay(10);
}
