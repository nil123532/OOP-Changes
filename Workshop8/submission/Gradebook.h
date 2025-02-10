#ifndef GRADEBOOK_G
#define GRADEBOOK_G

#include <string>
#include <vector>
#include <iostream>
#include "Grade.h"

class Gradebook {
 private:
  std::vector<Grade> grad;

 public:
  Gradebook(/* args */);
  void addGrade(int stud_id, int course_id, std::string assignment, int value);
  //NR - Getting Gradebook back
  std::vector<Grade>& get_grades();
  ~Gradebook();
};

#endif