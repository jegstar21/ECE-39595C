#include <iostream>
#include "Quack.h"
#include "FlysPoorly.h"
#include "PekinDuck.h"
#include "LaysEggsNotBroody.h"

PekinDuck::PekinDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new FlysPoorly();
    eggLayingBehavior = new LaysEggsNotBroody();
}

void PekinDuck::display()
{
    std::cout << "I am a real Pekin Duck!! I can't fly well, I can quack, and lay eggs!" << std::endl;
}