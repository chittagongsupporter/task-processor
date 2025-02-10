#include "TaskManager.hpp"
#include <iostream>

// Default constructor
TaskManager::TaskManager() : tasks() {}

// Parameterized constructor
TaskManager::TaskManager(const std::vector<Task> &tasks) : tasks(tasks) {}

// Getters
const std::vector<Task> &TaskManager::getTasks() const { return tasks; }

// Setters
void TaskManager::setTasks(const std::vector<Task> &tasks) {
  this->tasks = tasks;
}

// Member functions
void TaskManager::addTask(const Task &task) { tasks.push_back(task); }

bool TaskManager::removeTask(int id) {
  for (auto it = tasks.begin(); it != tasks.end(); ++it) {
    if (it->getId() == id) {
      tasks.erase(it);
      return true;
    }
  }
  return false;
}

void TaskManager::displayTasks() const {
  for (const auto &task : tasks) {
    std::cout << "ID: " << task.getId() << ", Title: " << task.getTitle()
              << ", Completed: " << (task.getIsCompleted() ? "True" : "False")
              << std::endl;
  }
}