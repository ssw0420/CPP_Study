#include <iostream>

using namespace std;

int pow(int base, int exponent)
{
	int result = 1;

	for (int count = 0; count < exponent; ++count)
	{
		result *= base;
	}

	return result;
}

int main()
{
	for (int count = 0; count < 10; ++count) // iteration
	{
		cout << count << endl;
	}

	// cout << count << endl; 

	int count = 0;
	for (; count < 10; ++count)
	{
		cout << count << endl;
	}

	cout << count << endl;

	//for (;; ++count)
	//{
	//	cout << count << endl;
	//}

	//for (; true; ++count)
	//{
	//	cout << count << endl;
	//}

	cout << endl;

	cout << pow(2, 4) << endl;

	cout << endl;

	for (int count = 9; count >= 0; count -= 2)
	{
		cout << count << endl;
	}

	for (int i = 0, j = 0; i < 10; ++i, --j)
	{
		cout << i << " " << j << endl;
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << i << " " << j << endl;
		}
	}

	/*for (unsigned int i = 9; i >= 0; --i)
	{
		cout << i << endl;
	}*/

	return 0;
}