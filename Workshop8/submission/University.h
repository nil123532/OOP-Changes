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
  void addCourse(Course new_course);
  Gradebook* get_gradebook();
  std::vector<Course> get_courses(); //NR - Getting courses to ensure that the courses are destroyed when the university is destroyed
  ~University();
};

#endif