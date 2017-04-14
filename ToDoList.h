#include <vector>
#include <iostream>
#include <string>
#include "Task.h"

#ifndef JE_TODOLIST_H
#define JE_TODOLIST_H

class ToDoList {
 private:
  int next_id;
  std::vector<Task> tasks;
 public:
  TaskList();
  void addTask(std::string, std::string, std::string);
  void printTasks();
};

#endif
