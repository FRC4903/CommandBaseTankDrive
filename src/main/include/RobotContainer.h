// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc/Joystick.h>
#include <frc2/command/CommandPtr.h>
#include <frc2/command/button/CommandXboxController.h>
#include <subsystems/DriveSubsystem.h>
#include "Constants.h"
#include "commands/DriveCommand.h"

/**
 * This class is where the bulk of the robot should be declared.  Since
 * Command-based is a "declarative" paradigm, very little robot logic should
 * actually be handled in the {@link Robot} periodic methods (other than the
 * scheduler calls).  Instead, the structure of the robot (including subsystems,
 * commands, and trigger mappings) should be declared here.
 */
class RobotContainer {
 public:
  RobotContainer();
    DriveSubsystem* m_driveSubsystem;
    DriveCommand* m_driveCommand;
    frc::Joystick m_driveJoystick{0};

 private:
  // Replace with CommandPS4Controller or CommandJoystick if needed
  // frc2::CommandXboxController m_driverController{
  //     OperatorConstants::kDriverControllerPort};

  // The robot's subsystems are defined here...
  
  void ConfigureBindings();
};
