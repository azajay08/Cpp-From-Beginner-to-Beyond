#include <iostream>

using namespace std;

int* apply_all(const int *const arr1, int size1, const int *const arr2, int size2) {
//	const arrays so that nothing is modified
	int *result {};
	result = new int{size1 * size2};
	
	int pos {0};
	for (size_t i {0}; i < size2; i++) {
		for (size_t j {0}; j < size1; j++) {
			result[pos] = arr1[j] * arr2[i];
			pos++;
		}
	}
	
	return result;
}

void	print(int *arr, size_t size) {
	cout << "[ ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << "]\n";
}

int main()
{
	const size_t array1_size {5};
	const size_t array2_size {3};
	
	int array1[] {1, 2, 3, 4, 5};
	int array2[] {12, 20, 30};
	
	cout << "Array 1: ";
	print(array1, array1_size);
	
	cout << "Array 2: ";
	print(array2, array2_size);
	
	int *results = apply_all(array1, array1_size, array2, array2_size);
	cout << "Result: ";
	print(results, array1_size * array2_size);
	
	delete [] results;
	cout << endl;
	return 0;
}
