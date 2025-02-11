# Workshop 8

## Changes to the Workshop Description
See image.png and new_diagram.jpg

1. **Use of `std::vector` for Aggregation/Composition**  
   - You are explicitly required to use `std::vector` to implement aggregation and composition in this workshop.

2. **Returning a `std::vector` by Reference**  
   - Your function(s) should return a `std::vector` **by reference** so that `main.cpp` can access and modify it as needed.  
   - Note: This approach is not ideal in terms of encapsulation. A preferable design might involve a method such as `addCourse(newCourse : Course)` instead of `addCourse(id : int,name : string)`.

3. **Additional Getters**  
   - New getter methods have been introduced to facilitate evaluation and testing of your code.

4. **More Detailed Class Diagrams**  
   - The class diagrams now include more details to help you quickly grasp core OOP concepts.

5. **Custom Destructor Messages**  
   - Each class must print a custom message in its destructor to confirm that resources have been properly deallocated and relationships have been well defined.

## Grading

- **test-1-1.cpp**  
  Verifies the correct implementation of the `Person` and `Course` classes.

- **test-1-2.cpp**  
  Verifies the correct implementation of the `Gradebook` and `Grade` classes.

- **test-1-3.cpp**  
  Verifies the correct implementation of aggregation/composition and ensures proper memory cleanup. Custom destructor messages are essential for this test.
