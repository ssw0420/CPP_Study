#include <iostream>

using namespace std;

void foo(int *ptr)
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;

	*ptr = 10;
}

void c_foo(const int* ptr)
{

}

void test(double degrees, double* sin_out, double* cos_out)
{
	*sin_out = 1.0;
	*cos_out = 2.0;
}

void printArr(const int* const ptr, int* arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << endl;
	}

	arr[0] = 1.0;

	int x = 1;
	// ptr = &x; // const ptr: you cannot assign to a variable that is const
}

int main(void)
{
	int value = 5;

	cout << value << " " << &value << endl; // 5 0000001B113FF664

	int* ptr = &value;

	cout << &ptr << endl; // 000000B32537FD18

	foo(ptr); // 5 0000001B113FF664 0000001B113FF640
	foo(&value); // 5 0000001B113FF664 0000001B113FF640
	// foo(5);

	cout << value << endl; // 10

	double degress = 30;
	double sin, cos;

	test(degress, &sin, &cos);

	cout << sin << " " << cos << endl; // 1 2

	return 0;
}