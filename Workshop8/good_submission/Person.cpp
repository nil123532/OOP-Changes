#include "Person.h"

Person::Person() { name = "null"; }
Person::Person(std::string name) { this->name = name; }

std::string Person::get_name() { return name; } 

Person::~Person() {
    std::cout << "person destructor called" << std::endl;
}