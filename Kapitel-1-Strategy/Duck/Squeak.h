#pragma once
#include "QuackBehavior.h"
#include <iostream>

class Squeak :public QuackBehaviour
{
public:
	void quack() override
	{
		std::cout << "Quietscht\n";
	}

};
