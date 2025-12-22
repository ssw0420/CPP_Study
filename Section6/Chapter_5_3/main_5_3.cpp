#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black";
		break;
	case 1:
		cout << "White" << endl;
		break;
	}

	switch (color)
	{
	case Colors::BLACK:
		cout << "Black";
		break;
	case Colors::WHITE:
		cout << "White";
		break;
	case Colors::RED:
		cout << "RED";
		break;
	}
	cout << endl;

	//if (color == Colors::BLACK)
	//	cout << "Black" << endl;
	//else if (color == Colors::WHITE)
	//	cout << "White" << endl;
	//else if (color == Colors::RED)
	//	cout << "Red" << endl;
}

int main()
{
	printColorName(Colors::BLACK);

	int x;
	cin >> x;

	switch (x)
	{
	case 0:
		cout << "Zero";
		break;
	case 1:
		cout << "One";
		break;
	case 2:
		cout << "Two";
		break;
	}

	cout << endl;

	switch (x)
	{
		int a;
		// int b = 1;
	case 0:
		int y;
		int z;
		z = 5;
		break;
	case 1:
		y = 5;
		cout << y << endl; // 5
		// cout << z << endl; // error C4700: uninitialized local variable 'z' used
		break;
	default:
		cout << "Undefined input " << x << endl;
	}

	return 0;
}