#include <iostream>

using namespace std;

class Fraction
{
private:
	/*int m_numerator = 0;
	int m_denominator = 1;*/
	int m_numerator;
	int m_denominator;

public:
	Fraction()
	{
		m_numerator = 1;
		m_denominator = 1;
	}

	Fraction(const int& num_in, const int& den_in = 1)
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "Fraction() Constructor" << endl;
	}

	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	Second sec;
public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	// Fraction frac{ 0, 1 };

	// 'Fraction frac();' is a function declaration, not an object.
	Fraction frac; // If no parameters are used in the construction : Fraction frac;. Do not use frac();
	frac.print();

	Fraction one_thirds(1, 3); // Fraction() Constructor
	one_thirds.print(); // 1 / 3

	Fraction one_one(1); // <= default den_in = 1
	one_one.print(); // 1 / 1

	//Fraction one_two = Fraction{ 1, 2 };
	Fraction one_two{ 1, 2 };
	Fraction one_four(1, 4);



	First fir; // print: class Second constructor() class First constructor()


	return 0;
}