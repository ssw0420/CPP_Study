#include <iostream>

using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit = 0) : m_digit(digit) {}

	// prefix
	Digit& operator ++ ()
	{
		++m_digit;

		return *this;
	}

	// postfix => dummy parameter
	Digit operator ++(int)
	{
		Digit temp(m_digit);
		++(*this); // use prefix operator overloading function

		return temp;
	}

	friend ostream& operator << (ostream& out, const Digit& d)
	{
		out << d.m_digit;
		return out;
	}
};

int main(void)
{
	//int a = 10;

	//cout << a << endl; // 10
	//cout << ++a << endl; // 11
	//cout << a << endl; // 11
	//cout << a++ << endl; // 11
	//cout << a << endl; // 12


	Digit d(5);
	cout << ++d << endl; // 6
	cout << d << endl; // 6

	cout << endl;

	cout << d++ << endl; // 6
	cout << d << endl; // 7

	return 0;
}