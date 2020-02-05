/*
 * VisitRelay.h
 *
 *  Created on: 9 ����. 2018 �.
 *      Author: ����
 */

#ifndef VISITRELAY_H_
#define VISITRELAY_H_

#include <visitor/IRelay.h>
#include <visitor/IVisitor.h>
#include <logger/logger.h>
namespace visitor {

class VisitRelay: public IRelay {
protected:
	 Logger *logger;
public:
	VisitRelay(Logger *logger) : logger(logger) {}
};

} /* namespace visitor */

#endif /* VISITRELAY_H_ */
