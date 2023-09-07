// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.
#include <string>

std::string reverse_string(const std::string &str) {
	std::string reversed;
	// Write your code below this line
	for (int i {str.size() - 1}; i >= 0; i--) {
		reversed += str[i];
	}

	// Write your code abocve this line
	return reversed;
}