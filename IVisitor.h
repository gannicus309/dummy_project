
#ifndef IVISITOR_H_
#define IVISITOR_H_

namespace visitor {
class Relay;
class CompositeRelay;

class StateSaver {
public:
  virtual ~StateSaver() {}

  virtual void Restore(Relay *) = 0;
  virtual void Restore(CompositeRelay*) = 0;

  virtual void Save(Relay *) = 0;
  virtual void Save(CompositeRelay*) = 0;
};

} /* namespace visitor */

#endif /* IVISITOR_H_ */
