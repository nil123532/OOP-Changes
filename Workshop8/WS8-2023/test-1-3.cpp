#include <iostream>
#include "../good_submission/Gradebook.h"
#include "../good_submission/Grade.h"
#include <vector>

//Testing Gradebook and Grade
int main(){
    Gradebook gb;
    std::vector<Grade>& grades = gb.get_grades();
    gb.addGrade(1884670, 1234, "assign 1", 90);
    gb.addGrade(1884670, 1234, "assign 2", 30);
    gb.addGrade(1884670, 1234, "assign 3", 100);

    for (Grade g : grades){
        std::cout << "Student ID: " << g.get_student_id() << std::endl;
        std::cout << "Course ID: " << g.get_course_id() << std::endl;
        std::cout << "Assignment: " << g.get_assignment() << std::endl;
        std::cout << "Value: " << g.get_value() << std::endl;
    }
}