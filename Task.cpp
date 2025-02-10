#include "Task.hpp"

// Default constructor
Task::Task() : Task(0, "DefaultTitle", false) {}

// Parameterized constructor
Task::Task(int id, std::string title, bool isCompleted)
    : id(id), title(title), isCompleted(isCompleted) {}

// Getters
int Task::getId() const { return id; }
std::string Task::getTitle() const { return title; }
bool Task::getIsCompleted() const { return isCompleted; }

// Setters
void Task::setId(int id) { this->id = id; }
void Task::setTitle(std::string title) { this->title = title; }
void Task::setIsCompleted(bool isCompleted) { this->isCompleted = isCompleted; }