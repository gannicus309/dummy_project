
#ifndef IVISITOR_H_
#define IVISITOR_H_

namespace visitor {
class Relay;
class RGB;

class IVisitor {
public:
  virtual ~IVisitor() {}
  virtual void Visit(Relay *) = 0;
  virtual void Visit(RGB*) = 0;

};

} /* namespace visitor */

#endif /* IVISITOR_H_ */
