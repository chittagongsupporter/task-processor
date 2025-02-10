#include "TaskManager.hpp"
#include <iostream>

int main() {
  Task task1(1, "Task 1", false);
  Task task2(2, "Task 2", true);
  Task task3(3, "Task 3", false);
  // Test task getters
  std::cout << "Task 1 ID: " << task1.getId() << std::endl;
  std::cout << "Task 1 Title: " << task1.getTitle() << std::endl;
  std::cout << "Task 1 Completed: "
            << (task1.getIsCompleted() ? "True" : "False") << std::endl;
  // Test task setters
  task1.setId(4);
  task1.setTitle("Task 4");
  task1.setIsCompleted(true);
  // Test task setters worked
  std::cout << "Task 1 ID: " << task1.getId() << std::endl;
  std::cout << "Task 1 Title: " << task1.getTitle() << std::endl;
  std::cout << "Task 1 Completed: "
            << (task1.getIsCompleted() ? "True" : "False") << std::endl;

  // Test TaskManager class
  TaskManager taskManager1;
  taskManager1.addTask(task1);
  taskManager1.addTask(task2);
  taskManager1.addTask(task3);
  taskManager1.displayTasks();

  std::cout << "Hello World!\n";
}