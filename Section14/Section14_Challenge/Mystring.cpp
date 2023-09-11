#include <iostream>
#include <cstring>
#include "Mystring.h"


Mystring::Mystring() : str{nullptr} {
	str = new char[1];
	*str = '\0';
}

Mystring::Mystring(const char *s) : str{nullptr} {
	if (s == nullptr) {
		str = new char [1];
		*str = '\0';
	} else {
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}
}

Mystring::Mystring(const Mystring &source) : str{nullptr} {
	str = new char[strlen(source.str) + 1];
	strcpy(str, source.str);
}

Mystring::Mystring(Mystring &&source) : str(source.str) {
	source.str = nullptr;
}

Mystring::~Mystring() {
	delete [] str;
}

void Mystring::display() const {
	std::cout << str << " : " << get_length() << std::endl; 
}

int Mystring::get_length() const { return strlen(str); }

const char *Mystring::get_str() const { return str; }

bool Mystring::operator==(const Mystring &obj) const {
	if (std::strcmp(this->str, obj.str) == 0)
		return true;
	return false;
}

bool Mystring::operator!=(const Mystring &obj) const {
	return !(obj == *this);
}

Mystring &Mystring::operator=(const Mystring &obj) {
	if (this == &obj)
		return *this;
	delete [] str;
	str = new char [strlen(obj.str) + 1];
	strcpy(str, obj.str);
	return *this;
}

Mystring &Mystring::operator=(Mystring &&obj) {
	if (this == &obj)
		return *this;
	delete [] str;
	str = obj.str;
	obj.str = nullptr;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Mystring &obj) {
	out << obj.str;
	return out;
}

std::istream &operator>>(std::istream &in, Mystring &obj) {
	char *buff = new char[1000];
	in >> buff;
	obj = Mystring(buff);
	delete [] buff;
	return in;
}

bool Mystring::operator>(const Mystring &obj) const {
	return (strcmp(this->str, obj.str) > 0);
}

bool Mystring::operator<(const Mystring &obj) const {
	return (strcmp(this->str, obj.str) < 0);
}

Mystring Mystring::operator-() const {
	char *buff = new char[strlen(this->str) + 1];
	strcpy(buff, this->str);
	for (size_t i {0}; i < strlen(buff); i++)
		buff[i] = tolower(buff[i]);
	Mystring temp {buff};
	delete [] buff;
	return temp;
}

Mystring Mystring::operator+(const Mystring &obj) const {
	char *buff = new char[strlen(this->str) + strlen(obj.str) + 1];
	strcpy(buff, this->str);
	strcat(buff, obj.str);
	Mystring temp {buff};
	delete [] buff;
	return temp;
}

Mystring &Mystring::operator+=(const Mystring &obj) {
	*this = *this + obj;
	return *this;
}

Mystring Mystring::operator*(int n) const {
	Mystring temp;
	for (int i {1}; i <= n; i++)
		temp += *this;
	return temp;
}

Mystring &Mystring::operator*=(int n) {
	*this = *this * n;
	return *this;
}

// Pre-increment - make the string upper-case
Mystring &Mystring::operator++() {	// pre-increment
	for (size_t i {0}; i < strlen(str); i++)
		str[i] = toupper(str[i]);   
	return *this;
}

//Post-increment - make the string upper-case
Mystring Mystring::operator++(int) {	// post-increment
	Mystring temp (*this);			// make a copy
	operator++();					// call pre-increment - make sure you call preincrement!
	return temp;						// return the old value
}

