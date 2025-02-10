#include "Task.hpp"

// Default constructor
Task::Task() : Task(0, "DefaultTitle", false) {}

// Parameterized constructor
Task::Task(int id, std::string title, bool isCompleted)
    : id(id), title(title), isCompleted(isCompleted) {}