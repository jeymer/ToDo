FLAGS = -std=c++14 -g
ALL_OBJS = Task.o TaskList.o ToDoManager.o

all: $(ALL_OBJS)
	g++ $(FLAGS) $(ALL_OBJS) -o todo

Task.o: Task.cpp Task.h
	g++ $(FLAGS) -c Task.cpp

TaskList.o: TaskList.cpp TaskList.h Task.o
	g++ $(FLAGS) -c TaskList.cpp

ToDoManager.o: ToDoManager.cpp TaskList.o
	g++ $(FLAGS) -c ToDoManager.cpp

clean:
	rm -f *.o *~ todo
