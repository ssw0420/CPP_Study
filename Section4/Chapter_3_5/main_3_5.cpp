#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int start = -1;

	do
	{
		cout << "Do you want to start the while loop? (Yes: 1, No: 0): ";
		cin >> start;

		if (start != 1 && start != 0)
		{
			cout << endl;
			cout << "Your input is not valid." << endl;
			cout << "Please try again: ";
		}
	} while (start != 1 && start != 0);

	while (start == 1)
	{
		int x, y;
		cout << "Enter two numbers: ";
		cin >> x >> y;
		cout << "Your input values are: " << x << " " << y << endl;

		if (x == y)
		{
			cout << "equal" << endl;
		}
		else if (x != y)
		{
			cout << "not equal" << endl;
		}

		if (x > y)
		{
			cout << "x is greater than y" << endl;
		}

		if (x < y)
		{
			cout << "x is less than y" << endl;
		}

		if (x >= y)
		{
			cout << "x is greater than y or equal to y" << endl;
		}

		if (x <= y)
		{
			cout << "x is less than or equal to y" << endl;
		}

		do
		{
			cout << "\nDo you want to continue? (Yes: 1, No: 0): ";
			cin >> start;

			if (start != 1 && start != 0)
			{
				cout << endl;
				cout << "Your input is not valid." << endl;
				cout << "Please try again: ";
			}
		} while (start != 1 && start != 0);
	}

	double d1(100 - 99.99); // 0.01
	double d2(10 - 9.99); // 0.01

	if (d1 == d2)
	{
		cout << "d1 == d2" << endl;
	}
	else
	{
		cout << "d1 != d2" << endl;

		if (d1 > d2)
		{
			cout << "d1 > d2" << endl;
		}
		else // if(d1 < d2)
		{
			cout << "d1 < d2" << endl;
		}
	}

	cout << d1 << endl;
	cout << d2 << endl;

	cout << std::abs(d1 - d2) << endl;

	const double epsilon = 1e-10;

	if (std::abs(d1 - d2) < epsilon)
	{
		cout << "Approximately equal" << endl;
	}
	else
	{
		cout << "Not equal" << endl;
	}
	
	return 0;
}