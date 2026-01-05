#include <iostream>
#include "Storage.h"

using namespace std;

template<typename T>
T GetMax(T x, T y)
{
	return (x > y) ? x : y;
}

template<>
char GetMax(char x, char y)
{
	cout << "Warning : comparing chars ";

	return (x > y) ? x : y;
}

int main()
{
	cout << GetMax<int>(1, 2) << endl; // 2
	cout << GetMax('a', 'b') << endl; // Warning : comparing chars b

	Storage<int> nValue(5);
	Storage<double> dValue(6.7);

	nValue.print(); // 5
	dValue.print(); // 6.7 -> Double Type 6.700000e+00

	return 0;
}