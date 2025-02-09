// Implementations of methods in class Musician

#include "Musician.h"

// Default constructor
Musician::Musician() {
    // Set instrument name to "null" and years of experience to "0"
    instrument = "null";
    experience = 0;
}

// Constructor with input arguments
Musician::Musician(std::string set_instrument, int set_experience) {
    // Set instrument name and years of experience according to input arguments
    instrument = set_instrument;
    experience = set_experience;
}

// Method to get instrument name
std::string Musician::get_instrument() {
    return instrument;
}

// Method to get years of experience
int Musician::get_experience() {
    return experience;
}
