#ifndef NIGHTMODE_H_
#define NIGHTMODE_H_

#include "IVisitor.h"

namespace visitor {

class NightMode: public IVisitor {

  void Visit(Relay *) override;
  void Visit(RGB*) override;

};

} /* namespace visitor */

#endif /* NIGHTMODE_H_ */
