#ifndef UNI_G
#define UNI_G

#include <string>

#include "Course.h"
#include "Gradebook.h"

using namespace std;

class University {
 private:
  string name;
  string location;
  Gradebook* gradebook;
  std::vector<Course> cou;

 public:
  University(string name, string location);
  void addCourse(int id, string name);
  Gradebook* get_gradebook();
  ~University();
};

#endif