#include "Task.h"

Task::Task(int id, std::string description, std::string course, std::string due) {
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

  // Strip due of new line, tab, etc. characters
  std::string new_due = due;
  new_due.erase(std::remove(new_due.begin(), new_due.end(), '\n'), new_due.end());
  new_due.erase(std::remove(new_due.begin(), new_due.end(), '\t'), new_due.end());
  new_due.erase(std::remove(new_due.begin(), new_due.end(), '\r'), new_due.end());
  this->due = new_due;
}

void Task::edit(std::string new_description, std::string new_course, std::string new_due) {
  if(new_description.compare("") != 0) {
    this->description = new_description;
  }
  if(new_course.compare("") != 0) {
    this->course = new_course;
  }
  if(new_due.compare("") != 0) {
    this->due = new_due;
  }
}
