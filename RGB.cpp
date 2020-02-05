#include "RGB.h"
#include <iostream>
namespace visitor {

  void RGB::On() {
    std::cout << "RGB::On" << std::endl;
  }

  void RGB::Off() {
    std::cout << "RGB::OFF" << std::endl;
  }

  void RGB::Accept(IVisitor* visitor) {
    visitor->Visit(this);
  }

  void RGB::SetBrightness(int brightness) {
    std::cout << "RGB::SetBrightness " << brightness << std::endl;
  }

  void RGB::SetColor(int color) {
    std::cout << "RGB::SetColor " << std::to_string(color)<< std::endl;
  }
} /* namespace visitor */
