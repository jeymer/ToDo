#include <vector>
#include <iostream>
#include <string>
#include "Task.h"

#ifndef JE_TASKLIST_H
#define JE_TASKLIST_H

class TaskList {
 private:
  int next_id;
  std::vector<Task> tasks;
 public:
  TaskList();
  void addTask(std::string, std::string, std::string);
  bool deleteTask(int);
  Task get(int);
  void printTasks();
  int numTasks();
  void reindex();
};

#endif
