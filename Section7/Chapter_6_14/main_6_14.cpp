#include <iostream>

using namespace std;

void doSomething(int n)
{
	n = 10;
	cout << "In doSomething " << n << endl; // In doSomething 10
	cout << &n << endl; // 000000F81F19F780
}

void doSomethingRef(int& n)
{
	n = 15;
	cout << "In doSomethingRef " << n << endl; // In doSomething Ref 15
	cout << &n << endl; // 000000F81F19F8E4
}

void doSomethingConstRef(const int& n)
{
	// n = 15; // expression must be a modifiable lvalue
	cout << "In doSomethingConstRef " << n << endl;
	cout << &n << endl;
}

void printElements(int(&arr)[5])
{
	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " "; // 1 2 3 4 5
	}
	cout << endl;
}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main()
{
	int value = 5;
	int value2 = 15;

	int* ptr = nullptr;
	ptr = &value;

	// int& ref; // reference variable requires an initializer
	// int& ref = 111; // initial value of reference to non-const must be an lvalue
	int& ref = value;
	cout << ref << endl; // 5
	cout << &ref << endl; // 000000FFD39CFA44

	ref = value2;
	cout << ref << endl; // 15
	cout << &ref << endl; // 000000FFD39CFA44

	ref = 10; // = *ptr = 10;
	cout << value << " " << ref << endl; // 10 10

	// &value = &ref = ptr
	cout << &value << endl; // 000000FFD39CFA44
	cout << &ref << endl; // 000000FFD39CFA44
	cout << ptr << endl; // 000000FFD39CFA44

	cout << &ptr << endl; // 000000BB4236FC88


	cout << endl;

	int x = 5;
	int& ref2 = x;

	const int y = 8;
	// int& ref2 = y; // qualifiers dropped in binding reference of type to initializer of type
	const int& ref3 = y;

	int a = 10;
	const int& b = a;
	cout << a << endl; // 10
	a = 20;
	cout << b << endl; // 20

	cout << endl;

	int n = 5;
	cout << n << endl; // 5
	cout << &n << endl; // 000000F81F19F8E4
	cout << endl;

	doSomething(n);
	cout << endl;

	cout << n << endl; // 5
	cout << &n << endl; // 000000F81F19F8E4
	cout << endl;

	doSomethingRef(n);
	cout << endl;

	cout << n << endl; // 15
	cout << &n << endl; // 000000F81F19F8E4

	doSomethingConstRef(n);

	cout << endl;

	const int length = 5;
	int arr[length] = { 1, 2, 3, 4, 5 };

	printElements(arr);

	cout << endl;
	
	Other ot;
	// ot.st.v1 = 1.0;

	int& v1 = ot.st.v1;
	v1 = 1;

	cout << endl;

	int myValue = 5;
	int* const myPtr = &myValue;
	int& myRef = myValue;

	*myPtr = 10;
	myRef = 10;

	return 0;
}