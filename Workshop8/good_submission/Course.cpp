#include "Course.h"

Course::Course(int id, string name) {
  this->name = name;
  this->id = id;
}
void Course::addPerson(Person* p) { pers.push_back(p); }


// NR - Commenting out because of aggregation behaviour
Course::~Course() {
  std::cout << "course destructor called" << std::endl;
};