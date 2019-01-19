/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Winch.h"
#include "../RobotMap.h"

Winch::Winch() : Subsystem("Winch"), winch(new TalonSRX(3)) {

}

void Winch::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());

}

void Winch::move(double winchPower){

	winch ->Set(ControlMode::PercentOutput, winchPower);

}
// Put methods for controlling this subsystem
// here. Call these from Commands.
