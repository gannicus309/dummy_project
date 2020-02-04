#ifndef IDEVICE_H
#define IDEVICE_H

struct IDevice {
  virtual void On() = 0;
  virtual void Off() = 0;
  virtual ~IDevice() = default;
};

#endif  // IDEVICE_H
