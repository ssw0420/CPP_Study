#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main(void)
{
	const int c_fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	// change array values
	for (int number : c_fibonacci)
	{
		number = 10;
	}

	// output
	for (int number : c_fibonacci)
	{
		cout << number << " "; // 0 1 1 2 3 5 8 13 21 34 55 89
	}

	cout << endl;


	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	// change array values
	/*for (int& number : fibonacci)
	{
		number = 10;
	}*/

	for (auto& number : fibonacci)
	{
		number = 10;
	}

	// output
	for (const auto& number : fibonacci)
	{
		cout << number << " "; // 10 10 10 10 10 10 10 10 10 10 10 10
	}

	cout << endl;

	int test_fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	int max_number = std::numeric_limits<int>::lowest();

	for (const auto& n : test_fibonacci)
		max_number = std::max(max_number, n);

	cout << max_number << endl;
		

	return 0;
}