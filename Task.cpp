#include "Task.h"

Task::Task(int id, std::string description) {
  this->id = id;
  this->description = description;
}

int Task::getID() {
  return this->id;
}

std::string Task::getDescription() {
  return this->description;
}
