#pragma once
#include "FlyBehavior.h"
#include <iostream>

class FlyNoWay :public FlyBehaviour
{
public:
	void fly() override
	{
		std::cout << "Fliegt nicht!\n";
	}

};