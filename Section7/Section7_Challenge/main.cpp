#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vector1;
	vector <int> vector2;
	
	vector1.push_back(10);
	vector1.push_back(20);
	
	cout << "The size of vector1 is " << vector1.size() << " and contains:" << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	
	vector2.push_back(100);
	vector2.push_back(200);
	
	cout << "\nThe size of vector2 is " << vector2.size() << " and contains:" << endl;
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	
	vector <vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	cout << "\nContents of vector_2d are:" << endl;
	cout << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << endl;	
	cout << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << endl;	
	
	vector1.at(0) = 1000;
	cout << "\nThe size of vector1 is " << vector1.size() << " and contains:" << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	
	cout << "\nContents of vector_2d now vector1[0] changed to 1000:" << endl;
	cout << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << endl;	
	cout << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << endl;
	
	vector_2d.at(0).at(0) = 1000;
	cout << "\nContents of vector_2d now 0, 0 has been changed:" << endl;
	cout << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << endl;	
	cout << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << endl;	
	
	return 0;
}
 