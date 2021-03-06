#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:

  static std::shared_ptr<OI> self;

//..........driver..........

  std::shared_ptr<Joystick> driver;

  JoystickButton dA;
  JoystickButton dB;
  JoystickButton dX;
  JoystickButton dY;
  JoystickButton dLB;
  JoystickButton dRB;
  JoystickButton dL3;
  JoystickButton dR3;
  JoystickButton dStart;
  JoystickButton dBack;


//..........codriver..........

  std::shared_ptr<Joystick> coDriver;

  //..........Xbox..........
  JoystickButton coA;
  JoystickButton coB;
  JoystickButton coX;
  JoystickButton coY;
  JoystickButton coLB;
  JoystickButton coRB;
  JoystickButton coL3;
  JoystickButton coR3;
  JoystickButton coStart;
  JoystickButton coBack;

public:
  static std::shared_ptr<OI> getInstance();

	OI();

//..........driver..........

  std::shared_ptr<Joystick> getDriver();

  double getDriverLeftXAxis() const;
  double getDriverLeftYAxis() const;

  double getDriverRightXAxis() const;
  double getDriverRightYAxis() const;

  double getDriverLeftTrigger() const;
  double getDriverRightTrigger() const;

  void SetRumble(double amount);


//..........codriver..........

  std::shared_ptr<Joystick> getCoDriver();

  double getCoDriverLeftXAxis() const;
  double getCoDriverLeftYAxis() const;

  double getCoDriverRightXAxis() const;
  double getCoDriverRightYAxis() const;

  double getCoDriverLeftTrigger() const;
  double getCoDriverRightTrigger() const;


//..........ids..........

  //..........Xbox..........
  static const int kButtonA_ID = 1;
  static const int kButtonB_ID = 2;
  static const int kButtonX_ID = 3;
  static const int kButtonY_ID = 4;
  static const int kButtonLB_ID = 5;
  static const int kButtonRB_ID = 6;
  static const int kButtonBack_ID = 7;
  static const int kButtonStart_ID = 8;
  static const int kButtonL3_ID = 9;
  static const int kButtonR3_ID = 10;

  static const int kLeftXAxis_ID = 0;
  static const int kLeftYAxis_ID = 1;

  static const int kRightXAxis_ID = 4;
  static const int kRightYAxis_ID = 5;

  static const int kLeftTrigger_ID = 2;
  static const int kRightTrigger_ID = 3;

};

#endif
