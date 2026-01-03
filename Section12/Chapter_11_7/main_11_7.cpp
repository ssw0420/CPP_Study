#include <iostream>

using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value = 0)
		: m_i(value)
	{

	}

	void print()
	{
		cout << "I'm base" << endl;
	}

	friend std::ostream & operator << (ostream& out, const Base& b)
	{
		out << "This is base output" << endl;
		return out;
	}
};

class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value = 0, int in_double = 0.0)
		: Base(value), m_d(in_double)
	{

	}

	void print()
	{
		Base::print();
		cout << "I'm derived" << endl;
	}

	friend std::ostream& operator << (ostream& out, const Derived& b)
	{
		cout << static_cast<const Base&>(b);
		out << "This is derived output" << endl;
		return out;
	}
};

int main()
{
	Base base;
	//base.print();

	Derived derived(7);
	//derived.print();

	cout << base; // This is base output
	cout << derived; // This is derived output
}