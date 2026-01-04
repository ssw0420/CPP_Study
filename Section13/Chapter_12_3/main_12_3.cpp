#include <iostream>

using namespace std;

class A
{
public:
	//virtual void print(int x) { cout << "A" << endl; }
	//virtual void print() { cout << "A" << endl; }
	void print() { cout << "A" << endl; }
	virtual A* GetThis() { return this; }
};

class B : public A
{
public:
	//void print(short x) override { cout << "B" << endl; } // method with override specifier 'override' did not override any base class methods
	// virtual void print() final { cout << "B" << endl; }
	//void print1() { cout << "B" << endl; }
	void print() { cout << "B" << endl; }
	virtual B* GetThis() { return this; }
};

class C : public B
{
public:
	//virtual void print() { cout << "C" << endl; } // function declared as 'final' cannot be overridden by 
};

int main()
{
	A a;
	B b;

	A& ref = b;
	//ref.print();

	b.GetThis()->print(); // B
	ref.GetThis()->print(); // A

	cout << endl;

	cout << typeid(b.GetThis()).name() << endl; // class B *
	cout << typeid(ref.GetThis()).name() << endl; // class A *

	return 0;
}