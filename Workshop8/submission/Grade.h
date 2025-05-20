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
  //Defining Getters to get the values of the private variables
  int get_student_id();
  int get_course_id();
  std::string get_assignment();
  int get_value();
};

#endif
