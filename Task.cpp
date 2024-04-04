#include "Task.hpp"
#include <string>
using namespace std;

Task::Task(string name) {
  this->name = name;
  complete = false;
}