
// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"
#include <frc2/command/button/Trigger.h>
#include <subsystems/DriveSubsystem.h>
#include <frc2/command/RunCommand.h>
#include <commands/DriveCommand.h>
#include <frc/Joystick.h>
#include <frc2/command/Command.h>

RobotContainer::RobotContainer() {
  // Initialize all of your commands and subsystems here
  // Configure the button bindings
  m_driveSubsystem->SetDefaultCommand(frc2::RunCommand(  
    [this]{
        DriveCommand(m_driveSubsystem, &m_driveJoystick);
         },{m_driveSubsystem}));

     ConfigureBindings(); 
  }

 


void RobotContainer::ConfigureBindings() {
}




