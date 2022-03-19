#pragma once

#include "QuackBehavior.h"
#include <iostream>

class MuteQuack :public QuackBehaviour
{
public:
	void quack() override
	{
		std::cout << "Lautloses Quacken\n";
	}

};