#include "Relay.h"
#include <iostream>

namespace visitor {

void Relay::On()
{
//  std::cout << "Relay$On " << index_ << std::endl;
  state_ = true;
}
void Relay::Off()
{
//  std::cout << "Relay$Off" << index_ << std::endl;
  state_ = false;
}
void Relay::SaveState(StateSaver* visitor)
{
  visitor->Save(this);
}

void Relay::RestoreState(StateSaver*visitor) {
  visitor->Restore(this);
}

void Relay::Print() {
  std::cout << "Relay " << index_ << " state " << std::boolalpha << state_ << std::endl;
}

} /* namespace visitor */
