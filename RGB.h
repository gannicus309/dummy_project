#ifndef RGB_H_
#define RGB_H_

#include "IRelay.h"
#include "IVisitor.h"

namespace visitor {

class RGB: public IRelay {
public:
  RGB() {}
  void On() override;
  void Off() override;
  void Accept(IVisitor*) override;
  void SetBrightness(int);
  void SetColor(int);
};

} /* namespace visitor */

#endif /* RGB_H_ */
