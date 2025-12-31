#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int GetCents() { return m_cents; }
	void SetCents(int cents) { m_cents = cents; }

	operator int()
	{
		cout << "cast here" << endl;
		return m_cents;
	}
};

class Dollar
{
private:
	int m_dollars = 0;

public:
	Dollar(const int& input) : m_dollars(input) {}

	operator Cents()
	{
		return Cents(m_dollars * 100);
	}
};

void PrintInt(const int& value)
{
	cout << value << endl;
}

int main(void)
{
	Cents cents(7);
	int value = (int)cents;

	cout << cents.GetCents() << endl; // OK

	value = int(cents);
	value = static_cast<int>(cents);

	PrintInt(cents);

	cout << endl;

	Dollar dol(2);
	Cents cents2 = dol;
	PrintInt(cents2);

	return 0;
}