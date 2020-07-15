#include <gmock/gmock.h>
#include "iproject.h"


namespace dev {

class MockIProject : public IProject {
 public:
  MOCK_METHOD0(run, int());
};

}  // namespace dev

