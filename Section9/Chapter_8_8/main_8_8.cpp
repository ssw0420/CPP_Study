#include "Calc.h"

using namespace std;

//class Calc
//{
//private:
//	int m_value;
//
//public:
//	Calc(int init_value) : m_value(init_value)
//	{
//
//	}
//
//	Calc& add(int value) { m_value += value; return *this; }
//	Calc& sub(int value) { m_value -= value; return *this; }
//	Calc& mult(int value) { m_value *= value; return *this; }
//
//	void print()
//	{
//		cout << m_value << endl;
//	}
//};

int main(void)
{
	Calc(10).add(10).sub(1).mult(2).print();

	return 0;
}