#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct DateS
{
	int _month;
	int _day;
	int _year;
};

class DateC
{
//public: // access specifier
	int m_month;
	int m_day;
	int m_year;

public:
	// setters
	void SetDate(const int& month_input, const int& day_input, const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	void SetMonth(const int& month_input)
	{
		m_month = month_input;
	}

	const int& GetDay() // getters
	{
		return m_day;
	}

	void CopyFrom(const DateC& original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

int main(void)
{
	DateS today{ 8, 4, 2025 };

	DateS tomorrow;
	tomorrow._month = 8;
	tomorrow._day = 5;
	tomorrow._year = 2025;

	DateC yesterday;
	yesterday.SetDate(8, 3, 2025);
	yesterday.SetMonth(10);

	cout << yesterday.GetDay() << endl;

	DateC copy;
	// copy.SetDate(yesterday.GetMonth(), yesterday.GetDay(), yesterday.GetYear());
	copy.CopyFrom(yesterday);

	cout << copy.GetDay() << endl;

	return 0;
}