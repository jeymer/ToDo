#include <vector>
#include <iostream>
#include <string>
#include "Task.h"

#ifndef JE_TASKLIST_H
#define JE_TASKLIST_H

class TaskList {
 private:
  std::vector<Task> tasks;
  int next_id;
 public:
  TaskList();
  void addTask(std::string);
  void printTasks();
};

#endif
