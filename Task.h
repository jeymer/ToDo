#include <string>

#ifndef JE_TASK_H
#define JE_TASK_H

class Task {
 private:
  unsigned int id;
  std::string description;
  std::string course;
 public:
  Task(std::string, std::string);
  std::string getDescription();
  std::string getCourse();
};

#endif
