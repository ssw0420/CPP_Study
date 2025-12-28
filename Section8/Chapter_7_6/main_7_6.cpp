#include <iostream>

using namespace std;

inline int min(int x, int y)
{
	return x > y ? y : x;
}

int main(void)
{
	cout << min(5, 6) << endl; // 5
	cout << min(3, 2) << endl; // 2

	cout << (5 > 6 ? 6 : 5) << endl;
	cout << (3 > 2 ? 2 : 3) << endl;

	return 0;
}