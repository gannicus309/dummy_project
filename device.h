#ifndef DEVICE_H
#define DEVICE_H
#include "idevice.h"
#include "single.h"

class Device : public IDevice {
 private:
  Device();

  // IDevice interface
 public:
  void On();
  void Off();
  friend IDevice& singleton::single<Device, IDevice>();
};

IDevice& DeviceSingleton();

#endif  // DEVICE_H
