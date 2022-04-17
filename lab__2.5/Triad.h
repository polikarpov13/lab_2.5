#pragma once
#include <string>
#include <iostream>

using namespace std;

class Triad
{
private:
	int first, second, third;
public:
	int getFirst() const { return first; }
	int getSecond() const { return second; }
	int getThird() const { return third; }

	void setFirst(int f) { this->first = f; }
	void setSecond(int s) { this->second = s; }
	void setThird(int t) { this->third = t; }

	void Init(int f, int s, int t);
	void Display() const;
	void Read();

	Triad();
	Triad(const int f, const int s, const int t);
	Triad(const Triad& T);

	Triad& operator = (const Triad& T);

	friend ostream& operator << (ostream& out, const Triad& t);
	friend istream& operator >> (istream& in, Triad& t);
	operator string () const;

	bool Le(Triad t) const;
	bool Eq(Triad t) const;
	bool Gt(Triad t) const;
	bool Ne(Triad t) const;
	bool Leq(Triad t) const;
	bool Gtq(Triad t) const;

	~Triad(void);
};

