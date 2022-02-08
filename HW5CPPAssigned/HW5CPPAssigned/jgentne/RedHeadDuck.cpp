#include <iostream>
#include "LaysEggsBroody.h"
#include "RedHeadDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

RedHeadDuck::RedHeadDuck( ) {
   quackBehavior = new Quack( );
   flyBehavior = new FlyWithWings( );
   eggLayingBehavior = new LaysEggsBroody();
}

void RedHeadDuck::display( ) {
   std::cout << "I’m a real redheaded duck" << std::endl;
}
