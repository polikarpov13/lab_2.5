#pragma once
#include "Triad.h"
#include <string>
#include <iostream>
class Date
{
private:
	Triad t;

public:
	Triad getTriad() const { return t; }

	void setTriad(Triad tValue) { t = tValue; }

	void Init(Triad t);

	void Display() const;
	void Read();

	Date();
	Date(const Triad t);
	Date(const Date& d);

	bool Le(Date d) const;
	bool Eq(Date d) const;
	bool Gt(Date d) const;
	bool Ne(Date d) const;
	bool Leq(Date d) const;
	bool Gtq(Date d) const;
};

