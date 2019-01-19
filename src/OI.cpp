/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include <WPILib.h>
#include "Commands/WinchMove.h"

OI::OI()
	:joyLeft(new Joystick(0)), joyRight(new Joystick(1)), joyArm(new Joystick(2)),
	upWinch(new JoystickButton(joyLeft,1)), downWinch(new JoystickButton(joyLeft,2))

{
	// Process operator interface input here.
	upWinch -> WhenPressed(new WinchMove(0.5));
	downWinch -> WhenPressed(new WinchMove(-0.5));

}


Joystick* OI::getjoyStickLeft(){
	return joyLeft;
}
Joystick* OI::getjoyStickRight(){
	return joyRight;
}
Joystick* OI::getjoyStickArm(){
	return joyArm;
}



