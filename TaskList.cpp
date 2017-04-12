#include "TaskList.h"

TaskList::TaskList() {
  this->tasks = std::vector<Task>();
}

void TaskList::addTask(std::string description, std::string course) {
  this->tasks.push_back(Task(description, course));
}

void TaskList::printTasks() {
  for(int i = 0; i < this->tasks.size(); i++) {
    std::cout << this->tasks[i].getDescription() << std::endl;
  }
}
