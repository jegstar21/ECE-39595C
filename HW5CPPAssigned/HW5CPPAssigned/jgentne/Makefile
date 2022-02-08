# suffix rules don't allow pre-requisites to be used and are deprecated for
# this reason.  The right way to do this is to use patterns.  The "%" pattern
# allows any file to be matched.
OBJS = *.cpp
CC = g++
CFLAGS = -Wall -std=c++11 -g
EXECUTABLE = HW5

.PHONY : run
run : $(EXECUTABLE)
	./$(EXECUTABLE)

cleanmake : clean HW5

.PHONY : $(EXECUTABLE)
$(EXECUTABLE) :  $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJS)
%.o : %.c 
	$(CC) $(CFLAGS) -c $@

clean :
	rm $(EXECUTABLE) ${OBJS} 
