#include <iostream>

using namespace std;

class Mother
{
public:
	int m_i;

	Mother(const int& i_in = 0)
		: m_i(i_in)
	{
		cout << "Mother construction" << endl;
	}
};

class Child : public Mother
{
public:
	double m_d;
public :
	Child()
		: Mother(1024), m_d(1.0)
	{
		cout << "Child construiction" << endl;
		/*this->m_i = 10;
		this->Mother::m_i = 1024;*/
	}
};

class A
{
public:
	A()
	{
		cout << "A Constructor" << endl;
	}
};


class B : public A
{
public:
	B()
	{
		cout << "B Constructor" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C Constructor" << endl;
	}
};


int main(void)
{
	//Child c1;

	C c;

	cout << endl;

	B b;

	cout << endl;

	A a;

	return 0;
}