#include "University.h"

#include <string>

University::University(string name, string location) {
  this->name = name;
  this->location = location;
  gradebook = new Gradebook();
}

void University::addCourse(int id, string name) {
  Course a(id, name);

  cou.push_back(a);
}

Gradebook* University::get_gradebook() { return gradebook; }
University::~University() { delete gradebook; }