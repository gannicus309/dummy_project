#ifndef IRELAY_H_
#define IRELAY_H_

namespace visitor {
class StateSaver;
class IRelay {
public:
  virtual ~IRelay() = default;
  virtual void On() = 0;
  virtual void Off() = 0;
  virtual void Print() = 0;
  virtual void SaveState(StateSaver*) = 0;
  virtual void RestoreState(StateSaver*) = 0;
};

} /* namespace visitor */

#endif /* IRELAY_H_ */
