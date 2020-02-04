#include "device.h"
#include <iostream>

Device::Device() {}

void Device::On() {
  std::cout << "Device::On" << std::endl;
}

void Device::Off() {
  std::cout << "Device::Off" << std::endl;
}

IDevice& DeviceSingleton() {
  return singleton::single<Device, IDevice>();
}
