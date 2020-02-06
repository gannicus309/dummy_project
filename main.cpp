#include "CompositeRelay.h"
#include "statesaveimpl.h"
#include "Relay.h"
#include <iostream>


int main() {
  int index = 1;
  std::vector <visitor::IRelay*> all;

  auto room1 = new visitor::CompositeRelay("room1");
  room1->members_.push_back(new visitor::Relay(index++));
//  room1->members_.push_back(new visitor::Relay(index++));
  room1->members_.push_back(new visitor::Relay(index++));
  room1->On();

  auto room2 = new visitor::CompositeRelay("room2");
  room2->members_.push_back(new visitor::Relay(index++));
  auto special= new visitor::Relay(index++);
  room2->members_.push_back(special);
//  room2->members_.push_back(new visitor::Relay(index++));
//  room2->members_.push_back(new visitor::Relay(index++));
  room2->Off();
  special->On();

  auto house = new visitor::CompositeRelay("House");
  house->members_.push_back(room1);
  house->members_.push_back(room2);

  auto outdoor= new visitor::Relay(index++);
  outdoor->On();
  house->members_.push_back(outdoor);
  house->Print();
  std::cout << "\n Save state \n " << std::endl;
  visitor::StateSaveImpl state_saver;
  house->SaveState(&state_saver);
  std::cout << "\n Turn off house \n " << std::endl;
  house->Off();
  house->Print();
  std::cout << "\n Restore state \n " << std::endl;
  house->RestoreState(&state_saver);
  house->Print();
	return 0;
}
