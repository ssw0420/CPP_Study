#include <iostream>

using namespace std;

int getPrice(bool onSale)
{
	if (onSale)
	{
		return 10;
	}
	else
	{
		return 100;
	}
}

int main(void)
{
	float f;

	cout << sizeof(float) << endl;
	cout << sizeof(f) << endl;
	cout << sizeof f << endl;

	cout << endl;

	// Comma Operator

	int x = 3;
	int y = 10;
	int z = (++x, ++y);
	cout << x << " " << y << " " << z << endl;


	// int z = (++x, ++y);는 아래와 동일함
	// ++x;
	// ++y;
	// int z = y;

	int a = 1, b = 10;
	int c;

	z = a, b;
	cout << z << endl;

	z = (a, b);
	cout << z << endl;

	z = (++a, a + b);
	cout << z << endl;

	cout << endl;

	// Conditional Operator

	bool onSale = true;

	int price;

	if (onSale)
	{
		price = 10;
	}
	else
	{
		price = 100;
	}

	const int priceCO = (onSale == true) ? 10 : 100;
	const int priceGET = getPrice(onSale);

	cout << price << endl;
	cout << priceCO << endl;
	cout << priceGET << endl;


	int temp = 5;
	cout << ((temp % 2 == 0) ? "even" : "odd") << endl;

	return 0;
}