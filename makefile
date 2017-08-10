FLAGS = -std=c++14 -g
ALL_OBJS = Task.o TaskList.o ToDoManager.o

all: $(ALL_OBJS)
	g++ $(FLAGS) $(ALL_OBJS) -o todo

install: all
	cp todo /usr/local/bin
	rm -f *.o todo

uninstall:
	rm -f /usr/local/bin/todo
	rm -f *.o todo
	@echo "ToDo has been successfully uninstalled. Please note that the saved data containing your todo list has not been deleted."

Task.o: Task.cpp Task.h
	g++ $(FLAGS) -c Task.cpp

TaskList.o: TaskList.cpp TaskList.h Task.o
	g++ $(FLAGS) -c TaskList.cpp

ToDoManager.o: ToDoManager.cpp TaskList.o
	g++ $(FLAGS) -c ToDoManager.cpp

clean:
	rm -f *.o *~ todo
