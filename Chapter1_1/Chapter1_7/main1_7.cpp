#include <iostream>

using namespace std;

void doSomething(int x)
{
	x = 123;
	cout << "In Function: " << x << " " << &x << endl;
}

int main()
{
	int x(0); // x = 0;
	// int x = 1; // ERROR - redefinition

	cout << x << " " << &x << endl;
	doSomething(x);
	cout << "Done : " << x << " " << &x << endl;

	{
		//int x = 1;
		x = 1;
		cout << x << " " << &x << endl;
	}

	cout << x << " " << &x << endl;

	{
		int x = 2;
		cout << x << " " << &x << endl;
	}
	
	cout << x << " " << &x << endl;


	return 0;
}