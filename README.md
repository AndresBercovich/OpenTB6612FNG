# OpenTB6612FNG library
Arduino library for TB6612FNG Driver

## About
Very simple function for TB6612FNG motor driver.

Just connect the pins, the motors, and enjoy.


For more information of OpenTB6612FNG, and Open Lamborghino proyects visit

http://lamborghino.com


## License
Written by Andres Bercovich, CEO Lamborghino and Safter Mechatronics.

## Connections


|Pin | TB6612FNG  | Arduino |  Motor Terminal  | LI-PO Battery |
| -- | ---------- | ------- | ---------------- | ------------- |
|1   | VM         |         |                  |(+) 7.4V       |
|2   | VCC        |5.0V     |                  |               |
|3   | GND        |GND      |                  |GND            |
|4   | A01        |         | Terminal Motor A |               |
|5   | A02        |         | Terminal Motor A |               |                             |
|6   | B02        |         | Terminal Motor B |               |
|7   | B01        |         | Terminal Motor B |               |
|8   | GND        |GND      |                  |GND            |
|9   | GND        |GND      |                  |GND            |
|10  | PWMB       |D6       |                  |               |
|11  | BI2        |D9       |                  |               |
|12  | BI1        |D8       |                  |               |
|13  | Stand by   |5.0V     |                  |               |
|14  | AI1        |D4       |                  |               |
|16  | AI2        |D7       |                  |               |
|17  | PWMA       |D5       |                  |               |



| Warning |
| :-------: |
| Try to set at high pwm values for few time, because, the motor could get hot, and can be damaged**.|



## Setup
Install the library directly from within the Arduino IDE by using the Library Manager (Sketch => Include Library => Manage Libraries...).

It is also possible to import the library Zip file (check release tab) from the Arduino IDE (Sketch => Include Library => Add .ZIP Library...).

The library can also be manually installed by copying the OpenTB6612FNG library folder in your arduinosketchfolder/libraries/ folder. You may need to create the libraries subfolder if its your first library. Restart the IDE to see the library.
