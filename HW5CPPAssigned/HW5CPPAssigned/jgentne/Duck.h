#ifndef DUCK_H_
#define DUCK_H_
#include "LaysEggs.h"
#include "QuackBehavior.h"
#include "FlyBehavior.h"

class Duck {
public:
   Duck( );
   virtual void setFlyBehavior(FlyBehavior*);
   virtual void setQuackBehavior(QuackBehavior*);
   virtual void performQuack ( );
   virtual void performFly ( );
   virtual void swim( );
   virtual void display( )=0;
   virtual void performEggLaying();
protected:
   QuackBehavior* quackBehavior;
   FlyBehavior* flyBehavior;
   LaysEggs* eggLayingBehavior;
};
#endif /* DUCK_H_ */
