#include <iostream>
#include <fstream>


int main()
{
	std::ifstream in_file {"romeoandjuliet.txt"};
	std::ofstream out_file {"romeojuliet_out.txt"};

	if (!in_file.is_open()) {
		std::cerr << "Error opening input file" << std::endl;
		return 1;
	}
	if (!out_file.is_open()) {
		std::cerr << "Error opening output file" << std::endl;
		return 1;
	}
	
	int line_count {1};
	std::string line {};
	std::cout << "Copying lines to output file" << std::endl;
	while (getline(in_file, line)) {
		if (line == "")
			out_file << std::endl;
		else {
			out_file << std::setw(7) << std::left << line_count
					<< line << std::endl;
			line_count++;
		}
	}

	std::cout << "Copying complete" << std::endl;
	in_file.close();
	out_file.close();
	return 0;
}
