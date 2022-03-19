#include "Duck.h"

void Duck::quack()
{
	quackBehaviour->quack();
}
void Duck::swim()
{
	std::cout << "Schwimmmt!\n";
}

void Duck::fly()
{
	flyBehaviour->fly();
}


void Duck::setFlyBehavior(std::unique_ptr<FlyBehaviour> flyBehaviour)
{
	this->flyBehaviour = std::move(flyBehaviour);
}

void Duck::setQuackBehavior(std::unique_ptr<QuackBehaviour> quackBehaviour)
{
	this->quackBehaviour = std::move(quackBehaviour);
}




