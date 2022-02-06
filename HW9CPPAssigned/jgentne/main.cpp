#include <iostream>
#include <chrono>
#include <mutex>
#include <thread>
#include <memory>

#include "DotProduct.h"
#include "WorkQueue.h"
#include "QuickSort.h"
#include "Command.h"

#define NUMSORTS 4
#define STARTSIZE 8000

using namespace std::chrono;


void worker(WorkQueue workQ) {
   std::shared_ptr<Command> c(workQ.get( ));
   while (c != nullptr) {
      c->execute( );
      static std::mutex outputLock;
      std::lock_guard<std::mutex> lck(outputLock); 
      c->identify( );
      c = workQ.get( );
   }
}


int main(int argc, char** args) {
   WorkQueue q = WorkQueue();

   int sortSize = STARTSIZE;
   for (int i=0; i<NUMSORTS; i++) {
      QuickSort sort = QuickSort(sortSize);
      auto start = high_resolution_clock::now();
      sort.sort( );
      auto stop = high_resolution_clock::now();
      auto duration = duration_cast<microseconds>(stop - start).count( );
      q.put(std::shared_ptr<Command>(new QuickSort(sortSize)));
      q.put(std::shared_ptr<Command>(new DotProduct(sortSize)));
      sortSize *=2;

   }

   auto t1 = high_resolution_clock::now();
   
   std::thread a(worker, q);
   std::thread b(worker, q);
   std::thread c(worker, q);
   std::thread d(worker, q);

   a.join();
   b.join();
   c.join();
   d.join();
   
   auto t2 = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(t2 - t1).count( );

   std::cout << "execution time with 4 threads is " << duration << " microseconds" << std::endl;

}
