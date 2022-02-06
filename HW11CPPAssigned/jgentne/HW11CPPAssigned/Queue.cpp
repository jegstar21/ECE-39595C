#include<thread>
#include<mutex>
#include<condition_variable>
#include<list>
#include <iostream>

#include "Queue.h"

Queue::Queue(int cap) : capacity(cap) { }

Queue::~Queue( ) { } 

void Queue::put(int element) {
   std::unique_lock<std::mutex> lck(mtx);
   while(size == capacity){
      cv.wait(lck);
   }
   element = size++;
   puts++;
   cv.notify_all();
}

int Queue::get( ) {
   std::unique_lock<std::mutex> lck(mtx);
   while(size == 0) {
      cv.wait(lck);
   }
      int v = size--;
      takes++;
      cv.notify_all();
      return v;
   }

int Queue::getTakes( ) {
   return takes;
}

int Queue::getPuts( ) {
   return puts;
}
