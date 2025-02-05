#ifndef PERS_G
#define PERS_G

#include <string>

class Person {
 protected:
  std::string name;

 public:
  Person();
  Person(std::string name);

  ~Person();
};

#endif
