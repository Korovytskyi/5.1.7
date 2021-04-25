#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Object.h"

using namespace std;
class Triad : public Object
{

	int year;
	int month;
	int day;
public:
	void Init(int a, int b, int c);
	void SetYear(int value) { year = abs(value); }
	void SetMonth(int value) { month = abs(value); }
	void SetDay(int value) { day = abs(value); }
	void incYear() { ++year; }
	void incMonth() { ++month; }
	void incDay() { ++day; }
	int GetYear() const { return year; }
	int GetMonth() const { return month; }
	int GetDay() const { return day; }
	void Display() const;

	Triad();
	Triad(int, int, int);
	Triad(const Triad&);

	string toString() const;
	Triad& operator = (const Triad&);
	friend ostream& operator << (ostream&, const Triad&);
	friend istream& operator >> (istream&, Triad&);
	operator string() const;
	Triad& operator ++ ();
	Triad& operator -- ();
	Triad operator ++ (int);
	Triad operator -- (int);
};