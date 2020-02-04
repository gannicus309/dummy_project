#ifndef DEVICE_MOCK_H
#define DEVICE_MOCK_H
#include "idevice.h"
#include "device.h"
#include "gmock/gmock.h"

namespace singleton {
class DeviceMock : public IDevice {
  // IDevice interface
 public:
  MOCK_METHOD0(On, void());
  MOCK_METHOD0(Off, void());

  static DeviceMock& instance();
};


template <>
IDevice& single<Device, IDevice>() {
  static DeviceMock t;
  return t;
}

DeviceMock& DeviceMock::instance() {
     return dynamic_cast<singleton::DeviceMock&>(DeviceSingleton());
}


}
#endif // DEVICE_MOCK_H
