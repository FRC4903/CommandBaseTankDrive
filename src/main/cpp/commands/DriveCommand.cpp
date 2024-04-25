#include "commands/DriveCommand.h"
#include <subsystems/DriveSubsystem.h>
#include <iostream>
#include <frc2/command/Command.h>

DriveCommand::DriveCommand(DriveSubsystem* Drive) : m_drive(Drive) {
  // Use addRequirements() here to declare subsystem dependencies.
  addRequirements(Drive);
}

// Called when the command is initially scheduled.
void DriveCommand::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void DriveCommand::Execute() {}

// Called once the command ends or is interrupted.
void DriveCommand::End(bool interrupted) {}

// Returns true when the command should end.
bool DriveCommand::IsFinished() {
   return false;
}
