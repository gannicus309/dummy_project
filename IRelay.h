#pragma once
#include <memory>

namespace visitor {
class StateSaver;
class IRelay {
public:
  virtual ~IRelay() = default;
  virtual void On() = 0;
  virtual void Off() = 0;
  virtual void Print(int offset) = 0;
  virtual void SaveState(StateSaver*) = 0;
  virtual void RestoreState(StateSaver*) = 0;
};

} /* namespace visitor */

