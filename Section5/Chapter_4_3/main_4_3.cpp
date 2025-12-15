#include <iostream>

namespace a
{
	int my_var(10);
	int my_a(3);
}

namespace b
{
	int my_var(10);
	int my_b(4);
}

int main()
{
	using std::cout;
	using std::endl;

	//using namespace a;
	//using namespace b;

	cout << "Hello " << endl;
	// cout << my_var << endl; // is ambiguous
	cout << a::my_var << endl;
	cout << b::my_var << endl;
	// cout << my_a << endl;

	{
		using namespace a;
		cout << my_var << endl;
		cout << my_a << endl;
	}

	{
		using namespace b;
		cout << my_var << endl;
	}

}