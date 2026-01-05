#include <iostream>
#include <array>
#include "Storage8.h"

using namespace std;

template<typename T>
class A
{
public:
	A(const T& input)
	{ }

	void DoSomething()
	{
		cout << typeid(T).name() << endl;
	}

	void test()
	{

	}
};

template<>
class A<char>
{
public:
	A(const char& temp)
	{
	}

	void DoSomething()
	{
		cout << "Char type Specialization" << endl;
	}
};

int main()
{
	A<int>		a_int(1);
	A<double>	a_double(3.14);
	A<char>		a_char('a');

	a_int.DoSomething();
	a_double.DoSomething();
	a_char.DoSomething();

	// Define a Storage8 for integers
	Storage8<int> intStorage;

	for (int count = 0; count < 8; ++count)
		intStorage.Set(count, count);

	for (int count = 0; count < 8; ++count)
		std::cout << intStorage.Get(count) << '\n';

	cout << "Sizeof Storage8<int> " << sizeof(Storage8<int>) << endl;

	// Define a Storage8 for bool
	Storage8<bool> boolStorage;
	for (int count = 0; count < 8; ++count)
		boolStorage.Set(count, count & 3);

	for (int count = 0; count < 8; ++count)
		std::cout << (boolStorage.Get(count) ? "true" : "false") << '\n';

	cout << "Sizeof Storage8<bool> " << sizeof(Storage8<bool>) << endl;
}