#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
	friend std::ostream &operator<<(std::ostream &out, const Mystring &obj);
	friend std::istream &operator>>(std::istream &in, Mystring &obj);
	
private:
	char *str;
public:
	Mystring();
	Mystring(const char *s);
	Mystring(const Mystring &source);
	Mystring(Mystring &&source);
	~Mystring();
	
	void display() const;
	
	int get_length() const;
	const char *get_str() const;
	
	bool operator==(const Mystring &obj) const;
	bool operator!=(const Mystring &obj) const;
	bool operator<(const Mystring &obj) const;
	bool operator>(const Mystring &obj) const;
	
	Mystring &operator=(const Mystring &obj);
	Mystring &operator=(Mystring &&obj);
	
	Mystring operator-() const;
	Mystring operator+(const Mystring &obj) const;
	Mystring &operator+=(const Mystring &obj);
	Mystring operator*(int n) const;
	Mystring &operator*=(int n);

	Mystring &operator++();		// pre-increment    ++s1;
	Mystring operator++(int);		// post-increment   s1++;

};

#endif // _MYSTRING_H_
