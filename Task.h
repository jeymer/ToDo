#include <string>

#ifndef JE_TASK_H
#define JE_TASK_H

class Task {
 private:
  std::string description;
  std::string course;
 public:
  Task(std::string);
  std::string getDescription();
};

#endif
