#include <iostream>
#include <string>

using namespace std;

//Alexander made the Date class and helped with class functions, Faizen and Aiden both worked on class functions and helped with the driver program, and Mason made most of the driver program (main)

// ***** Add your Date class definition and driver program at the end of this file
// (at about line 107). *****

// The Month class provided below is a "helper" class for your Date class.
// Note that although both classes are defined in this single compilation unit (file),
// we are not nesting the Month class in the Date class or vice versa.

class Month {
	friend class Date;

	friend ostream& operator<< (ostream&, Month);

private:
	enum EMonth { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };

	Month() : _month(Jan) {} // default constructor
	Month(int im) : _month(static_cast<EMonth>(im)) {} // value constructor

	void setMonth(string m) { _month = StringToEMonth(m); } // mutator functions
	void setMonth(int im) { _month = static_cast<EMonth>(im); }

	/* Private helper member functions */
	EMonth StringToEMonth(string);
	int MonthToInt() { return static_cast<int>(_month); }
	string MonthToString();
	string MonthToString2();

	EMonth _month;
};

/* Definitions of helper member functions for class Month */

Month::EMonth Month::StringToEMonth(string m) {
	if (m == "Jan") return Jan;
	else if (m == "Feb") return Feb;
	else if (m == "Mar") return Mar;
	else if (m == "Apr") return Apr;
	else if (m == "May") return May;
	else if (m == "Jun") return Jun;
	else if (m == "Jul") return Jul;
	else if (m == "Aug") return Aug;
	else if (m == "Sep") return Sep;
	else if (m == "Oct") return Oct;
	else if (m == "Nov") return Nov;
	else if (m == "Dec") return Dec;
	else {
		cerr << "Month::StringToMonth: Invalid input month \"" << m << "\"\n";
		exit(1);
	}
}

string Month::MonthToString() {
	switch (_month) {
	case Jan: return "Jan";
	case Feb: return "Feb";
	case Mar: return "Mar";
	case Apr: return "Apr";
	case May: return "May";
	case Jun: return "Jun";
	case Jul: return "Jul";
	case Aug: return "Aug";
	case Sep: return "Sep";
	case Oct: return "Oct";
	case Nov: return "Nov";
	case Dec: return "Dec";
	default:
		cerr << "MonthToString: invalid input month \'" << _month << "\'\n";
		exit(1);
	}
}

string Month::MonthToString2() {
	switch (_month) {
	case Jan: return "January";
	case Feb: return "February";
	case Mar: return "March";
	case Apr: return "April";
	case May: return "May";
	case Jun: return "June";
	case Jul: return "July";
	case Aug: return "August";
	case Sep: return "September";
	case Oct: return "October";
	case Nov: return "November";
	case Dec: return "December";
	default:
		cerr << "MonthToString: invalid input month \'" << _month << "\'\n";
		exit(1);
	}
}

/* Definition of friend function operator<< */

ostream& operator<< (ostream& out, Month m) {
	out << m.MonthToString2();
	return out;
}


// ***** Add your Date class definition and driver program below. *****
class Date {
	friend ostream& operator<<(ostream& out, Date d);

public:
	Date();
	Date(int month, int day, int year);
	Date(string month, int day, int year);

	void setMonth(int month);
	void outputDateAsInt(ostream& out);
	void outputDateAsString(ostream& out);
	Date& operator++();

private:
	Month _month;
	int _day;
	int _year;
};

Date::Date() {
	_month.setMonth(1);
	_day = 1;
	_year = 2018;
}

Date::Date(int month, int day, int year) {
	_month.setMonth(month);
	_day = day;
	_year = year;
}

Date::Date(string month, int day, int year) {
	_month.setMonth(month);
	_day = day;
	_year = year;
}

void Date::setMonth(int month) {
	_month.setMonth(month);
}

void Date::outputDateAsInt(ostream& out) {
	out << _month.MonthToInt() << "/" << _day << "/" << _year;
}

void Date::outputDateAsString(ostream& out) {
	out << _month.MonthToString() << " " << _day << ", " << _year;
}

Date& Date::operator++() {
	_year++;
	return *this;
}

ostream& operator<< (ostream& out, Date d) {
	out << d._month << " " << d._day << ", " << d._year;
	return out;
}

int main() {
	Date d1;
	Date d2(2, 1, 2018);
	Date d3("Mar", 1, 2018);

	cout << "With the following declarations:" << endl;
	cout << "     Date d1, d2(2, 1, 2018), d3(\"Mar\", 1, 2018);" << endl;
	cout << "...and using operator<< :" << endl;
	cout << "d1 == " << d1 << endl;
	cout << "d2 == " << d2 << endl;
	cout << "d3 == " << d3 << endl;
	cout << endl;

	d3.setMonth(4);
	cout << "After d3.setMonth(4):" << endl;
	cout << "d3 == " << d3 << endl;
	cout << endl;

	Date d4(12, 31, 2018);
	cout << "With the following declaration:" << endl;
	cout << "     Date d4(12, 31, 2018);" << endl;
	cout << "d4.outputDateAsInt(cout) outputs ";
	d4.outputDateAsInt(cout);
	cout << endl;
	cout << "d4.outputDateAsString(cout) outputs ";
	d4.outputDateAsString(cout);
	cout << endl;
	cout << endl;

	++d4;
	cout << "++d4 == " << d4 << endl;

	return 0;
}
