#include <iostream>
#include <fstream>

void change_to_upper(std::string &str) {
	for (char &c : str)
		c = std::toupper(c);
}

bool word_match(std::string curr,  std::string to_find) {
	
	change_to_upper(curr);
	change_to_upper(to_find);
	
	std::size_t found = curr.find(to_find);
	if (found == std::string::npos)
		return false;
	else
		return true;
}

int main()
{
	std::ifstream in_file {};
	std::string word_read {};
	std::string to_find {};
	
	int word_count {0};
	int match_count {0};
	
	std::string filename {"romeoandjuliet.txt"};
	
	in_file.open(filename);
	if (!in_file) {
		std::cout << "Error opening file" << std::endl;
		return 1;
	}
	std::cout << "Enter a substring to search for: ";
	std::cin >> to_find;
	while (in_file >> word_read) {
		word_count++;
		if (word_match(word_read, to_find)) {
			match_count++;
//			std::cout << word_read << std::endl;
//			std::cout << to_find << std::endl;
		}
	}
	std::cout << word_count << " words were searched..." << std::endl;
	std::cout << "The substring " << to_find << " was found " << match_count << " times " << std::endl;
	
	
	in_file.close();
	std::cout << std::endl;
	return 0;
}
