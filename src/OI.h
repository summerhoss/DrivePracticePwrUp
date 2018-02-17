#ifndef OI_H
#define OI_H
#include "WPILib.h"

class OI {
private:
	Joystick* leftStick;
	Joystick* rightStick;
	XboxController* driveControl;

public:
	OI();
	Joystick* getLeftStick();
	Joystick* getRightStick();
	XboxController* getXboxController();
};

#endif  // OI_H
