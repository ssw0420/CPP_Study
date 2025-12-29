#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		// this->SetID(id);
		SetID(id);
		cout << this << endl;
	}

	void SetID(int id) { m_id = id; }
	int GetID() { return m_id; }
};

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value) : m_value(init_value)
	{
	}
	void add(int value) { m_value += value; }
	void sub(int value) { m_value -= value; }
	void mult(int value) { m_value *= value; }

	void print()
	{
		cout << m_value << endl;
	}
};

class ChainCalc
{
private:
	int m_value;

public:
	ChainCalc(int init_value) : m_value(init_value)
	{

	}

	ChainCalc& add(int value) { m_value += value; return *this; }
	ChainCalc& sub(int value) { m_value -= value; return *this; }
	ChainCalc& mult(int value) { m_value *= value; return *this; }

	void print()
	{
		cout << m_value << endl;
	}
};

int main(void)
{
	Simple s1(1), s2(2);
	s1.SetID(2); // 000000C07A6FFD14
	s2.SetID(4); // 000000C07A6FFD34

	cout << &s1 << " " << &s2 << endl; // 000000C07A6FFD14 000000C07A6FFD34

	// Simple::SetID(&s2, 4); == s2.SetID(4);
	// they are same but can not use left expression.

	cout << endl;

	Calc cal(10);
	cal.add(10);
	cal.sub(1);
	cal.mult(2);
	cal.print(); // 38

	ChainCalc chaincal(10);
	chaincal.add(10).sub(1).mult(2).print(); // 38
	// ChainCalc(10).add(10).sub(1).mult(2).print() // same

	// same
	//ChainCalc cc(10);
	//ChainCalc& temp1 = cc.add(10);
	//ChainCalc& temp2 = temp1.sub(1);
	//ChainCalc& temp3 = temp2.mult(2);
	//temp3.print(); // 38

	return 0;
}