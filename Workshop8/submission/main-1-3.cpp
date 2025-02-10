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
        // adding course
        adl.addCourse(1234, "OOP");
        
        std::vector<Course>& my_courses = adl.get_courses();
        
        // creating student and adding them
        Student* seb = new Student("Seb", 1884670);
        my_courses[0].addPerson(seb);        // std::cout << "Course name is:" << (*my_courses)[0].get_name() << std::endl;


        // adding grades
        Gradebook* main_gb = adl.get_gradebook(); 
        main_gb->addGrade(1884670, 1234, "assign 1", 90);
        main_gb->addGrade(1884670, 1234, "assign 2", 30);
        main_gb->addGrade(1884670, 1234, "assign 3", 100);

        delete seb;
    }


    return 0;
}