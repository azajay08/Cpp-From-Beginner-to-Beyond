#include <iostream>
using namespace std;

void can_you_drive(int age) {
	//----WRITE YOUR CODE BELOW THIS LINE----

	if (age >= 16)
		cout << "Yes - you can drive!";
	else
		cout << "Sorry, come back in " << 16 - age << " years";

	//----WRITE YOUR CODE ABOVE THIS LINE----
}