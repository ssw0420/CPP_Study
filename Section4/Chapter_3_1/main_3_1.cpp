#include <iostream>
#include <cmath>

using namespace std;

int power(int a, int b)
{
	int result = 1;

	while (b > 0)
	{
		if (b & 1)
		{
			result *= a;
		}

		a *= a;
		b >>= 1;
	}

	return result;
}

int main()
{
	int x = 4 + 2 * 3; // add(4, mult(2, 3))
	int y = 3 * 4 / 2; // Left-to-right

	int a = 1 - 2;
	int b = -3; // unary minus
	int c = 1 - 2 + -3;

	int p = std::pow(2, 3);
	cout << p << endl;
	

	int x1, x2;
	cin >> x1 >> x2;
	cout << power(x1, x2) << endl;

	return 0;
}