#include "Student.h"

Student::Student() : Person(), id(0) {}
Student::Student(std::string name, int id) : Person(name), id(id) {}
Student::~Student() {
    std::cout << "student destructor called" << std::endl;
}