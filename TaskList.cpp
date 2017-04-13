#include "TaskList.h"

TaskList::TaskList() {
  this->next_id = 0;
  this->tasks = std::vector<Task>();
}

void TaskList::addTask(std::string description, std::string course) {
  this->tasks.push_back(Task(this->next_id++, description, course));
}

void TaskList::printTasks() {

  /* ===== Blank line before displayng list ===== */
  std::cout << std::endl;
  
  /* ===== Print header ===== */
  std::cout << " ID |    Description    | Course |" << std::endl;
  std::cout << "==================================" << std::endl;

  /* ===== Print tasks ===== */
  for(int i = 0; i < this->tasks.size(); i++) {  

    
    /* == Print ID == */
    std::cout << " ";
    if(i < 10) std::cout << 0;
    std::cout << i << " |";

    
    /* == Print description == */
    int description_length = this->tasks[i].description.substr(0, 17).length();
    // Print leading whitespaces
    for(int leading = 0; leading < (19 - (description_length)) / 2; leading++) {
	std::cout << " ";
    }
    // Print description text
    std::cout << this->tasks[i].description.substr(0, 17);
    // Print trailing whitespace
    for(int trailing = 0; trailing < 19 - (((19 - (description_length)) / 2) + description_length); trailing ++) {
      std::cout << " ";
    }
    std::cout << "|";


    /* == Print course == */
    int course_length = this->tasks[i].course.substr(0, 6).length();
    // Print leading whitespace
    for(int leading = 0; leading < (8 - (course_length)) / 2; leading++) {
      std::cout << " ";
    }
    // Print course text
    std::cout << this->tasks[i].course.substr(0,6);
    // Print trailing whitespace
    for(int trailing = 0; trailing < 8 - (((8 - (course_length)) / 2) + course_length); trailing ++) {
      std::cout << " ";
    }
    std::cout << "|";

    
    // End line of current task
    std::cout << std::endl;
  }

  /* ===== Blank line after displayng list ===== */
  std::cout << std::endl;  
  
}


