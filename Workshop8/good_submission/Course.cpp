#include "Course.h"

Course::Course(int id, string name) {
  this->name = name;
  this->id = id;
}
void Course::addPerson(Person* p) { pers.push_back(p); }
Course::~Course() {
  for (int i = 0; i < pers.size(); i++) {
    delete pers[i];
  }
};