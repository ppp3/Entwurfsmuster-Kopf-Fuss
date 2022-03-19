#include "MallardDuck.h"
#include "ModelDuck.h"
#include <memory>
#include "FlyRocketPowered.h"
#include "Quack.h"
#include <iostream>

int main()
{
	MallardDuck d;
	d.fly();
	d.swim();
	d.quack();
	
	std::cout << "----------------\n\n";
	ModelDuck modelDuck;
	modelDuck.setFlyBehavior(std::make_unique<FlyRocketPowered>());
	modelDuck.setQuackBehavior(std::make_unique<Quack>());
	modelDuck.fly();
	modelDuck.swim();
	modelDuck.quack();

}