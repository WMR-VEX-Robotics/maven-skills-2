#pragma once

#include "EZ-Template/api.hpp"
#include "EZ-Template/piston.hpp"
#include "api.h"
#include "pros/motor_group.hpp"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::MotorGroup intakeWhole({-2, -10, 1});

inline pros::Motor intakeBottom(-2);
inline pros::Motor intakeMid(-10);
inline pros::Motor intakeTop(1);

inline ez::Piston hopperExit('B');
inline ez::Piston hopperEnterance('C');
inline ez::Piston descore('D');
inline ez::Piston loader('E');

pros::Optical colorSensor(6);





