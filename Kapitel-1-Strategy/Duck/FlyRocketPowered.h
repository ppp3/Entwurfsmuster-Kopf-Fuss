#pragma once

#include "FlyBehavior.h"
#include <iostream>

class FlyRocketPowered :public FlyBehaviour
{
public:
	void fly() override
	{
		std::cout << "Fliegt mit Raketenantrieb!\n";
	}

};
