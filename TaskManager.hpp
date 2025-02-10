#ifndef TASKMANAGER_HPP
#define TASKMANAGER_HPP

#include <vector>
#include "Task.hpp"

/// Manages a Vector of Tasks objects
class TaskManager
{
public:
    /// Default constructor
    TaskManager();

    /// Parameterized constructor
    TaskManager(const std::vector<Task>& tasks);

    /// Getters
    const std::vector<Task>& getTasks() const;

    /// Setters
    void setTasks(const std::vector<Task>& tasks);

    /// Member functions
    void addTask(const Task& task);
    bool removeTask(int id);
    void displayTasks() const;

private:
    /// Data members
    std::vector<Task> tasks;
};

#endif // TASKMANAGER_HPP