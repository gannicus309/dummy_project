/*
 * Scenario.h
 *
 *  Created on: 9 ����. 2018 �.
 *      Author: ����
 */

#ifndef SCENARIO_H_
#define SCENARIO_H_

#include <Logger/Logger.h>
#include <vector>
#include <visitor/IRelay.h>
#include <visitor/IVisitor.h>

namespace visitor {

class Scenario {
private:
	std::vector<IRelay*> relays;
public:
	Scenario(Logger *);
	~Scenario();
	void Execute(IVisitor*);

};

} /* namespace visitor */

#endif /* SCENARIO_H_ */
