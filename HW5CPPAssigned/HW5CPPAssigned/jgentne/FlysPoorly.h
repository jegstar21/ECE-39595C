#ifndef FLYSPOORLY_H_
#define FLYSPOORLY_H_

#include <iostream>
#include "Duck.h"
#include "FlyBehavior.h"
#include "Quack.h"
#include "LaysEggsNotBroody.h"

class FlysPoorly : public FlyBehavior
{
    public:
    void fly();
};

#endif