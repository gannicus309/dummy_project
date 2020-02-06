#include "CompositeRelay.h"
#include <iostream>
namespace visitor {

  void CompositeRelay::On() {
//    std::cout << "CompositeRelay::On " << name_ << std::endl;
    for (auto r : members_) {
      r->On();
    }
  }

  void CompositeRelay::Off() {
//    std::cout << "CompositeRelay::Off " << name_ << std::endl;
    for (auto r : members_) {
      r->Off();
    }
  }

  void CompositeRelay::SaveState(StateSaver* visitor) {
    visitor->Save(this);
  }

  void CompositeRelay::RestoreState(StateSaver* visitor) {
    visitor->Restore(this);
  }

  void CompositeRelay::Print() {
    std::cout << "-------------------------"<< name_  << "-- start" << std::endl;
    for (auto m : members_) {
      m->Print();
    }
    std::cout << "-------------------------" << name_ << "-- end" << std::endl;
  }

} /* namespace visitor */
