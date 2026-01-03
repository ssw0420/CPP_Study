#include <iostream>

using namespace std;

class Mother
{
private:
	int m_i;

public:
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
public:
	Child()
		: Mother(1024), m_d(1.0)
	{
		cout << "Child construiction" << endl;
	}
};

class A
{
public:
	A(int a)
	{
		cout << "A: " << a << endl;
	}

	~A()
	{
		cout << "Destructor A" << endl;
	}
};

class B : public A
{
public:
	B(int a, double b)
		: A(a)
	{
		cout << "B: " << b << endl;
	}

	~B()
	{
		cout << "Destructor B" << endl;
	}
};

class C : public B
{
public:
	C(int a, double b, char c)
		: B(a, b)
	{
		cout << "C: " << c << endl;
	}

	~C()
	{
		cout << "Destructor C" << endl;
	}
};

int main(void)
{
	Child c1;

	cout << sizeof(Mother) << endl; // 4
	cout << sizeof(Child) << endl; // 16 = 4 + 8 + padding
	cout << sizeof(c1) << endl; // 16

	C c(1024, 3.14, 'a');

	return 0;
}