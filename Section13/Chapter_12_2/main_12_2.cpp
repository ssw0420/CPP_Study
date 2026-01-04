#include <iostream>
using namespace std;

//class A
//{
//public:
//	void print() { cout << "A" << endl; }
//};

class A2
{
public:
	virtual void print() { cout << "A" << endl; }
};

class B : public A2
{
public:
	virtual void print() { cout << "B" << endl; }
};

class C : public B
{
public:
	void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	void print() { cout << "D" << endl; }
	//virtual int print() { cout << "D" << endl; }
};

int main(void)
{
	A2 a;
	a.print(); // A

	B b;
	b.print(); // B

	C c;
	c.print(); // C

	D d;
	d.print(); // D

	cout << endl;

	A2& ref = b;
	ref.print(); // A -> virtual -> B

	B& ref2 = c;
	ref2.print(); // A -> virtual -> C

	ref = d;
	ref.print(); // A -> virtual -> B

	B& ref3 = c;
	ref3.print(); // B -> virtual -> C

	return 0;
}