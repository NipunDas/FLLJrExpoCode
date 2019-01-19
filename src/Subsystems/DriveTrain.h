/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
#include <WPILib.h>
#include <ctre/Phoenix.h>
class DriveTrain : public frc::Subsystem {
private:
	TalonSRX* left;
	TalonSRX* right;


public:
	DriveTrain();
	void tankDrive(double leftPower, double rightpower);


	void InitDefaultCommand() override;

};

