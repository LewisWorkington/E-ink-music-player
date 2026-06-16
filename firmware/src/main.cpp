#include <Arduino.h>

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    Serial.println("E-Ink Music Player");
    delay(1000);
}
