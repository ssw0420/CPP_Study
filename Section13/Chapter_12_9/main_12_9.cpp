#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void DoSomething(Base& b)
{
	b.print();
}

int main()
{
	Derived d;
	Base& b = d;

	b.print(); // I'm derived

	Derived d2;
	Base b2;
	b2 = d2;

	b2.print(); // I'm Base

	Derived d3;
	d3.print(); // I'm derived

	cout << endl;

	std::vector<Base> my_vec;
	
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto& element : my_vec)
		element.print(); // I'm Base x 2

	cout << endl;


	std::vector<std::reference_wrapper<Base>> my_vec2;
	my_vec2.push_back(b);
	my_vec2.push_back(d);

	for (auto& ele : my_vec2) // I'm Derived x 2
		ele.get().print(); // get() : return *Ptr

	return 0;
}