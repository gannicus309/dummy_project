#ifndef RGB_H_
#define RGB_H_

#include <vector>
#include <string>
#include "IRelay.h"
#include "IVisitor.h"
namespace visitor {

class CompositeRelay: public IRelay {
public:
  CompositeRelay(std::string name):name_(name) {}
  void On() override;
  void Off() override;
  void SaveState(StateSaver*) override;
  void RestoreState(StateSaver*);

  std::vector<IRelay*> members_;
  std::string name_;

  // IRelay interface
public:
  void Print();
};

} /* namespace visitor */

#endif /* RGB_H_ */
