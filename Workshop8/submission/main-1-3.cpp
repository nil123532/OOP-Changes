//Testing composition relationship with course and university 

#include <iostream>
#include "Student.h"
#include "University.h"
#include "Course.h" 
#include <vector>


int main() {
    
    {
        // creating uni
        University adl("University of Adelaide", "South Australia");
        // creating course
        Course comp(1234,"Computer Science");

        // adding student to course
        Person* seb = new Student("Seb", 1884670);
        comp.addPerson(seb);

        // adding course to uni
        adl.addCourse(comp);

        // creating student and adding them
        // adding grades
        Gradebook* main_gb = adl.get_gradebook(); 
        main_gb->addGrade(1884670, 1234, "assign 1", 90);
        main_gb->addGrade(1884670, 1234, "assign 2", 30);
        main_gb->addGrade(1884670, 1234, "assign 3", 100);

        delete seb;
    }

    return 0;
}