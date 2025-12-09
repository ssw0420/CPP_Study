#include <iostream>

int add(int a, int b)
{
	return a + b;
}

int main()
{
	using namespace std;

	int x = 5;
	int y = ++x;
	int z = x--;

	cout << y << endl;
	cout << z << endl;

	int a = 6;
	int b = 6;
	cout << a << " " << b << endl;
	cout << ++a << " " << --b << endl;
	cout << a++ << " " << b-- << endl;
	cout << a << " " << b << endl;

	int num1 = 1;
	int num2 = 2;
	//int value = add(num1, ++num1); // Do not use
	int value2 = add(num1, ++num2);
	//cout << value << endl;
	cout << value2 << endl;

	return 0;
}