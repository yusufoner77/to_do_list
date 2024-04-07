#include <string>
#include <vector>
#include "Task.hpp"
using namespace std;

class ToDoList {
  public:
    ToDoList();
    vector<Task> vec;
    void pretty_print(Task task);
    void add(string task_name);
    void complete(string task_name);
    void all();
    void complete();
    void incomplete();
    void clear();
    bool check_for_duplicate(string task_name);
};