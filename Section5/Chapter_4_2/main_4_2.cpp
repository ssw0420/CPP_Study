#include <iostream>

using namespace std;

int value = 123;

int b = 1;
int g_a;

void doSomething()
{
	// wrong code
	// static int c;
	// c = 3;
	static int a = 1;

	++a;
	++b;
	cout << a << endl;
	cout << b << endl;
}

void printNum()
{
	static int s_num;
	cout << s_num << endl;
}

int main()
{
	cout << value << endl; // 123

	int value = 1; // local variable

	cout << value << endl; // 1
	cout << ::value << endl; // global scope operator => 123

	cout << endl;

	doSomething(); // 2
	doSomething(); // 3
	doSomething(); // 4
	doSomething(); // 5

	cout << endl;
	int num;
	cout << g_a << endl;
	printNum();
	// cout << num << endl; // error C4700: uninitialized local variable 'num' used

	return 0;
}