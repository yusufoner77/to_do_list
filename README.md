# To Do List

The purpose of this lab is to create a TodoList class that can manage tasks. A user should be able to add a new task, mark a task as complete, view complete / incomplete tasks, and clear the list.

In addition, this to-do list will reject blank entries and duplicate entries. The user also has the ability to add tags to their tasks, and filter through the tasks by tag.

### The program has the following functions:  
add(...) which adds a task to the list. If you've defined tags for it, you can include those as an argument, but they are not required.  
complete(...) which completes a task from the list.  
all() which shows all items in the list (both complete and incomplete).  
complete() which shows any completed items in the list.  
incomplete() which shows any incomplete items in the list.  
clear() which deletes all of the tasks in the todo list (both complete and incomplete).  
tagged_with(...) which shows all tasks on the list with that tag (both complete and incomplete).  

You can reference the driver program to see some examples of how to use the to do list.  

In order to run the program, you must be able to compile and run C++ programs on your machine.  

### To run the program:  
```bash
g++ -std=c++11 main.cpp Task.cpp ToDoList.cpp
```

