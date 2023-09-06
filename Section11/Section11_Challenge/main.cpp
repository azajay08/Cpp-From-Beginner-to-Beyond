#include <iostream>
#include <vector>

using namespace std;

void print_unknown_selection() {
	cout << "Unknown selection, please try again." << endl;
}

void print_goodbye() {
	cout << "Goodbye!" << endl;
}

void get_largest(const vector <int> &vec) {
	if (vec.size() == 0)
		cout << "Unable to select largest - list is empty" << endl;
	else {
		int largest {vec.at(0)};
		for (auto val: vec) {
			if (val > largest)
				largest = val;
		}
		cout << "\nThe largest value in the list is: " << largest << endl;
	}
	cout << endl;
}

void get_smallest(const vector <int> &vec) {
	if (vec.size() == 0)
		cout << "Unable to select smallest - list is empty" << endl;
	else {
		int smallest {vec.at(0)};
		for (auto val: vec) {
			if (val < smallest)
				smallest = val;
		}
		cout << "\nThe smallest value in the list is: " << smallest << endl;
	}
	cout << endl;
}

void print_mean(const vector <int> &vec) {
	if (vec.size() == 0)
		cout << "Unable to calculate mean - list is empty" << endl;
	else {
		int total {};
		for (auto val: vec)
			total += val;
		cout << "The mean is: " << total / vec.size() << endl;
	}
	cout << endl;
}

void add_number(vector <int> &vec) {
	int num_to_add {};
	cout << "\nEnter a integar to add to the list: ";
	cin >> num_to_add;
	vec.push_back(num_to_add);
	cout << num_to_add << " added" << endl;
}

void print_numbers(const vector <int> &vec) {
	if (vec.size() == 0)
		cout << "[] - the list is empty" << endl;
	else {
		cout << "[ ";
		for (auto val: vec)
			cout << val << ' ';
		cout << "]";
	}
	cout << endl;
}

void show_menu() {
	cout << "\nP - Print numbers" << endl;
	cout << "A - Add numbers" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "Q - Quit" << endl;
	cout << endl;
	cout << "Enter your choice: " << endl;
}

char get_input() {
	char selection {};
	cin >> selection;
	return toupper(selection);
}

int main()
{
	vector <int> vec {};
	char selection {};
	do {
		show_menu();
		selection = get_input();
		if (selection == 'P') {
			print_numbers(vec);
		} else if (selection == 'A') {
			add_number(vec);
		} else if (selection == 'M') {
			print_mean(vec);
		} else if (selection == 'S') {
			get_smallest(vec);
		} else if (selection == 'L') {
			get_largest(vec);
		} else if (selection == 'Q') {
			print_goodbye();
		} else
			print_unknown_selection();
	} while (selection != 'Q');
	return 0;
}
