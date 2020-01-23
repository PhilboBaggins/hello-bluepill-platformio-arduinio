void runTests(); // in tests.cpp

#ifdef ARDUINO

#include <Arduino.h>
void setup()
{
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);

    runTests();

    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(50);
    digitalWrite(LED_BUILTIN, LOW);
    delay(50);
}

#else

int main(int argc, char** argv)
{
    runTests();
    return 0;
}

#endif
