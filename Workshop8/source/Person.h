#ifndef PERS_G
#define PERS_G

#include <string>
#include <iostream>

class Person {
 protected:
  std::string name;

 public:
  Person();
  Person(std::string name);
  std::string get_name(); //NR - Getting name to confirm if persons will still exist after course is destroyed

};

#endif
