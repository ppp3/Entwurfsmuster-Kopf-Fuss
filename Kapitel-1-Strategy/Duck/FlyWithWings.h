#pragma once
#include <iostream>
#include "FlyBehavior.h"

class FlyWithWings:public FlyBehaviour
{
public: 
	void fly() override
	{
		std::cout << "Normales Fliegen!\n";
	}

};