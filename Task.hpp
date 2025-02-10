#ifndef TASK_HPP
#define TASK_HPP

#include <string>

class Task
{
public:
  // Default constructor
  Task();
  // Parameterized constructor
  Task(int id, std::string title, bool isCompleted);
private:
  // Data members
  int id;
  std::string title;
  bool isCompleted;
}

#endif // TASK_HPP