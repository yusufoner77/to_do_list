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

// Contains One Credit Add-on "Reject Blank Tasks"
void ToDoList::add(string task_name) {
  if (check_for_duplicate(task_name) == true) {
     cout << "That task is already on the list!\n";
  }

  // This makes sure that the task is not empty
  else if(task_name.find_first_not_of(' ') == string::npos) {
    cout << "Blank tasks will not be added to the list!\n";
  }

  else {
    Task task(task_name);
    vec.push_back(task);
  }
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

// Two credit add-on "Reject Duplicate Tasks"
bool ToDoList::check_for_duplicate(string task_name) {
  bool duplicate = false;
  vector<Task>::iterator ptr;

  for (ptr = vec.begin(); ptr < vec.end(); ptr++) {
    if ((*ptr).name == task_name && (*ptr).complete == false) {
      duplicate = true;
    }
  }

  return duplicate;
}