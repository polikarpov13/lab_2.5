#include "Triad.h"
#include <sstream>
#include <iostream> 

using namespace std;

void Triad::Init(int firstValue, int secondValue, int thirdValue) {
	setFirst(firstValue);
	setSecond(secondValue);
	setThird(thirdValue);
}

void Triad::Display() const {
	cout << first << "." << second << "." << third << endl;
}

void Triad::Read() {
	int firstValue;
	int secondValue;
	int thirdValue;

	cout << "Enter triad " << endl << endl;

	cout << "first =  "; cin >> firstValue;
	cout << "second =  "; cin >> secondValue;
	cout << "third =  "; cin >> thirdValue;

	Init(firstValue, secondValue, thirdValue);
}

Triad::Triad() : first(0), second(0), third(0)
{}

Triad::Triad(int first, int second, int third) : first(first), second(second), third(third)
{}

Triad::Triad(const Triad& T) : first(T.first), second(T.second), third(T.third)
{}

Triad& Triad::operator = (const Triad& T) {
	this->first = T.first;
	this->second = T.second;
	this->third = T.third;

	return *this;
}

ostream& operator << (ostream& out, const Triad& t) {
	out << string(t);
	return out;
}

istream& operator >> (istream& in, Triad& T) {
	int f, s, t;
	cout << endl;
	cout << "First : "; in >> f;
	cout << "Second : "; in >> s;
	cout << "Third : "; in >> t;

	T.setFirst(f);
	T.setSecond(s);
	T.setThird(t);

	return in;
}

Triad::operator string() const {
	stringstream ss;
	ss << endl;
	ss << first << endl;
	ss << second << endl;
	ss << third << endl;

	return ss.str();
}

bool Triad::Le(Triad t) const {
	if (first < t.first) return true;
	if (first > t.first) return false;
	if (second < t.second) return true;
	if (second > t.second) return false;
	if (third < t.third) return true;
	if (third > t.third) return false;
	return false;
}

bool Triad::Leq(Triad t) const {
	if (first < t.first) return true;
	if (first > t.first) return false;
	if (second < t.second) return true;
	if (second > t.second) return false;
	if (third < t.third) return true;
	if (third > t.third) return false;
	return true;
}

bool Triad::Eq(Triad t) const {
	if ((first == t.first) && (second == t.second) && (third == t.third)) return true;
	return false;
}

bool Triad::Ne(Triad t) const {
	if ((first == t.first) && (second == t.second) && (third == t.third)) return false;	return true;
}

bool Triad::Gt(Triad t) const {
	if (first < t.first) return false;
	if (first > t.first) return true;
	if (second < t.second) return false;
	if (second > t.second) return true;
	if (third < t.third) return false;
	if (third > t.third) return true;
	return false;
}
bool Triad::Gtq(Triad t) const {
	if (first < t.first) return false;
	if (first > t.first) return true;
	if (second < t.second) return false;
	if (second > t.second) return true;
	if (third < t.third) return false;
	if (third > t.third) return true;
	return true;
}

Triad::~Triad(void){}
