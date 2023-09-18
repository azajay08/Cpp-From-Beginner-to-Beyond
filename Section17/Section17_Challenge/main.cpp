#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test {
private:
	int data;
public:
	Test() : data{0} { cout << "\tTest constructor (" << data << ")" << endl; }
	Test(int input) : data {input} { cout << "\tTest constructor (" << data << ")" << endl; }
	int get_data() const { return data; }
	~Test() {cout << "\tTest destructor (" << data << ")" << endl; }
};

unique_ptr<vector<shared_ptr<Test>>> make() {
	return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &vec, int num) {
	int input;
	for (int i {1}; i <= num; i++) {
		cout<< "Enter data point [" << i << "] : ";
		cin >> input;
		vec.push_back(make_shared<Test>(input));
	}
}

void display(const vector<shared_ptr<Test>>&vec) {
	cout << "\tDisplaying vector data" << endl;
	cout << "=============================" << endl;
	for (const auto &ptr : vec)
		cout << ptr->get_data() << endl;
	cout << "=============================" << endl;
}

int main()
{
	unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
	vec_ptr = make();
	cout << "How many data points do you want to enter: ";
	int num;
	cin >> num;
	fill(*vec_ptr, num);
	display(*vec_ptr);
	return 0;
}
