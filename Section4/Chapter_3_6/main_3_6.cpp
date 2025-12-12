#include <iostream>

using namespace std;

int main(void)
{
	using namespace std;

	bool x = true;
	bool y = false;

	// logical AND
	cout << (x && y) << endl; // Operator precedence: parentheses ( )
	// logical OR
	cout << (x || y) << endl;

	bool hit = true;
	int health;
	cout << "Input Health: ";
	cin >> health;

	if (hit && health < 20)
	{
		cout << "Die" << endl;
	}
	else
	{
		cout << "Hit" << endl;
		health -= 20;
	}

	int a = 5;
	int b = 7;

	if (!(x == y))
	{
		cout << "Not Equal" << endl;
	}

	if (x != y)
	{
		cout << "Not Equal" << endl;
	}

	int v = 1;
	if (v == 0 || v == 1)
	{
		cout << "v is 0 or 1" << endl;
	}

	// short circuit evaluation
	int num1 = 1;
	int num2 = 2;

	if (num1 == 2 && num2++ == 2)
	{
		// do something
	}
	cout << num2 << endl;

	bool t = true;
	bool f = false;

	// De Morgan's Law
	!(t && f); // this is not equivalent to !x && !y
	!t || !f;


	// XOR: values are not the same
	// false false => false
	// false true => true
	// true false => true
	// true true => false

	cout << (x != y) << endl;

	// Operator precedence
	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3; // same as v1 || (v2 && v3)
	bool r2 = (v1 || v2) && v3;

	cout << r1 << endl; // 1
	cout << r2 << endl; // 0

	return 0;
}