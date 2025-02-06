#include <iostream>
#include "../good_submission/Student.h"
#include "../good_submission/Instructor.h"
#include "../good_submission/Course.h"
#include "../good_submission/Person.h"
#include <vector>

int main(){
    
    Course c1(1234, "OOP");
    std::vector<Person*>& my_persons = c1.get_persons();

    Student* s1 = new Student("Seb", 1884670);
    Instructor* i1 = new Instructor("Dr. V");
    c1.addPerson(s1);
    c1.addPerson(i1);

    std::cout << "First Person is: " << my_persons[0]->get_name() << std::endl;
    std::cout << "Second Person is: " << my_persons[1]->get_name() << std::endl;
    
    delete s1;  
    delete i1;



    
    return 0;
}