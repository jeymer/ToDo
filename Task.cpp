#include "Task.h"

Task::Task(std::string description, std::string course) {
  this->description = description;
  this->course = course;
}

std::string Task::getDescription() {
  return this->description;
}

std::string Task::getCourse() {
  return this->course;
