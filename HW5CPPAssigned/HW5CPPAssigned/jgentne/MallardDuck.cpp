#include <iostream>
#include "LaysEggsBroody.h"
#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

MallardDuck::MallardDuck( ) {
   quackBehavior = new Quack( );
   flyBehavior = new FlyWithWings( );
   eggLayingBehavior = new LaysEggsBroody();
}

void MallardDuck::display( ) {
   std::cout << "I’m a real mallard duck" << std::endl;
}
