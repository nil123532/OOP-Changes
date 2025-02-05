#ifndef COURSE_G
#define COURSE_G

#include <string>
#include <vector>
// #include "Grade.h"
#include "Person.h"

using namespace std;
class Course {
 private:
  string name;
  int id;
  std::vector<Person*> pers;

 public:
  Course(int id, string name);
  void addPerson(Person* p);
  ~Course();
};

#endif