#include "TaskList.h"

TaskList::TaskList() {
  this->next_id = 0;
  this->tasks = std::vector<Task>();
}

void TaskList::addTask(std::string description, std::string course, std::string due) {
  this->tasks.push_back(Task(this->next_id++, description, course, due));
}

void TaskList::deleteTask(int id_to_delete) {
  for(std::vector<Task>::iterator i = this->tasks.begin(); i <= this->tasks.end(); i++) {
    if((*i).id == id_to_delete) {
      this->tasks.erase(i);
    }
  }
  this->reindex();
}

void TaskList::printTasks() {

  /* ===== Blank line before displayng list ===== */
  std::cout << std::endl;
  
  /* ===== Print header ===== */
  std::cout << " ID |    Description    | Course |" << "          Due Date          |" << std::endl;
  std::cout << "================================================================" << std::endl;

  /* ===== Print tasks ===== */
  for(int i = 0; i < this->tasks.size(); i++) {  

    
    /* == Print ID == */
    std::cout << " ";
    if(i < 10) std::cout << 0;
    std::cout << this->tasks[i].id << " |";

    
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


    /* == Print due date == */
    int due_length = this->tasks[i].due.substr(0, 26).length();
    // Print leading whitespace
    for(int leading = 0; leading < (28 - (due_length)) / 2; leading++) {
      std::cout << " ";
    }
    // Print course text
    std::cout << this->tasks[i].due.substr(0, 26);
    // Print trailing whitespace
    for(int trailing = 0; trailing < 28 - (((28 - (due_length)) / 2) + due_length); trailing ++) {
      std::cout << " ";
    }
    std::cout << "|";
    
    
    
    // End line of current task
    std::cout << std::endl;
  }

  /* ===== Blank line after displayng list ===== */
  std::cout << std::endl;  
  
}

/* 
 * Traverses the vector of tasks and changes the IDs to match the order
 */
void TaskList::reindex() {
  for(int i = 0; i < this->tasks.size(); i++) {
    this->tasks[i].id = i;
  }
}

