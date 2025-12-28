#include <iostream>

using namespace std;

void countDown(int count)
{
	if (count < 0) return;
	cout << count << endl;

	countDown(count - 1);

	/*cout << count << endl;
	if (count > 0)
		countDown(count - 1);*/
}

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}

// 0 1 1 2 3 5 8 13 21 ... - fibonacci

//int fibonacci(int n)
//{
//	if (n <= 1) return n;
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}

int dp[100] = { 0, };
int fibonacci(int n)
{
	if (n <= 1) return n;

	if (dp[n] != 0) return dp[n];

	dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return dp[n];
}

int main(void)
{
	countDown(10);

	cout << endl;

	cout << sumTo(10) << endl; // 55

	int n = 5;
	for (int i = 0; i <= n; i++)
	{
		cout << fibonacci(i) << " "; // 0 1 1 2 3 5
	}

	return 0;
}