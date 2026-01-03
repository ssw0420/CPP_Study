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
	void print() = delete; // attempting to reference a deleted function
	using Base::m_i;

	/*void print()
	{
		Base::print();
		cout << "I'm derived" << endl;
	}*/
private:
	using Base::print; // do NOT add '()'

};

int main()
{
	Derived derived(7);

	derived.m_i = 1024;
	//derived.print(); // attempting to reference a deleted function

	return 0;
}