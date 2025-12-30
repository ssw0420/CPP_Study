#include <iostream>

using namespace std;

class A; // forward declaration
class B;

class B
{
private:
	int m_value = 2;
	friend void DoSomethingAB(A& a, B& b); // if not use forward declaration -> syntax error: identifier 'B'

public:
	//void PrintSomething(A& a)
	//{
	//	cout << a.m_value << endl;
	//}
	void PrintSomething(A& a);
};


class A
{
private:
	int m_value = 1;

	friend void DoSomething(A& a);

	friend void DoSomethingAB(A& a, B& b);

	// friend class B;
	friend void B::PrintSomething(A& a);
};

void DoSomething(A& a)
{
	cout << a.m_value << endl;
}

void DoSomethingAB(A& a, B& b)
{
	cout << a.m_value << " " << b.m_value << endl;
}

void B::PrintSomething(A& a)
{
	cout << a.m_value << endl;
}

int main(void)
{
	A a;
	DoSomething(a); // 1

	B b;
	DoSomethingAB(a, b); // 1 2

	return 0;
}