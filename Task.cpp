#include "Task.h"

Task::Task(int id, std::string description, std::string course) {
  this->id = id;

  // Strip description of new line, tab, etc. characters
  std::string new_desc = description;
  new_desc.erase(std::remove(new_desc.begin(), new_desc.end(), '\n'), new_desc.end());
  new_desc.erase(std::remove(new_desc.begin(), new_desc.end(), '\t'), new_desc.end());
  new_desc.erase(std::remove(new_desc.begin(), new_desc.end(), '\r'), new_desc.end());
  this->description = new_desc;

  // Strip course of new line, tab, etc. characters
  std::string new_course = course;
  new_course.erase(std::remove(new_course.begin(), new_course.end(), '\n'), new_course.end());
  new_course.erase(std::remove(new_course.begin(), new_course.end(), '\t'), new_course.end());
  new_course.erase(std::remove(new_course.begin(), new_course.end(), '\r'), new_course.end());
  this->course = new_course;
}
