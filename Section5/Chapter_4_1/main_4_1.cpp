#include <iostream>

using namespace std;

int a = 1;
// int a = 1; // redefinition : multiple initialization

void doSomething()
{
	a += 3;
}

namespace work1
{
	int a = 1;
	void doSomething()
	{
		a += 5;
	}

	namespace  work11
	{
		int a = 3;
	}
}

namespace work2
{
	int a = 3;
	void doSomething()
	{
		a += 1;
	}
}

//namespace work3::work33
//{
//	int a = 1;
//	{
//		int a = 3;
//	}
//}
//void doSomething() // function 'void doSomething(void)' already has a body
//{
//	a += 5;
//}

int main(void)
{
	// apple = 1; // undefined

	int apple = 5;

	cout << apple << endl; // 5
	{
		apple = 1;
		cout << apple << endl; // 1

		int apple = 3;
		cout << apple << endl; // 3
	}

	cout << apple << endl; // 1

	apple = 2;
	cout << apple << endl; // 2


	cout << endl;

	work1::a; // 1
	work1::doSomething(); // 1 + 5

	work2::a; // 3
	work2::doSomething(); // 3 + 1

	cout << work1::a << " " << work2::a << endl; // 6 4

	return 0;
}

// apple = 3; //  this declaration has no storage class or type specifier