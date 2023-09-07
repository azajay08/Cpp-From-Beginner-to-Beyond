// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.

int find_max_element(int* arr, int size) {
	//-- Write your code below this line 
	int largest {arr[0]};
	for (int i {0}; i < size; i++) {
		if (arr[i] > largest)
			largest = arr[i];
	}
	return largest;

	//-- Write your code below this line 
}