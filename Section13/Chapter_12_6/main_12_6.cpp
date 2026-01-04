#include <iostream>

using namespace std;

class Base
{
public:
	// FunctionPointer *__vptr;
	virtual void func1() {};
	virtual void func2() {};
};

class Der : public Base
{
public:
	// FunctionPointer *__vptr;
	virtual void func1() {};
	virtual void func3() {};
};

int main(void)
{
	cout << sizeof(Base) << endl; // 1 -> 4
	cout << sizeof(Der) << endl; // 1 -> 4

	return 0;
}