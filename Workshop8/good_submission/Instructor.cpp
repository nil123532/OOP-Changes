
#include "Instructor.h"

Instructor::Instructor() {}

Instructor::Instructor(std::string name) : Person(name) {}

Instructor::~Instructor() {
    std::cout << "instructor destructor called" << std::endl;    
}