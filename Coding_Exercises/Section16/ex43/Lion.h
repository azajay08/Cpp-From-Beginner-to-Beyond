#ifndef LION_H
#define LION_H

/****************************************************************************************
Provide the declaration here for the Lion class.
Remember, this is the declaration only.
This file should contain the Lion class and the prototypes for the Lion class' methods
****************************************************************************************/

#include "Animal.h"

// Derived class Lion
// Write your code below this line

class Lion : public Animal {
public:
	std::string get_noise() override; // Pure virtual function
	int get_num_legs() override; // Pure virtual function
};

// Write your code above this line
#endif