#ifndef QUICKSORT_H_
#define QUICKSORT_H_

#include <iostream>
#include <string>

#include "Command.h"

class QuickSort : public Command{
private:
   int* arr;
   int length;

   void quickSort(int low, int high);
   int min(int v1, int v2);
   int findPivot(int arr[ ], int low, int high);
   int partition(int low, int high);

public:
   QuickSort();
   QuickSort(int numElements);

   virtual void sort();

   void execute();
   void identify();

   friend std::ostream& operator<<(std::ostream& os, const QuickSort qs);
};

#endif