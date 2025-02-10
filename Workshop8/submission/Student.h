#ifndef STU_G
#define STU_G

#include <string>

#include "Person.h"

class Student : public Person {
 private:
  int id;

 public:
  Student();
  Student(std::string name, int id);
  ~Student();
};

#endif