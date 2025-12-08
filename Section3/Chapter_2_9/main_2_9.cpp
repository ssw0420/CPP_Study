#include <iostream>
#include "MY_CONSTANTS.h"

using namespace std;

void printNumber(const int my_number)
{
	int n = my_number;
	cout << my_number << endl;
}

int main(void)
{
	const double gravity{ 9.8 };
	double const gravity2{ 9.8 };

	printNumber(123);

	int number;
	cin >> number;
	const int special_number(number);
	// constexpr int special(number); // C++ expression must have a constant value. the value of variable cannot be used as a constant

	number = 123;
	//special_number = 123; // C++ expression must be a modifiable lvalue

	int num_item = 123;
	const int price_per_item = 30;
	int price = num_item * 30;
	int newprice = num_item * price_per_item;

	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;
	cout << circumference << endl;

	return 0;
}