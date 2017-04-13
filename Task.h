#include <string>

#ifndef JE_TASK_H
#define JE_TASK_H

class Task {
 public:

  /* Fields */
  unsigned int id;
  std::string description;
  std::string course;

  /* Methods */
  Task(int, std::string, std::string);

};

#endif
