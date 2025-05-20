// Header file containing class Musician

#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
    private:
        std::string instrument;     // Name of instrument
        int experience;     // Years of experience with instrument

    public:
        Musician();     // Default constructor
        Musician(std::string set_instrument, int set_experience);       // Default constructor with input arguments
        std::string get_instrument();       // Function to access instrument field
        int get_experience();       // Function to access experience field
    };

#endif
