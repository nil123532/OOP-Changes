#include <iostream>
#include "Gradebook.h"
#include "Grade.h"
#include <vector>

//Testing Gradebook and Grade
int main(){
    Gradebook gb;
    gb.addGrade(1884670, 1234, "assign 1", 90);

    std::vector<Grade> grades = gb.get_grades();
    for (Grade g : grades){
        std::cout << "Student ID:" << g.get_student_id() << std::endl;
        std::cout << "Course ID:" << g.get_course_id() << std::endl;
        std::cout << "Assignment:" << g.get_assignment() << std::endl;
        std::cout << "Value:" << g.get_value() << std::endl;
    }
}