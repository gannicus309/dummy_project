#ifndef DAYMODE_H_
#define DAYMODE_H_

#include "IVisitor.h"

namespace visitor {

class DayMode: public IVisitor {
  void Visit(Relay *) override;
  void Visit(RGB*) override;
 };

} /* namespace visitor */

#endif /* DAYMODE_H_ */
