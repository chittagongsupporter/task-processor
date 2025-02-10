#ifndef TASKMANAGER_HPP
#define TASKMANAGER_HPP

#include <vector>
#include "Task.hpp"

/// Manages a Vector of Tasks objects
class TaskManager
{
public:
  /// Constructors:
  /// Default constructor
  TaskManager();

  /// Parameterized constructor
  TaskManager(const std::vector<Task>& tasks);

  /// Getters:
  const std::vector<Task>& getTasks() const;

  /// Setters:
  void setTasks(const std::vector<Task>& tasks);

  /// Member functions:
  /// Add task to tasks vector
  void addTask(const Task& task);

  /// Remove task from tasks vector, return true if successful else false
  bool removeTask(int id);

  /// Display each tasks' corresponding ID, title, completion status, in tasks vector
  void displayTasks() const;

private:
  /// Data members
  std::vector<Task> tasks;
};

#endif // TASKMANAGER_HPP