OBJS = main.o Array2D.o
CC = g++  -std=c++11
INCLUDE = 
LIBS = 
CFLAGS = -Wall -g
EXECUTABLE = HW4
COMMANDLINE =

.PHONY : run
run : $(EXECUTABLE)
	./$(EXECUTABLE) $(COMMANDLINE)

cleanmake : clean HW4

.PHONY : $(EXECUTABLE)
$(EXECUTABLE) :  $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS)

%.o : %.c 
	$(CC) $(CFLAGS) -c $@ $(INCLUDE) $(LIBS)

clean :
	rm $(EXECUTABLE) ${OBJS} 
