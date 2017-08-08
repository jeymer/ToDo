#include "TaskList.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

/* Outputs an error message to the user*/
void invalidInputMessage() {
  std::cout << "Invalid input. Look at README.md for commands." << std::endl;
}

/* Builds path where saved data will be stored/retrieved
   Returns a string containing location of saved file */
std::string getFilePath() {
  std::string file_path = getenv("HOME");
  file_path.append("/ToDo.txt");
  return file_path;
}

/* Takes saved task file by reference and parses line by line, adding tasks to list 
   Returns a TaskList filled with all tasks saved in file */
TaskList loadTasks() {
  TaskList tasks;
  std::string line;

  // Open saved file
  std::ifstream saved_file;
  saved_file.open(getFilePath());
  
  while(std::getline(saved_file, line)) {
    std::string description = line.substr(0, line.find_first_of('~'));
    std::string course = line.substr(line.find_first_of('~') + 1, (line.find_last_of('~') - line.find_first_of('~') - 1));
    std::string due = line.substr(line.find_last_of('~') + 1, (line.length() - line.find_last_of('~') - 1));
    tasks.addTask(description, course, due);
  }
  
  saved_file.close();
  return tasks;
}

int main(int argc, char* argv[]) {
  // Will hold tasks to be operated on
  TaskList tasks = loadTasks();
  
  /* ===== Check to ensure arguments ===== */
  if(argc == 1) {
    invalidInputMessage();
    exit(-1);
  }
  
  /* ===== Parse arguments and operate accordingly */

  /* == List tasks in list == */
  if(strcmp(argv[1], "list") == 0) {
    /*= Should have no additional arguments to add =*/
    if(argc != 2) {
      invalidInputMessage();
      exit(-1);
    }
    tasks.printTasks();
  }
  
  /* == Add new task == */
  if(strcmp(argv[1], "add") == 0) {
    /*= Should have no additional arguments to add =*/
    if(argc != 2) {
      invalidInputMessage();
      exit(-1);
    }
    /*= Get fields to put into new task =*/
    std::string desc, course, due;
    std::cout << "Input description: ";
    std::getline(std::cin, desc);
    std::cout << "Input course: ";
    std::getline(std::cin, course);
    std::cout << "Input due date: ";
    std::getline(std::cin, due);

    
  }
}
