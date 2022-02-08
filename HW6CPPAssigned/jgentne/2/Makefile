OBJS = mainDynamic.o Person.o Student.o Faculty.o
CC = g++  -std=c++11
INCLUDE = 
LIBS = 
CFLAGS = -Wall -g
EXECUTABLE = HW6
COMMANDLINE =

.PHONY : run
run : $(EXECUTABLE)
	./$(EXECUTABLE) $(COMMANDLINE)

cleanmake : clean HW6

.PHONY : $(EXECUTABLE)
$(EXECUTABLE) :  $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS)

%.o : %.c 
	$(CC) $(CFLAGS) -c $@ $(INCLUDE) $(LIBS)

clean :
	rm $(EXECUTABLE) ${OBJS} 
