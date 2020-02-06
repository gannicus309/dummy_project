#pragma once
#include "IVisitor.h"
#include <vector>
namespace visitor {
class StateSaveImpl : public StateSaver {
 public:
  StateSaveImpl();

 private:
  bool state_;
  std::vector<StateSaver*> composite_;

 public:
  void Restore(Relay*);
  void Restore(CompositeRelay*);
  void Save(Relay*);
  void Save(CompositeRelay*);
};
}

