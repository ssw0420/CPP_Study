#include <iostream>

using namespace std;

class Base
{
public:
	Base() { }

	friend ostream& operator << (ostream& out, const Base& b)
	{
		return b.print(out);
	}

	virtual ostream& print(ostream& out) const
	{
		out << "Base";
		return out;
	}
};

class Derived : public Base
{
public:
	Derived() {}

	virtual ostream& print(ostream& out) const override
	{
		out << "Derived";
		return out;
	}
};

int main()
{
	Base b;
	cout << b << '\n'; // Base

	Derived d;
	// Note: this works even with no operator << that explicit
	cout << d << '\n'; // Derived

	Base& bref = d;
	cout << bref << '\n'; // Derived

	return 0;
}