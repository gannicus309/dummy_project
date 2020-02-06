#include "CompositeRelay.h"
#include "statesaveimpl.h"
#include "Relay.h"
#include <iostream>

int main() {
  std::vector<visitor::IRelay*> all;

  auto room1 = new visitor::CompositeRelay("Bedroom");
  room1->members_.push_back(new visitor::Relay("Bed lamp 1"));
  room1->members_.push_back(new visitor::Relay("Bed lamp 2"));
  room1->On();

  auto room2 = new visitor::CompositeRelay("Living Room");
  room2->members_.push_back(new visitor::Relay("Table lamp"));
  auto special = new visitor::Relay("Living room lamp");
  room2->members_.push_back(special);
  room2->Off();
  special->On();

  auto house = new visitor::CompositeRelay("House");
  house->members_.push_back(room1);
  house->members_.push_back(room2);

  auto outdoor = new visitor::Relay("Outdoor lamp");
  outdoor->On();
  house->members_.push_back(outdoor);
  house->Print(0);
  std::cout << "====Save state====" << std::endl;
  visitor::StateSaveImpl state_saver;
  house->SaveState(&state_saver);
  std::cout << "====Turn off house====" << std::endl;
  house->Off();
  house->Print(0);
  std::cout << "====Restore state====" << std::endl;
  house->RestoreState(&state_saver);
  house->Print(0);
  return 0;
}
