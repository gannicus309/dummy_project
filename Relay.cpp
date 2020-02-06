#include "Relay.h"
#include <iostream>

namespace visitor {

void Relay::On() {
  state_ = true;
}
void Relay::Off() {
  state_ = false;
}
void Relay::SaveState(StateSaver* visitor) {
  visitor->Save(this);
}

void Relay::RestoreState(StateSaver* visitor) {
  visitor->Restore(this);
}

void Relay::Print(int offset) {
  for (int i = 0; i < offset; ++i) {
    std::cout << "--";
  }
  std::cout << name_ << " : " << std::boolalpha << state_ << std::endl;
}

} /* namespace visitor */
