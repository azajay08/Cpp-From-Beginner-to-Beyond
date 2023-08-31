#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
	vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
	cout << vowels[0] << endl;
	cout << vowels[4] << endl;
	
	vector <int> test_scores (3, 100);
	
	cout << test_scores.at(2) << endl;
	cout << "There are " << test_scores.size() << " scores in the vector." << endl;
	
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	
	cout << "Enter three test score: ";
	cin >> test_scores.at(0);
	cin >> test_scores.at(1);
	cin >> test_scores.at(2);
	
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	
	int score_to_add {0};
	
	cout << "Enter a test score to add: ";
	cin >> score_to_add;
	
	test_scores.push_back(score_to_add);
	
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;
	
	cout << "There are now " << test_scores.size() << " scores in the vector." << endl;
	
	vector <vector<int>> movie_ratings
	{
		{1, 2, 3, 4},
		{1, 4, 3, 4},
		{1, 4, 6, 7}
	};
	
	cout << "Movie ratings for reviewer 1 using array syntax:" << endl;
	cout << movie_ratings[0][0] << endl;
	cout << movie_ratings[0][1] << endl;
	cout << movie_ratings[0][2] << endl;
	cout << movie_ratings[0][3] << endl;
	
	cout << "Movie ratings for reviewer 2 using vector syntax:" << endl;
	cout << movie_ratings.at(1).at(0) << endl;
	cout << movie_ratings.at(1).at(1) << endl;
	cout << movie_ratings.at(1).at(2) << endl;
	cout << movie_ratings.at(1).at(3) << endl;
	
	return 0;
}