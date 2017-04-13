#include <string>

#ifndef JE_TASK_H
#define JE_TASK_H

class Task {
 public:

  /* Fields */
  unsigned int id;
  std::string description;
  std::string course;
  std::string due;
  
  /* Methods */
  Task(int, std::string, std::string, std::string);

};

#endif
