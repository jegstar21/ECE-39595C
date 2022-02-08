#include <iostream>
#include "ToyDuck.h"
#include "LaysToyEggs.h"
#include "FlyNoWay.h"
#include "Quack.h"

ToyDuck::ToyDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new FlyNoWay();
    eggLayingBehavior = new LaysToyEggs();
}

void ToyDuck::display()
{
    std::cout << "I'm a toy duck" << std::endl;
}