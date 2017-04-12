#include "Task.h"

Task::Task(int id, std::string description) {
  this->description = description;
}

std::string Task::getDescription() {
  return this->description;
}
