#include "Triad.h"
#include "Exception.h"
Triad::Triad() { year = 0, month = 0, day = 0; }
Triad::Triad(int year = 0, int month = 0, int day = 0)
{
	if (year == 1 && month == 1 && day == 1)
		throw invalid_argument("Invalid_argument");
	else if (year == 2 && month == 2 && day == 2)
		throw bad_exception();
	else if (year == 3 && month == 3 && day == 4)
		throw Exception("Exception");
	else if (year == 4 && month == 4 && day == 4)
		throw "Exception";
	this->year = year;
	this->month = month;
	this->day = day;
}
Triad::Triad(const Triad& A)
{
	year = A.GetYear();
	month = A.GetMonth();
	day = A.GetDay();
}

void Triad::Init(int a, int b, int c)
{
	year = abs(a);
	month = abs(b);
	day = abs(c);
}
Triad& Triad::operator = (const Triad& A)
{
	year = A.year;
	month = A.month;
	day = A.day;
	return *this;
}
ostream& operator << (ostream& out, const Triad& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Triad& A)
{
	cout << " first = "; in >> A.year;
	cout << " second = "; in >> A.month;
	cout << " third = "; in >> A.day;
	cout << A.year << "      " << A.month << "       " << A.day << endl;
	return in;
}
string Triad::toString() const
{
	stringstream sout2;
	sout2 << "number 1: " << year << ", number 2: " << month << ", number 3: " << day << endl;
	return sout2.str();
}
void Triad::Display() const
{
	cout << "number 1: " << year << ", number 2: " << month << ", number 3: " << day << endl;
}
Triad::operator string() const
{
	stringstream ss;
	ss << " first: " << year << endl;
	ss << " second: " << month << endl;
	ss << " third: " << day - 1 << endl;
	return ss.str();
}
Triad& Triad::operator ++ ()
{
	year++;
	month++;
	day++;
	return *this;
}
Triad& Triad::operator -- ()
{
	year--;
	month--;
	day--;
	return *this;
}
Triad Triad::operator ++ (int)
{
	Triad a(*this);
	year++;
	month++;
	day++;
	return a;
}
Triad Triad::operator -- (int)
{
	Triad a(*this);
	year--;
	month--;
	day--;
	return a;
}