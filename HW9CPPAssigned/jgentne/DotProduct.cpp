#include <iostream>
#include <string>
#include <stdlib.h>

#include "DotProduct.h"

DotProduct::DotProduct(int numElements) : len(numElements) {

   float total = 0;

   int i;

   a = new int[len];

   for (i = 0; i < len; i++) {
      a[i] = rand( ) % 100;
   }

   b = new int[len];

   for (int i=0; i<len; i++) {
      b[i] = rand( ) % 100;
   }
}

DotProduct::DotProduct( ) {
   DotProduct(0);
}

void DotProduct::execute( ) {
   int i;

   for (i = 0; i < len; i++){
      total += a[i] * b[i];
   }
}

std::ostream& operator<<(std::ostream& os, const DotProduct dot) {

   os << "inner product on arrays of length " << dot.len << ", result is " << dot.total << "\n\n" << std::endl;
   return os;
}

void DotProduct::identify() {
   std::cout << *this;
}
