#include "Gradebook.h"

Gradebook::Gradebook() {}
void Gradebook::addGrade(int stud_id, int course_id, std::string assignment,
                         int value) {
  Grade a(stud_id, course_id, assignment, value);
  grad.push_back(a);
}
Gradebook::~Gradebook() {}