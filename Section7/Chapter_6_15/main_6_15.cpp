#include <iostream>

using namespace std;

void doSomething(const int& x)
{
	cout << x << endl;
	cout << &x << endl;
}

int main(void)
{
	const int x = 5;
	const int &ref_x = x;

	const int& ref_2 = ref_x;

	const int& ref_3 = 3 + 4;

	cout << ref_3 << endl;
	cout << &ref_3 << endl;

	cout << endl;

	doSomething(5);
	doSomething(x * 3);

	return 0;
}