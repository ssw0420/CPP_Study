#include <iostream>

using namespace std;

namespace MySpace1
{
	namespace InnerSpace
	{
		int myFunction()
		{
			return 0;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}


int doSomething(int a, int b)
{
	return a * b;
}

int main()
{
	/*using namespace MySpace1;
	cout << InnerSpace::myFunction();*/
	using namespace MySpace1::InnerSpace;
	cout << myFunction() << endl;

	cout << MySpace1::doSomething(3, 4) << endl;
	cout << doSomething(3, 4) << endl;

	return 0;
}