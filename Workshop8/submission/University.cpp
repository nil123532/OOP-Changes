#include "University.h"

#include <string>

University::University(string name, string location) {
  this->name = name;
  this->location = location;
  gradebook = new Gradebook();
}

void University::addCourse(Course new_course) {
  cou.push_back(new_course);
}

Gradebook* University::get_gradebook() { return gradebook; }

std::vector<Course> University::get_courses() { return cou; } //NR - Implementation of get_courses

University::~University() { delete gradebook; }