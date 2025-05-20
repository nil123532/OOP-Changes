# Workshop 8

## Changes to the Workshop Description
See image.png and new_diagram.jpg

1. **Use of `std::vector` for Aggregation/Composition**  
   - You are explicitly required to use `std::vector` to implement aggregation and composition in this workshop.

2. **Additional Getters**  
   - New getter methods have been introduced to facilitate evaluation and testing of your code.

3. **More Detailed Class Diagrams**  
   - The class diagrams now include more details to help you quickly grasp core OOP concepts.

4. **Custom Destructor Messages**  
   - Each class must print a custom message in its destructor to confirm that resources have been properly deallocated and relationships have been well defined.

## Grading

- **test1-1**  
  Verifies the correct implementation of the `Person` and `Course` classes. Additionally, it checks that students can effectively use casting in C++; in particular, a virtual destructor for `Person` is required (since no other virtual functions are present), serving as an introduction to where dynamic casting and static casting should be used.

- **test1-2**  
  Verifies the correct implementation of the `Gradebook` and `Grade` classes.

- **test-1-3.cpp**  
  Verifies the correct implementation of aggregation/composition and ensures proper memory cleanup. Custom destructor messages are essential for this test.
