#include "project.h"
#include "calculator.h"
namespace dev {

int Project::run() {
  Calculator calc;
  calc.evaluate("2 3 +");
  return 0;
}
}  // namespace dev
