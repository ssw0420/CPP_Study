#include <iostream>

using namespace std;

class A
{
public:
	void print()
	{
		cout << "Hello" << endl;
	}

	A()
	{
		cout << "Constructor" << endl;
	}

	~A()
	{
		cout << "Destructor" << endl;
	}
};

class B
{
public:
	int m_value;

	B(const int& input) : m_value(input)
	{
		cout << "Constructor" << endl;
	}

	void print()
	{
		cout << m_value << endl;
	}
};

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) { m_cents = cents; }
	int GetCents() const { return m_cents; }
};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.GetCents() + c2.GetCents());
}

int main(void)
{
	//A a;
	//a.print(); // Hello

	// like r-value
	A().print(); // Hello
	A().print(); // Hello
	A().print(); // Hello

	cout << endl;

	B(10).print(); // Constructor 10

	cout << endl;

	cout << add(Cents(6), Cents(8)).GetCents() << endl; // 14

	return 0;
}