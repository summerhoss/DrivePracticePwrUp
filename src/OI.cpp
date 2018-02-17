#include "OI.h"

#include <WPILib.h>

OI::OI() :
leftStick(new Joystick(0)),
rightStick(new Joystick(1)),
driveControl(new XboxController(3))
{
	// Process operator interface input here.
}

Joystick* OI::getLeftStick()
{
	return leftStick;
}

Joystick* OI::getRightStick()
{
	return rightStick;
}

XboxController* OI::getXboxController()
{
	return driveControl;
}
