#pragma once
#include "Triad.h"
class Date : public Triad
{
private:
	Triad date;
public:
	void Init(Triad value);
	void incYear();
	void incMonth();
	void incDay();
	void Display() const;
	void YearConverter();
	void MonthConverter();
	void DayConverter();
	void addDay();
	void SetYear(int value);
	void SetMonth(int value);
	void SetDay(int value);
	int GetYear() const { return date.GetYear(); }
	int GetMonth() const { return date.GetMonth(); }
	int GetDay() const { return date.GetDay(); }
	void Stabilizer();
	string toString() const;
	friend bool operator > (const Triad t1, const Triad t2);
	friend bool operator < (const Triad t1, const Triad t2);
	friend bool operator == (const Triad t1, const Triad t2);
};
