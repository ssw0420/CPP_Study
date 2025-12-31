#include <iostream>

using namespace std;

class Accumulator
{
private:
	int m_counter = 0;

public:
	int operator()(int i) { return (m_counter += i); }
};

class ChainingAcc
{
private:
	int m_counter = 0;

public:
	// return (Accumulator&)
	ChainingAcc& operator()(int i) {
		m_counter += i;
		return *this;
	}

	void Print() { cout << "Result: " << m_counter << endl; }
};

int main(void)
{
	Accumulator acc;

	cout << acc(10) << endl; // 10
	cout << acc(20) << endl; // 30

	cout << endl;

	ChainingAcc CA;
	CA(10)(2)(50);
	CA.Print(); // Result: 62

	return 0;
}