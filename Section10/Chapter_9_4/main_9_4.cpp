#include <iostream>
#include <vector>
#include <algorithm>

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

	friend bool operator == (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend bool operator != (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents != c2.m_cents;
	}

	friend bool operator > (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents > c2.m_cents;
	}

	friend bool operator <  (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents < c2.m_cents;
	}

};

int main(void)
{
	/*int a = 3, b = 3;
	if (a == b)
		cout << "Equal" << endl;*/

	Cents cents1(6);
	Cents cents2(3);
	Cents cents3(6);

	if (cents1 == cents2)
		cout << "Equal" << endl;
	else if (cents1 != cents2)
		cout << "Not Equal" << endl;

	if (cents1 == cents3)
		cout << "Equal" << endl;

	cout << endl;

	if (cents1 > cents2)
		cout << "left is greater" << endl;

	vector<Cents> arr(20);
	for (unsigned i = 0; i < 20; ++i) // i : unsigned int
	{
		arr[i].GetCents() = i;
	}

	std::random_shuffle(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	std::sort(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;


	return 0;
}