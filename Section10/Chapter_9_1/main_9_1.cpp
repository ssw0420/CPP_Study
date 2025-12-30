#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int GetCents() const { return m_cents; }
	//int& GetCents() { return m_cents; }
	//friend Cents operator + (const Cents& c1, const Cents& c2)
	Cents operator + (const Cents& c2)
	{
		return Cents(this->m_cents + c2.GetCents());
	}
};

//void Add(const Cents& c1, const Cents& c2, Cents& c_out)
//{
//	c_out.GetCents() = c1.GetCents() + c2.GetCents();
//}

// Arithmetic Operator Overloading
//Cents operator + (const Cents& c1, const Cents& c2)
//{
//	return Cents(c1.GetCents() + c2.GetCents());
//}

int main(void)
{
	Cents cents1(6);
	Cents cents2(8);
	//Cents sum; // constructor default -> int cents = 0

	//Add(cents1, cents2, sum);
	//cout << sum.GetCents() << endl; // 14

	cout << endl;

	// Arithmetic Operator Overloading
	// with anonymous class : Cents(6)
	cout << (cents1 + cents2 + Cents(6)).GetCents() << endl; // 20

	cout << (cents1 + cents2 + Cents(6) + Cents(100)).GetCents() << endl; // 120

	return 0;
}