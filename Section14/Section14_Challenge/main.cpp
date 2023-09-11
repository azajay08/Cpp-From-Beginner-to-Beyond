// Section 14
// Challenge - Solution 1
// Member methods
#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {

	cout << boolalpha << endl;
	cout << "Equals, not equals:" << endl;
	cout << "frank compared to frank:" << endl;
	Mystring a {"frank"};
	Mystring b {"frank"};
	cout << (a==b) << endl;         // true
	cout << (a!=b) << endl;           // false

	cout << "\nEquals, not equals, less than, more than:" << endl;
	cout << "frank compared to george:" << endl;
	b = "george";
	cout << (a==b) << endl;         // false
	cout << (a!=b) << endl;          // true
	cout << (a<b) << endl;         // true
	cout << (a>b) << endl;          // false
//
	cout << "\nOutput stream:" << endl;
	Mystring s1 {"FRANK"};
	
	cout << s1 << endl;
	cout << "\nLower case conversion with '-':" << endl;
	s1 = -s1;					// makes lower case
	cout << s1 << endl;             // frank              
//
	cout << "\nConcatenate strings:" << endl;
	cout << "+ *****:" << endl;
	s1 = s1 + "*****";
	cout << s1 << endl;             // frank*****       
//
	cout << "+= -----:" << endl;
	s1 += "-----";                      // frank*****-----
	cout << s1 << endl;
//
	cout << "\nMultiplying strings:" << endl;
	cout << "abc * 3:" << endl;
	Mystring s2{"abc "};
	s1 = s2 * 3;
	cout << s1 << endl;           // 123451234512345
//
	cout << "abcdef * 5:" << endl;
	Mystring s3{"abcdef"};  
	s3 *= 5;
	cout << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef
//
	cout << "\nInput stream:" << endl;
	Mystring repeat_string;
	int repeat_times;
	cout << "Enter a string to repeat: " << endl;
	cin >> repeat_string;
	cout << "How many times would you like it repeated? " << endl;
	cin >> repeat_times;
	repeat_string *= repeat_times;
	cout << "The resulting string is: " << repeat_string << endl;
//
//	cout << (repeat_string * 12) << endl;
//
	cout << "\nAdding multiple strings:" << endl;
	repeat_string = "RepeatMe";
	cout << (repeat_string + repeat_string + repeat_string) << endl;

	cout << "Adding += Multiplied strings * 3:" << endl;
	repeat_string += (repeat_string * 3);
	cout << repeat_string << endl;

	repeat_string = "RepeatMe";
	repeat_string += (repeat_string + repeat_string + repeat_string);
	cout << "\nrepeat_string += (repeat_string + repeat_string + repeat_string):" << endl;
	cout << repeat_string << endl;
//
//
	cout << endl;
	
	
	cout << "\nPre-increment:" << endl;
	cout << "Frank to FRANK:" << endl;
	Mystring s = "Frank";
	++s;
	cout << s << endl;                  // FRANK
	cout << "FRANK to frank:" << endl;
	s = -s; 
	cout << s << endl;                  // frank
	Mystring result;
	result = ++s;                           
	cout << s << endl;                  // FRANK
	cout << result << endl;           // FRANK

	cout << "\nPost-increment:" << endl;
	cout << "Frank to FRANK:" << endl;
	s = "Frank";
	s++;
	cout << s << endl;                  // FRANK
	cout << "FRANK to frank:" << endl;
	s = -s;
	cout << s << endl;                  // frank
	result = s++;
	cout << s << endl;                  // FRANK
	cout << result << endl;           // frank
	return 0;
}

