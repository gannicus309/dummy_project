#pragma once

#include <string>
#include "IVisitor.h"
#include "IRelay.h"
namespace visitor {

class Relay : public IRelay {
 public:
  Relay(std::string name) : state_(false), name_(name) {}
  void On() override;
  void Off() override;
  void SaveState(StateSaver*) override;
  void RestoreState(StateSaver*);
  bool state_;

  std::string name_;

  // IRelay interface
 public:
  void Print(int offset);
};

} /* namespace visitor */

