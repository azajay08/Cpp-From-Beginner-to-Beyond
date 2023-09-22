#include <iostream>
#include <vector>
// #include <algorithm>
// #include <functional>

void display(std::vector<int> const vec) {
	for (int x : vec)
		std::cout << x << " ";
	std::cout << std::endl;
}

int main() {
	std::vector<int> vec1 {1, 2, 3, 4, 5, 6, 7};
	display(vec1);
	std::for_each(vec1.begin(), vec1.end(), [](int x)
		{std::cout << x * 2 << " ";});

	std::cout << std::endl;

	std::transform(vec1.begin(), vec1.end(), vec1.begin(), [](int x) {return x * 100;});
	display(vec1);
	return 0;
}