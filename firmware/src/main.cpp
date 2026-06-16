#include <Arduino.h>

// Function declarations
void initializeDisplay();

void initializeSystem()
{
    Serial.println("Initializing system...");
}

void setup()
{
    Serial.begin(115200);

    Serial.println("E-Ink Music Player Booting...");

    initializeSystem();
    initializeDisplay();
}

void loop()
{
    Serial.println("System Running");
    delay(1000);
}
