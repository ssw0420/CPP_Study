#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

	// Fraction(char); // cannot access private member declared in class 'Fraction'

public:
	Fraction(char) = delete;

	explicit Fraction(int num = 0, int den = 1) : m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction& fraction) // copy constructor: Class(instance);
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Fraction& f)
	{
		cout << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}

};

void DoSomething(Fraction frac)
{
	cout << frac << endl;
}

int main()
{
	Fraction frac(7);

	DoSomething(frac);
	DoSomething(Fraction(7));
	//DoSomething(7);

	//Fraction frac2('a'); // 'Fraction::Fraction(char)': attempting to reference a deleted function
	
	return 0;
}