#include "ModelDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"

ModelDuck::ModelDuck()
{
    flyBehaviour = std::make_unique<FlyWithWings>();
    quackBehaviour = std::make_unique<Quack>();
}
