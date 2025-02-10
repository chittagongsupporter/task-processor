#include "TaskManager.hpp"
#include <iostream>

void testTaskClass() {
  Task t(1, "Task 1", false); // name is short because this is just for a test

  // Test task getters
  std::cout << "Getters:\nID: " << t.getId() << ", Title: " << t.getTitle()
            << ", Completed: " << (t.getIsCompleted() ? "True" : "False")
            << "\n";

  // Test task setters.
  t.setId(4);
  t.setTitle("Task 4");
  t.setIsCompleted(true);

  // Test task setters worked
  std::cout << "Getters after invoking Setters:\nID: " << t.getId()
            << ", Title: " << t.getTitle()
            << ", Completed: " << (t.getIsCompleted() ? "True" : "False")
            << "\n";
}

void testTaskManagerClass() {
  TaskManager tm1; // name is short just for testing

  // Create task objects
  Task task1(1, "Task 1", false);
  Task task2(2, "Task 2", true);

  // Test task manager member function
  tm1.addTask(task1);
  tm1.addTask(task2);
  tm1.displayTasks();
}

int main() {
  std::cout << "-\nTesting Task Class\n" << std::endl;
  testTaskClass();

  std::cout << "-\nTesting TaskManager Class\n" << std::endl;
  testTaskManagerClass();
  return 0;
}