#include <string>
#include <vector>
using namespace std;

class Task {
  public:
    string name;
    vector<string> tags;
    bool complete;
    Task(string name, vector<string> tags = {});
};