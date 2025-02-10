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

  // Getters
  int getId() const;
  std::string getTitle() const;
  bool getIsCompleted() const;
  // Setters
  void setId(int id);
  void setTitle(std::string title);
  void setIsCompleted(bool isCompleted);

private:
  // Data members
  int id;
  std::string title;
  bool isCompleted;
}

#endif // TASK_HPP