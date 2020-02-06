#ifndef STATESAVEIMPL_H
#define STATESAVEIMPL_H
#include "IVisitor.h"
#include <vector>
namespace visitor {
class StateSaveImpl : public StateSaver {
public:
  StateSaveImpl();

private:
  bool state_;
  std::vector<StateSaver*> composite_;

  // StateSaver interface
public:
  void Restore(Relay*);
  void Restore(CompositeRelay*);
  void Save(Relay*);
  void Save(CompositeRelay*);
};
}

#endif // STATESAVEIMPL_H
