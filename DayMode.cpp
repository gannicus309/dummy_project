#include "DayMode.h"
#include "Relay.h"
#include "RGB.h"
namespace visitor {
  void DayMode::Visit(Relay *relay)
  {
    relay->Off();
  }
  void DayMode::Visit(RGB* rgb)
  {
    rgb->SetColor(255);
    rgb->SetBrightness(100);
  }
} /* namespace visitor */
