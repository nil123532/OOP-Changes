#include "Student.h"
#include "University.h"

int main() {
  // creating uni
  University adl("University of Adelaide", "south Australia");
  // creating adding course
  Course OOP(1234, "OOP");
  adl.addCourse(1234, "OOP");
  // creating student and adding them
  Student* seb = new Student("Seb", 1884670);
  OOP.addPerson(seb);

  // adding grades

  adl.get_gradebook()->addGrade(1884670, 1234, "assign 1", 90);
  adl.get_gradebook()->addGrade(1884670, 1234, "assign 2", 30);
  adl.get_gradebook()->addGrade(1884670, 1234, "assign 3", 100);

  //   deleting stuff

  delete seb;
  return 0;
}