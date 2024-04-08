#include "Task.hpp"
// #include <string>
// #include <vector>
using namespace std;

Task::Task(string name, vector<string> tags) {
  this->name = name;
  complete = false;
  this->tags = tags;
}