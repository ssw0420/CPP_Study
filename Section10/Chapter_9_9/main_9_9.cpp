#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int num = 0, int den = 1) : m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction& fraction) // copy constructor: Class(instance);
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called" << endl;
	}

	friend std::ostream& operator << (std::ostream & out, const Fraction & f)
	{
		cout << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}

};

Fraction DoSomething()
{
	Fraction temp(1, 2);
	cout << &temp << endl; // 000000D5900FFCF8

	return temp;
}

int main()
{
	Fraction frac(3, 5);

	Fraction fr_copy(frac);
	Fraction fr_copy2 = frac;
	cout << frac << " " << fr_copy << endl;

	Fraction fr_copy3(Fraction(3, 10)); // not call copy contructor
	cout << frac << " " << fr_copy3 << endl;

	cout << endl;

	Fraction result = DoSomething();
	cout << result << endl; // 1 / 2
	cout << &result << endl; // 000000D5900FFCF8


	return 0;
}