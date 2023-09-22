// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>

bool is_palindrome(const std::string& s)
{
	std::queue<char> q;
	std::stack<char> st;
	for (char c : s) {
		if (std::isalpha(c)) {
			q.push(std::toupper(c));
			st.push(std::toupper(c));
		}
	}

	while (q.size() > 1) {
		if (q.front() == st.top()) {
			q.pop();
			st.pop();
		} else
			return false;
	}
	return true;
}

int main()
{
	std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
		"avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
		"A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

	std::cout << std::boolalpha;
	std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
	for(const auto& s : test_strings) {
		std::cout << std::setw(5) << std::left << is_palindrome(s) << ": " << s << std::endl;
	}
	std::cout << std::endl;
	return 0;
}