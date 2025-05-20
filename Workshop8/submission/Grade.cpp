#include "Grade.h"

#include <string>

#include "Student.h"

Grade::Grade(int stud_id, int course_id, std::string assignment, int value) {
  this->assignment = assignment;
  this->value = value;
  this->student_id = stud_id;
  this->course_id = course_id;
}

int Grade::get_student_id() {
  return student_id;
}

int Grade::get_course_id() {
  return course_id;
}

std::string Grade::get_assignment() {
  return assignment;
}

int Grade::get_value() {
  return value;
}
