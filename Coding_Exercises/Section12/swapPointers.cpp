// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.

void swapPointers(int* ptr1, int* ptr2) {
	//-- Write your code below this line
	// Without a temp
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;

	//-- Write your code above this line
}
