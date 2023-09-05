#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vec {};
	char user_input {};
	do {
		cout << "\nP - Print numbers" << endl;
		cout << "A - Add numbers" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit" << endl;
		cout << endl;
		cout << "Enter your choice: " << endl;
		
		cin >> user_input;
		if (user_input == 'p' || user_input == 'P') {
			if (vec.size() == 0)
				cout << "[] - the list is empty" << endl;
			else {
				cout << "[ ";
				for (auto val: vec)
					cout << val << ' ';
				cout << "]";
			}
			cout << endl;
		} else if (user_input == 'a' || user_input == 'A') {
			int num_to_add {};
			cout << "\nEnter a integar to add to the list: ";
			cin >> num_to_add;
			vec.push_back(num_to_add);
			cout << num_to_add << " added" << endl;
			cout << endl;
		} else if (user_input == 'm' || user_input == 'M') {
			if (vec.size() == 0)
				cout << "Unable to calculate mean - list is empty" << endl;
			else {
				int total {};
				for (auto val: vec)
					total += val;
				cout << "The mean is: " << total / vec.size() << endl;
			}
			cout << endl;
		} else if (user_input == 's' || user_input == 'S') {
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
		} else if (user_input == 'l' || user_input == 'L') {
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
		} else if (user_input == 'q' || user_input == 'Q') {
			cout << "Goodbye!" << endl;
		} else
			cout << "Unknown selection, please try again." << endl;
		
		
	} while (user_input != 'q' && user_input != 'Q');
	return 0;
}
