OBJS = HW1.o Automobile.o
CC = g++
LIBS = -lm
CFLAGS = -Wall -g -std=c++11

.RECIPEPREFIX := :

.PHONY : run

run : hw1
:	./hw1

hw1 :  $(OBJS)
:  $(CC) $(OPTIONS) -o hw1 $(OBJS) $(CFLAGS) $(LIBS)
HW1.o : HW1.cpp Automobile.h
:  $(CC) $(OPTIONS) -c HW1.cpp $(CFLAGS) $(LIBS)
Automobile.o : Automobile.cpp Automobile.h
:  $(CC) $(OPTIONS) -c Automobile.cpp $(CFLAGS) $(LIBS)

clean :
: rm hw1 ${OBJS}