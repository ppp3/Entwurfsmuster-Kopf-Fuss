#pragma once
#include "MallardDuck.h"
#include "MuteQuack.h"
#include "FlyWithWings.h"

MallardDuck::MallardDuck()
{
    flyBehaviour = std::make_unique<FlyWithWings>();
    quackBehaviour = std::make_unique<MuteQuack>();
}
