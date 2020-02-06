#ifndef RELAY_H_
#define RELAY_H_

#include "IVisitor.h"
#include "IRelay.h"

namespace visitor {

class Relay: public IRelay {
public:
  Relay(int index)  :state_(false), index_(index){}
  void On() override;
  void Off() override;
  void SaveState(StateSaver*) override;
  void RestoreState(StateSaver*);
  bool state_;

  int index_;

  // IRelay interface
public:
  void Print();
};

} /* namespace visitor */

#endif /* RELAY_H_ */
