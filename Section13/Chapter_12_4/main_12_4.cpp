#include <iostream>

using namespace std;

class Base
{
public:
	virtual ~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int* m_array;

public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	~Derived()
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};

int main()
{
	//Derived derived(5); // ~Derived() ~Base()

	Derived* derived = new Derived(5);
	Base* base = derived;
	delete base; // ~Base()
	//after use virtual destructor
	//=> ~Derived() ~Base()

	return 0;
}