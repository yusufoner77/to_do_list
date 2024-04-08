#include "ToDoList.hpp"
#include <iostream>
using namespace std;

int main() {
  ToDoList list;

  cout << "Adding \"Buy Milk\" to the list\n\n";
  list.add("Buy Milk");
  cout << "Adding \"Buy Meat\" to the list\n\n";
  list.add("Buy Meat");
  cout << "Adding \"Buy Milk\" to the list\n";
  list.add("Buy Milk");
  cout << "\nAdding \"Exercise\" to the list\n\n";
  list.add("Exercise");
  cout << "Adding \"    \" to the list\n";
  list.add("    ");
  cout << "\nAdding \"\" to the list\n";
  list.add("");

  cout << "\nCompleting \"Buy Milk\"\n";
  list.complete("Buy Milk");
  
  cout << "\nThe To Do List items are:\n";
  list.all();

  cout << "\nThe completed items are:\n";
  list.complete();

  cout << "\nThe incomplete items are:\n";
  list.incomplete();

  cout << "\nAdding \"Buy Milk\" to the list again\n";
  list.add("Buy Milk");

  cout << "\nThe incomplete items are:\n";
  list.incomplete();

  cout << "\nNow if I clear the To Do List...\n";
  list.clear();

  cout << "\nThe To Do List items are:\n";
  list.all();

  cout << "\nNow to test the tag functionality...\n";

  vector<string> beet_tags = { "food", "garden", "spring" };
  list.add("Sow beet seeds", beet_tags);

  vector<string> dinner_tags = { "food", "social" };
  list.add("Go out for dinner with my wife", dinner_tags);

  vector<string> run_tags = {"exercise"};
  list.add("Go for a run", run_tags);
  
  cout << "\nHere are my tasks tagged with \"food\":\n";
  list.tagged_with("food");

  cout << "\nHere are my tasks tagged with \"music\":\n";
  list.tagged_with("music");

  cout << "\nNow if I complete my task \"Sow beet seeds\"...\n";
  list.complete("Sow beet seeds");

  cout << "\nHere are my tasks tagged with \"food\":\n";
  list.tagged_with("food");

  cout << "\nHere are my tasks tagged with \"music\":\n";
  list.tagged_with("music");
}