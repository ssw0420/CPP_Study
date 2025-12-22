#include <iostream>

using namespace std;

int min(int x, int y)
{
	if (x > y)	return y;
	else		return x;

	// return (x > y) ? y : x;
}

int main()
{
	int x;
	cin >> x;

	if (x > 10)
		; // ...

	if (x > 10)
	{
	};

	//if (x = 0) // not x == 0
	//	cout << x << endl;

	if (x == -1)
	{
		return 0; // exit(0);
	}

	if (x > 10)
		cout << x << " is greater than 10" << endl;
	else
		cout << x << " is not greater than 10" << endl;

	if (x > 10)
	{
		cout << x << " is greater than 10" << endl;
		cout << "Test 1" << endl;
	}
	else
	{
		cout << x << " is not greater than 10" << endl;
		cout << "Test 1" << endl;
	}

	if (1)
	{
		int x = 5;
		// ...
	}
	else
	{
		int x = 6;
	}

	if (x > 10)
	{
		cout << "x is greater than 10" << endl;
	}
	else if (x < 10)
	{
		cout << "x is less than 10" << endl;
	}

	// do nothing if x == 10

	if (x > 10)
	{
		cout << "x is greater than 10" << endl;
	}
	else
	{
		if (x < 10)
		{
			cout << "x is less than 10" << endl;
		}
		else
		{
			cout << "x is exactly 10" << endl;
		}
	}

	if (x >= 10)
		if (x <= 20)
			cout << "x is between 10 and 20" << endl;
		else
			cout << "..." << endl;

	cout << endl;

	if (x >= 10)
		if (x <= 20)
			cout << "x is between 10 and 20" << endl;
	else
		cout << "..." << endl;

	cout << endl;

	if (x >= 10)
	{
		if (x <= 20)
			cout << "x is between 10 and 20" << endl;
	}
	else
	{
		cout << "..." << endl;
	}

	int a, b;
	cin >> a >> b;

	if (a == b)
	{
		cout << "same numbers" << endl;
	}
	else
	{
		cout << "Not same" << endl;
	}

	if (a > 0 && b > 0)
	{
		cout << "both numbers are positive" << endl;
	}
	else if (a > 0 || b > 0)
	{
		cout << "one of the numbers is positive" << endl;
	}
	else
	{
		cout << "Neither number is positive" << endl;
	}


	cout << x << endl;

	return 0;
}