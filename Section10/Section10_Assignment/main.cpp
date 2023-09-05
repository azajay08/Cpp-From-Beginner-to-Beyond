// Letter Pyramid
// Written by Aaron Jones

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string user_input {};
	
	cout << "Please enter a string of letter so I can create a Letter Pyramid from it: ";
	getline(cin, user_input);
	
	int len = static_cast<int>(user_input.length());
	
	int i {0};
	for (char c: user_input) {
		int spaces = len - i;
		while (spaces > 0) {
			cout << " ";
			--spaces;
		}
		for (int j {0}; j < i; j++) {
			cout << user_input.at(j);
		}
		
		cout << c;
		
		for (int j {i - 1}; j >= 0; --j) {
			cout << user_input.at(j);
		}
		cout << endl;
		i++;
	}
	return 0;
}
