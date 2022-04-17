#include "Date.h"
#include <iostream>
#include <sstream>

using namespace std;

void Date::Init(Triad tValue) {
	setTriad(tValue);
}

void Date::Display() const {
	t.Display();
}

void Date::Read() {
	Triad tValue;

	tValue.Read();
	Init(tValue);
}

Date::Date()
{
}

Date::Date(const Triad t1) : t(t1)
{
}

Date::Date(const Date& d) : t(d.t)
{
}



bool Date::Le(Date d) const {
	return t.Le(d.getTriad());
}

bool Date::Leq(Date d) const {
	return t.Leq(d.getTriad());
}

bool Date::Eq(Date d) const {
	return t.Eq(d.getTriad());
}

bool Date::Ne(Date d) const {
	return t.Ne(d.getTriad());
}

bool Date::Gt(Date d) const {
	return t.Gt(d.getTriad());
}

bool Date::Gtq(Date d) const {
	return t.Gtq(d.getTriad());
}
