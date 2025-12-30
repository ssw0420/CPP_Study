#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int GetCents() const { return m_cents; }
	int& GetCents() { return m_cents; }
	
	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}

	Cents operator - () const
	{
		return Cents(-m_cents);
	}

	bool operator ! () const
	{
		// !Cents(...)
		// if 0 => true
		// else => false
		return (m_cents == 0) ? true : false;
	}
};

int main(void)
{
	int a = 3;

	cout << a << endl; // 3
	cout << -a << endl; // -3
	cout << !a << endl; // 0

	cout << endl;

	Cents cents1(6);
	Cents cents2(0);

	cout << cents1 << endl; // 6
	cout << -cents1 << endl; // -6
	cout << -Cents(-10) << endl; // 10   // = -(-10)

	auto temp = cents1; // type : Cents
	auto temp2 = !cents2; // type : bool

	cout << !cents1 << " " << !cents2 << endl; // 0 1

	return 0;
}