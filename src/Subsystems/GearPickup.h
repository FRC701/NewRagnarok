#ifndef GearPickup_H
#define GearPickup_H
#include <DoubleSolenoid.h>
#include <Commands/Subsystem.h>
#include "CANTalon.h"
#include "EStop.h"

class GearPickup : public Subsystem {
private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities

  static const char kSubsystemName[];
  static std::shared_ptr<GearPickup> self;
  GearPickup();

  EStop eStop;
  CANTalon roller;
  DoubleSolenoid actuator;
  DoubleSolenoid squeezer;
  double p;
  double i;
  double d;
  double f;

public:

  enum PickupValue{kGearUp = DoubleSolenoid::kReverse,kGearDown = DoubleSolenoid::kForward};
  enum SqueezeValue{kSqueezeOpen = DoubleSolenoid::kForward,kSqueezeClosed = DoubleSolenoid::kReverse};
//TODO Check this value when robot is done
  static std::shared_ptr<GearPickup> getInstance();

  void InitDefaultCommand();
  void SetGear(PickupValue value);
  void SetSqueeze(SqueezeValue value);

  bool IsGearUp() const;
  bool IsSqueezeOpen() const;
  bool IsGearIn() const;

  void SetRollerSpeedRPM(double RPM);
  double GetGearIntakeRPM() const;

  bool IsFwdLimitSwitchClosed() const;
  bool IsRevLimitSwitchClosed() const;
};

#endif  // GearPickup_H
