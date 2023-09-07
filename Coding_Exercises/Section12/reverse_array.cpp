// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.

void reverse_array(int* arr, int size) {
	//-- Write your code below this line 
	for (int i {0}; i < size / 2; i++) {
		int temp {arr[i]};
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}

	//-- Write your code above this line
}

