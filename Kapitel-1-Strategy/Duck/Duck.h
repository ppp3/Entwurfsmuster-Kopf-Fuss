#pragma once

#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <memory>
#include <iostream>
class Duck
{
	protected:
		std::unique_ptr<FlyBehaviour> flyBehaviour;
		std::unique_ptr<QuackBehaviour> quackBehaviour;

	public:
		void quack();
		void swim();
		void fly();
		void setFlyBehavior(std::unique_ptr<FlyBehaviour> flyBehaviour);
		void setQuackBehavior(std::unique_ptr<QuackBehaviour> quackBehaviour);

};

