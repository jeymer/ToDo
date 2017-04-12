#include <string>

#ifndef JE_TASK_H
#define JE_TASK_H

class Task {
 private:
  std::string description;
 public:
  Task(int, std::string);
  int getID();
  std::string getDescription();
};

#endif
