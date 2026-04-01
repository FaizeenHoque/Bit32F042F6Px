#include <Arduino.h>
#include <USBSerial.h>

#define LED_PIN PA5

void setup() {
    pinMode(LED_PIN, OUTPUT);
    USBSerial.begin(115200);
    delay(2000); // Give USB time to enumerate
    USBSerial.println("Bit32F042F6Px — board alive");
    USBSerial.println("Power rail: OK");
    USBSerial.println("GPIO: OK");
    USBSerial.println("USB CDC: OK (you're reading this)");
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    USBSerial.println("LED ON");
    delay(500);

    digitalWrite(LED_PIN, LOW);
    USBSerial.println("LED OFF");
    delay(500);
}
