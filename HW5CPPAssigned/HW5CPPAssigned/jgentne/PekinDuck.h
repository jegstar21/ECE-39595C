#ifndef PEKINDUCK_H_
#define PEKINDUCK_H_

#include <iostream>
#include "Duck.h"
#include "LaysEggs.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class PekinDuck : public Duck
{
    public:
    PekinDuck();
    void display();
};

#endif