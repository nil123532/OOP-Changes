#include "Grade.h"

#include <string>

#include "Student.h"

Grade::Grade(int stud_id, int course_id, std::string assignment, int value) {
  this->assignment = assignment;
  this->value = value;
  this->student_id = stud_id;
  this->course_id = course_id;
}

Grade::~Grade() {}