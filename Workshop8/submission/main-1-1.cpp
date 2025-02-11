#include <iostream>
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
#include "Person.h"
#include <vector>


//Testing Course and Person
int main(){
    
    Course c1(1234, "OOP");

    Student* s1 = new Student("Seb", 1884670);
    Instructor* i1 = new Instructor("Dr. V");
    c1.addPerson(s1);
    c1.addPerson(i1);

    std::vector<Person*> my_persons = c1.get_persons();
    std::cout << "Name of Student:" << my_persons[0]->get_name() << std::endl;
    std::cout << "Id of Student:" << dynamic_cast<Student*>(my_persons[0])->get_id() << std::endl; // NR - Introducing students to casting
    std::cout << "Name of Instructor:" << my_persons[1]->get_name() << std::endl;
    
    delete s1;  
    delete i1;



    
    return 0;
}

