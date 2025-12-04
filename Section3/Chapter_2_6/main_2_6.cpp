#include <iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b); // a와 b가 같으면 true이고, a와 b가 다르면 false가 된다.

	return result;
}

bool isOdd(int num)
{
	//bool b;
	//int result = 0;
	//result = num % 2;

	//if (result)
	//{
	//	b = true;
	//	return b;
	//}
	//else
	//{
	//	b = false;
	//	return b;
	//}

	return num % 2;
}

int main(void)
{
	using namespace std;

	bool isB1 = true; // copy initialization
	bool isB2(false); // direct ''
	bool isB3{ true }; // uniform ''

	isB3 = false; // assignment

	cout << std::boolalpha;
	cout << isB3 << endl;
	cout << isB1 << endl;

	cout << endl;

	cout << std::noboolalpha;
	cout << isB3 << endl;
	cout << isB1 << endl;

	cout << endl;

	cout << !true << endl;
	cout << !false << endl;
	cout << !isB1 << endl;

	cout << endl;

	cout << (true && true) << endl;
	cout << (false && true) << endl;
	cout << (true && false) << endl;
	cout << (false && false) << endl;

	cout << endl;

	cout << (true || true) << endl;
	cout << (false || true) << endl;
	cout << (true || false) << endl;
	cout << (false || false) << endl;

	cout << endl;

	if (false)
	{
		cout << "This is if " << endl;
		cout << "If Second Line" << endl;
	}
	else
	{
		cout << "This is else " << endl;
		cout << "Else Second Line" << endl;
	}

	cout << endl;

	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 3) << endl;

	if ("hi")
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}

	bool b;
	cin >> b;
	cout << std::boolalpha;
	cout << "Your input: " << b << endl;


	int num = 0;
	cin >> num;

	cout << isOdd(num) << endl;

	return 0;
}