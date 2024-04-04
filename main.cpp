#include "ToDoList.hpp"
#include <iostream>
using namespace std;

int main() {
  ToDoList list;

  list.add("Buy Milk");
  list.add("Buy Meat");
  list.add("Buy Milk");
  list.add("Exercise");

  list.complete("Buy Milk");
  
  cout << "The To Do List items are:\n";
  list.all();

  cout << "\nThe completed items are:\n";
  list.complete();

  cout << "\nThe incomplete items are:\n";
  list.incomplete();

  cout << "\nNow if I clear the To Do List...\n";
  list.clear();

  cout << "\nThe To Do List items are:\n";
  list.all();
}