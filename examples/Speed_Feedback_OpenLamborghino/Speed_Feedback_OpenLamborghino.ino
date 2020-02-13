#include <OpenTB6612FNG.h>
#include <Motorghino.h>


OpenTB6612FNG driver;
Motorghino Motor_Left;

void setup() {
  Serial.begin(9600);

  delay(1000);
  Motor_Left.begin(32, 5, 2);
  driver.begin();
}

void loop() {
  // Declare variable, for example "sp" (Remember that "get_speed_ms()" function, return a float variable).
  float sp;

  // assign the speed (mm/s) to "sp" variable
  sp = Motor_Left.get_speed_mps();

  // finally, print "sp" variable through Serial Terminal
  Serial.println(sp);
  Serialin();
}


void Serialin() {
  if (Serial.available() > 0) {
    uint8_t base = Serial.parseInt();
    tone(10, 2000, 120);
    Serial.read();
    driver.MotorIz(base);
    Serial.println(base);
  }
}
