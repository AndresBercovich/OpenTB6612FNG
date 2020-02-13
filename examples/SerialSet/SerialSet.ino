#include <OpenTB6612FNG.h>

OpenTB6612FNG driver;

void setup() {
  Serial.begin(9600);
  delay(1000);
  driver.begin();
}

void loop() {
  Serialin();
}


void Serialin() {
  if (Serial.available() > 0) {
    uint8_t base = Serial.parseInt();
    tone(10,2000,120);
    Serial.read();
    driver.MotorIz(base);
    Serial.println(base);
  }
}
