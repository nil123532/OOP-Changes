#ifndef GRADE_G
#define GRADE_G

#include <string>
#include <iostream>
class Grade {
 private:
  std::string assignment;
  int value;
  int student_id;
  int course_id;

 public:
  Grade(int stud_id, int course_id, std::string assignment, int value);
  ~Grade();
};

#endif
