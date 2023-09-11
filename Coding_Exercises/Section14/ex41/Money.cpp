#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----

Money operator+(const Money &obj1, const Money &obj2) {
	int total = (obj1.dollars + obj2.dollars) * 100;
	total += obj1.cents + obj2.cents;
	return Money(total);
}

//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


