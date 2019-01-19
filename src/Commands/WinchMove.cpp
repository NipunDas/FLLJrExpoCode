/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "WinchMove.h"

WinchMove::WinchMove(double tempSpeed) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::m_winch);
	speed = tempSpeed;
}

// Called just before this Command runs the first time
void WinchMove::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void WinchMove::Execute() {
Robot::m_winch->move(speed);
}

// Make this return true when this Command no longer needs to run execute()
bool WinchMove::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void WinchMove::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void WinchMove::Interrupted() {

}
