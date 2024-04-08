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
void ToDoList::add(string task_name, vector<string> tags) {
  if (check_for_duplicate(task_name) == true) {
     cout << "That task is already on the list!\n";
  }

  // This makes sure that the task is not empty
  else if(task_name.find_first_not_of(' ') == string::npos) {
    cout << "Blank tasks will not be added to the list!\n";
  }

  else {
    Task task(task_name, tags);
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

void ToDoList::tagged_with(string tag) {
  vector<Task>::iterator ptr;
  bool no_tags = true;

  for (ptr = vec.begin(); ptr < vec.end(); ptr++) {
    vector<string>::iterator string_ptr;
    for (string_ptr = ((*ptr).tags).begin(); string_ptr < ((*ptr).tags).end(); string_ptr++) {
      if (*string_ptr == tag) {
        cout << (*ptr).name << endl;
        no_tags = false;
      }
    }
  }

  if (no_tags == true) {
    cout << "There are no tasks with that tag.\n";
  }
}