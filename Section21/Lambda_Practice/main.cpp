#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

class Person {
	friend std::ostream &operator<<(std::ostream &os, const Person &rhs);
private:
	std::string name;
	int age;
public:
	Person(std::string name, int age) : name{name}, age{age} {};
	Person(const Person &p): name{p.name}, age{p.age} { }
	~Person() = default;
		std::string get_name() const { return name; }
	void set_name(std::string name) {this->name = name; };
	int get_age() const {return age; }
	void set_age(int age) {this->age = age; }
};

std::ostream &operator<<(std::ostream &os, const Person &rhs) {
	os << "[Person: " <<rhs.name << " : " <<rhs.age << "]";
	return os;
}

void test5()
{
	std::cout << "\n\n---Test5 --------------------------" << std::endl;
	
	Person person1("Larry", 18);
	Person person2("Moe", 30);
	Person person3("Curly", 25);
	
	std::vector<Person> people {person1,person2,person3};
	
	// Sort people by name in ascending order
	std::sort(people.begin(), people.end(), [] (Person lhs, Person rhs) {
        return lhs.get_name() < rhs.get_name();
    });
	
	// Displays people sorted by name in ascending order
	for (Person person : people)
		std::cout << person << std::endl;
		
	std::cout << "\n";
		
	// Sort people by age in descending order
	std::sort(people.begin(), people.end(), [] (Person lhs, Person rhs) {
        return lhs.get_age() > rhs.get_age();
    });
	
	// Displays people sorted by age in descending order
	for (Person person : people)
		std::cout << person << std::endl;
}

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

	std::cout << std::endl;

	test5();
	return 0;
}