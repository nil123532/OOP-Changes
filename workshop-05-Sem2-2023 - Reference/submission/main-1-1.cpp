// Driver for Musician.cpp

#include <iostream>
#include "Musician.h"

int main() {
    // Initialise object m1 with default constructor
    Musician m1;
    std::cout << "Default instrument: " << m1.get_instrument() << ", Default experience: " << m1.get_experience() << std::endl;

    // Initialise object m2 with input arguments "guitar" and 5 years of experience
    Musician m2("guitar", 5);
    std::cout << "Instrument: " << m2.get_instrument() << ", Experience: " << m2.get_experience() << std::endl;

    return 0;
}
