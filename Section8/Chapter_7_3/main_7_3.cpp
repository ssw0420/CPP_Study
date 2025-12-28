#include <iostream>
#include <cmath> // sin(), cos()
#include <vector>

using namespace std;

void addOne(int& y)
{
	y = y + 1;
	cout << y << " " << &y << endl; // 6 00000083B32FFBD4
}

void getSinCos(const double degrees, double& sinOut, double& cosOut)
{
	static const double pi = 3.141592;
	const double radians = degrees * pi / 180.0;
	sinOut = std::sin(radians);
	cosOut = std::cos(radians);
}

void foo(const int& x)
{
	cout << x << endl;
}

typedef int* pint;

void foo2(pint &ptr) // = (int*) &ptr
{
	cout << ptr << " " << &ptr << endl; // 0000000E82EFF994 0000000E82EFF9B8
}

void printElement(int (&arr)[4]) // same array size
{

}

void printVectorElement(vector<int>& v)
{

}


int main()
{
	int x = 5;

	cout << x << " " << &x << endl; // 5 00000083B32FFBD4

	addOne(x);

	cout << x << " " << &x << endl; // 6 00000083B32FFBD4

	cout << endl;

	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << " " << endl;

	cout << endl;

	foo(6); // if not use const in function foo, cannot convert argument 1 from 'int' to 'int &'
	
	cout << endl;


	int a = 5;
	pint ptr = &a; // int *ptr = &a;

	foo2(ptr);

	cout << ptr << " " << &ptr << endl; // 0000000E82EFF994 0000000E82EFF9B8


	int arr[]{ 1, 2, 3, 4 };

	printElement(arr);

	vector<int> v{ 1, 2, 3, 4 };
	printVectorElement(v);

	return 0;
}