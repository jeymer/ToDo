FLAGS = -std=c++14 -g
ALL_OBJS = Task.o TaskList.o Driver.o

all: $(ALL_OBJS)
	g++ $(FLAGS) $(ALL_OBJS) -o task

Task.o: Task.cpp Task.h
	g++ $(FLAGS) -c Task.cpp

TaskList.o: TaskList.cpp TaskList.h Task.o
	g++ $(FLAGS) -c TaskList.cpp

Driver.o: Driver.cpp TaskList.o
	g++ $(FLAGS) -c Driver.cpp

clean:
	rm -f *.o *~ task
