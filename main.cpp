#include "RGB.h"
#include "Relay.h"
#include "DayMode.h"
#include "NightMode.h"
#include <iostream>
void setMode(visitor::IVisitor* visitor, visitor::IRelay* relay) {
  relay->Accept(visitor);
}

int main() {
  visitor::IRelay* r1 =  new visitor::RGB();
  visitor::IRelay* r2 = new visitor::Relay();
  visitor::IVisitor* day_mode = new visitor::DayMode();
  visitor::IVisitor* night_mode =new visitor::NightMode();

  std::cout << "Day mode " << std::endl;
  setMode(day_mode,r1);
  setMode(day_mode,r2);
  std::cout << std::endl;
  std::cout << "Night mode " << std::endl;
  setMode(night_mode,r1);
  setMode(night_mode,r2);


	return 0;
}
