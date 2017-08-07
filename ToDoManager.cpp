#include "TaskList.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

void invalidInputMessage() {
  std::cout << "Invalid input. Look at README.md for commands." << std::endl;
}

void openFile() {}

int main(int argc, char* argv[]) {
  TaskList tasks;
  std::fstream saved_file("~/ToDo.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);

  
  std::string homedir = getenv("HOME");

  std::cout << homedir << std::endl;
  
  /* ===== Check to ensure arguments ===== */
  if(argc == 1) {
    invalidInputMessage();
    exit(-1);
  }
  
  /* ===== Parse arguments and operate accordingly */

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
