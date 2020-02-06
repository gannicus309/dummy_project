#include "statesaveimpl.h"
#include "Relay.h"
#include "CompositeRelay.h"
#include <assert.h>

namespace visitor {

StateSaveImpl::StateSaveImpl() {}

void StateSaveImpl::Restore(visitor::Relay* relay) {
  relay->state_ = state_;
}

void StateSaveImpl::Restore(visitor::CompositeRelay* relay) {
  int length = relay->members_.size();
  assert(length == composite_.size());

  for (int i = 0; i < length; i++) {
    auto member = relay->members_[i];
    auto saver = composite_[i];
    member->RestoreState(saver);
  }
}

void StateSaveImpl::Save(visitor::Relay* relay) {
  state_ = relay->state_;
}

void StateSaveImpl::Save(visitor::CompositeRelay* relay) {
  for (visitor::IRelay* member : relay->members_) {
    auto new_saver = new StateSaveImpl();
    composite_.push_back(new_saver);
    member->SaveState(new_saver);
  }
}
}
