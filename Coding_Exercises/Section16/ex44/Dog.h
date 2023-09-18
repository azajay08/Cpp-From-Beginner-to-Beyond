#ifndef DOG_H
#define DOG_H

#include "Animal.h"

// Declare the Dog class below this line
class Dog : public Animal {
public:
	Dog(const std::string& name, int age) : Animal(name, age) {}
	std::string get_noise() override;
	int get_num_legs() override;
};

// Declare the Dog class above this line

#endif /* DOG_H */
 