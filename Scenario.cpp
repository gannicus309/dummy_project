/*
 * Scenario.cpp
 *
 *  Created on: 9 ����. 2018 �.
 *      Author: ����
 */

#include <visitor/Scenario.h>
#include <visitor/Relay.h>
#include <visitor/RGB.h>

namespace visitor {

Scenario::Scenario(Logger *log)   {

	relays.push_back(new Relay(log));
	relays.push_back(new RGB(log));

}
Scenario::~Scenario()
{
	for(auto c: relays)
		delete c;
}

void Scenario::Execute(IVisitor *visit)
{
	for(auto c: relays)
	 	 dynamic_cast<VisitRelay*>(c)->Accept(visit);
}

} /* namespace visitor */
