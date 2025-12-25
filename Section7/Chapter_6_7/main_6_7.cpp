#include <iostream>
#include <typeinfo>

using namespace std;

int* doSomething(int* ptr_a)
{
	return nullptr;
}

struct Something
{
	int a, b, c, d; // 4byte x 4 = 16
};

int main(void)
{
	int x = 5;

	cout << x << endl;
	cout << &x << endl; // &(ampersand) : address-of operator
	cout << (int)&x << endl;

	cout << endl;

	// de-reference operator (*)
	cout << *(&x) << endl; // 5
	cout << *&x << endl; // same *(&x)
	cout << x << endl;

	int *ptr_x = &x, *ptr_y = &x;

	cout << ptr_x << endl; // 000000E48D2FF894
	cout << *ptr_x << endl; // 5
	// int *ptr_a = &x, ptr_b = &x; // ptr_b is not pointer. typeof ptr_b is int

	typedef int* pint;
	pint ptr_i = &x, ptr_j = &x;

	cout << endl;

	double d = 1.0;
	double* ptr_d = &d;
	// double* ptr_test = &x; // a value of type cannot be used to initialize an entity of type

	cout << ptr_d << endl;
	cout << *ptr_d << endl;

	cout << endl;

	cout << sizeof(x) << endl; // 4
	cout << sizeof(d) << endl; // 8
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl; // 8 8
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl; // 8 8

	cout << endl;

	Something ss;
	Something* ptr_s;

	cout << sizeof(Something) << endl; // 16
	cout << sizeof(ptr_s) << endl; // 8

	return 0;
}