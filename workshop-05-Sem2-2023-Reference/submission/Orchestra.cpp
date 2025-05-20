// Implementations of methods in class Orchestra

#include "Orchestra.h"

// Default constructor
Orchestra::Orchestra() {
    // Set orchestra size to 0 by default
    orchestra_size = 0;
    current_size = orchestra_size;
}

// Default constructor with input arguments
Orchestra::Orchestra(int size) {
    // Set orchestra size of Orchestra to size
    orchestra_size = size;
    current_size = 0;
    // Dynamically allocate array of "size" many Musician objects
    members = new Musician[size];
}

// Public method obtaining number of musicians
int Orchestra::get_current_number_of_members() {
    return current_size;
}

// Public method to return array of Musicians
Musician* Orchestra::get_members() {
    return members;
}

// Public method to check if given instrument is available
bool Orchestra::has_instrument(std::string instrument) {
    // Iterate through members array
    for (int i = 0; i < current_size; i++) {
        // If instrument is found, return true
        if (members[i].get_instrument() == instrument) {
            return true;
        }
    }
    // If instrument is not found, return false
    return false;
}

// Public method to check if new Musician objects can be added to Orchestra
bool Orchestra::add_musician(Musician new_musician) {
    // Add as long as there is space in members array
    if (current_size >= orchestra_size) {
        return false;
    } else {
        members[current_size] = new_musician;
        current_size++;
        return true;
    }
}

// Destructor for Orchestra
Orchestra::~Orchestra() {}