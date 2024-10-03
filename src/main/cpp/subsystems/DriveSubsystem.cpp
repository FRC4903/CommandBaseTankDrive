// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/DriveSubsystem.h"
#include <ctre/Phoenix.h>
#include "ctre/phoenix/motorcontrol/can/TalonFX.h"
#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>


 
phoenix::motorcontrol::can::TalonFX left{1};
// phoenix::motorcontrol::can::TalonFX leftBack{2};
phoenix::motorcontrol::can::TalonFX right{3};
// phoenix::motorcontrol::can::TalonFX rightBack{4};

DriveSubsystem::DriveSubsystem() {
    left.ConfigFactoryDefault();
    right.ConfigFactoryDefault();


    left.SetInverted(true);
    right.SetInverted(false);

}


// This method will be called once per scheduler run
void DriveSubsystem::Periodic() {}

 void DriveSubsystem::set(double leftSpeed, double rightSpeed){
left.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, leftSpeed);
right.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, rightSpeed);

frc::SmartDashboard::PutNumber("leftSpeed", leftSpeed);
frc::SmartDashboard::PutNumber("rightSpeed", rightSpeed);

} 

void DriveSubsystem::stop(){
    left.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput,0);
    right.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput,0);
    
}


