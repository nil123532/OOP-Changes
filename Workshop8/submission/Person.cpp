#include "Person.h"

Person::Person() { name = "null"; }
Person::Person(std::string name) { this->name = name; }

std::string Person::get_name() { return name; } 
