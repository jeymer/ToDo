#include "Task.h"

Task::Task(int id, std::string description, std::string course) {
  this->id = id;
  this->description = description;
  this->course = course;
}

std::string Task::getDescription() {
  return this->description;
}

std::string Task::getCourse() {
  return this->course;
}
