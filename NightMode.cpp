#include "NightMode.h"
#include "Relay.h"
#include "RGB.h"

namespace visitor {

  void NightMode::Visit(Relay *relay) {
    relay->On();
  }

  void NightMode::Visit(RGB *rgb) {
    rgb->On();
    rgb->SetBrightness(10);
    rgb->SetColor(0);
  }

} /* namespace visitor */
