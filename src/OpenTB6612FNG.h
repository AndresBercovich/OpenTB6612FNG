/***************************************************
  Arduino library for OpenTB6612FNG Supports work with Lamborghino 2.2 and newers.
  ----> http://lamborghino.com
  Written by Andrés Bercovich: twitter: @andresbercovich
  MIT license, all text above must be included in any redistribution
****************************************************/


 # ifndef OpenTB6612FNG_h
 # define OpenTB6612FNG_h
 # include "Arduino.h"

class OpenTB6612FNG{
	public:
	OpenTB6612FNG();
	void begin();
	void MotorIz(int value);
	void MotorDe(int value);
	void Motores(int left, int righ);

	private:

};

# endif
