#include "Relay.h"
#include <iostream>

namespace visitor {

void Relay::On()
{
  std::cout << "Relay$On" << std::endl;
}
void Relay::Off()
{
  std::cout << "Relay$OFF" << std::endl;
}
void Relay::Accept(IVisitor* visitor)
{
  visitor->Visit(this);
}

} /* namespace visitor */
