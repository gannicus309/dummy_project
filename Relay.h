#ifndef RELAY_H_
#define RELAY_H_

#include "IVisitor.h"
#include "IRelay.h"
namespace visitor {

class Relay: public IRelay {
public:
  Relay()  {}
  void On() override;
  void Off() override;
  void Accept(IVisitor*) override;
};

} /* namespace visitor */

#endif /* RELAY_H_ */
