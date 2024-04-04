#include "ToDoList.hpp"
// #include "Task.hpp"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

ToDoList::ToDoList() {
  vector<Task> vec;
}

void ToDoList::pretty_print(Task task) {
  cout << task.name << endl;
}

void ToDoList::add(string task_name) {
  Task task(task_name);
  vec.push_back(task);
}

void ToDoList::complete(string task_name) {
  vector<Task>::iterator ptr;

  for (ptr = vec.begin(); ptr < vec.end(); ptr++) {
    if ((*ptr).name == task_name && (*ptr).complete == false) {
      (*ptr).complete = true;
      break;
    }
  }
}

void ToDoList::all() {
  vector<Task>::iterator ptr;

  for (ptr = vec.begin(); ptr < vec.end(); ptr++) {
    pretty_print(*ptr);
  }  
}

void ToDoList::complete() {
  vector<Task>::iterator ptr;

  for (ptr = vec.begin(); ptr < vec.end(); ptr++) {
    if ((*ptr).complete == true) {
      pretty_print(*ptr);
    }
  }  
}

void ToDoList::incomplete() {
  vector<Task>::iterator ptr;

  for (ptr = vec.begin(); ptr < vec.end(); ptr++) {
    if ((*ptr).complete == false) {
      pretty_print(*ptr);
    }
  }  
}

void ToDoList::clear() {
  vec.clear();
}