#include <Arduino.h>

void initializeSystem()
{
    Serial.println("Initializing system...");
}

void setup()
{
    Serial.begin(115200);

    Serial.println("E-Ink Music Player Booting...");

    initializeSystem();
}

void loop()
{
    Serial.println("System Running");
    delay(1000);
}
