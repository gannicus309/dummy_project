#include "CompositeRelay.h"
#include <iostream>
namespace visitor {

  void CompositeRelay::On() {
    for (auto r : members_) {
      r->On();
    }
  }

  void CompositeRelay::Off() {
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

  void CompositeRelay::Print(int offset) {
    for (int i = 0 ; i < offset ; ++i) {
      std::cout << "--";
    }
    std::cout << name_ << ":" <<  std::endl;
    for (auto m : members_) {
      m->Print(offset + 1);
    }
  }

} /* namespace visitor */
