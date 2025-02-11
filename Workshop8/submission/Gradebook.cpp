#include "Gradebook.h"

Gradebook::Gradebook() {
}
void Gradebook::addGrade(int stud_id, int course_id, std::string assignment,
                         int value) {
  Grade grade(stud_id, course_id, assignment, value);
  grad.push_back(grade);
}

std::vector<Grade> Gradebook::get_grades() {
  return grad;
}

Gradebook::~Gradebook() {
  std::cout << "gradebook destructor called" << std::endl;
}