#pragma once
#include "QuackBehavior.h"
#include <iostream>

class Quack :public QuackBehaviour
{
public:
	void quack() override
	{
		std::cout << "Normales quacken\n";
	}

};