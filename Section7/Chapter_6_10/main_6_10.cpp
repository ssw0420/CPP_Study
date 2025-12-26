#include <iostream>

using namespace std;

const char* getName()
{
	return "JACK";
}

int main()
{
	// char name [] = "Jack Jack";
	// char* name = "Jack Jack"; // 'initializing': cannot convert from 'const char [10]' to 'char *'
	const char* name = "Jack Jack";
	const char* name2 = "Jack Jack";

	// same address
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;

	cout << endl;

	const char* name3 = getName();
	const char* name4 = getName();

	// same address
	cout << (uintptr_t)name3 << endl;
	cout << (uintptr_t)name4 << endl;

	cout << endl;

	int int_arr[5] = { 1, 2, 3, 4, 5 };
	char char_arr[] = "Hello, World!";
	const char* cc_name = "JACK!";

	cout << int_arr << endl; // 000000F556DCF668 <= print address
	cout << char_arr << endl; // Hello, World!
	cout << cc_name << endl; // JACK!

	char c = 'Q';
	cout << &c << endl; // Q面面面面面面面面面面面面面
	cout << *(&c) << endl; // Q

	return 0;
}