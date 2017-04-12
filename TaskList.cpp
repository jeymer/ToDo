#include "TaskList.h"

TaskList::TaskList() {
  this->tasks = std::vector<Task>();
  this->next_id = 0;
}

void TaskList::addTask(std::string description) {
  this->tasks.push_back(Task(this->next_id++, description));
}

void TaskList::printTasks() {
  for(int i = 0; i < this->tasks.size(); i++) {
    std::cout << this->tasks[i].getID() << ": " << this->tasks[i].getDescription() << std::endl;
  }
}
