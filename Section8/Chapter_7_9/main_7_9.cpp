#include <iostream>
#include <array>
#include <functional>

using namespace std;

int func()
{
	return 5;
}

int foo()
{
	return 10;
}

float test(int a)
{
	if (a == 5)
	{
		return 5;
	}
	else
	{
		return 100;
	}
}

void printNumbers(const array<int, 10>& my_array, bool print_even)
{
	for (auto element : my_array)
	{
		if (print_even && element % 2 == 0) cout << element << " ";

		if (!print_even && element % 2 == 1) cout << element << " ";
	}
	cout << endl;
}

bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;
}

typedef bool(*check_fcn_t)(const int&);

//using check_func_t = bool(*)(const int&);

//void printTest(const array<int, 10>& my_array, bool(*check_func)(const int&) = isEven)
//void printTest(const array<int, 10>& my_array, check_fcn_t check_func = isEven)
//void printTest(const array<int, 10>& my_array, check_fcn_t check_func = isEven)
void printTest(const array<int, 10>& my_array, std::function<bool(const int&)> check_func = isEven)
{
	for (auto element : my_array)
	{
		if (check_func(element) == true) cout << element << " ";
	}
	cout << endl;
}

int main(void)
{
	cout << func << endl; // 00007FF6F6801208
	cout << func() << endl; // 5


	int(*function_ptr)() = func;
	cout << function_ptr() << endl; // 5

	function_ptr = foo;
	cout << function_ptr() << endl; // 10

	float(*func_ptr)(int) = test;

	cout << func_ptr(5) << endl; // 5
	cout << func_ptr(20) << endl; // 100

	std::array<int, 10> my_array = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (auto element : my_array)
	{
		if (element % 2 == 0) cout << element << " ";
	}
	cout << endl;

	printNumbers(my_array, true);
	printNumbers(my_array, false);

	cout << endl;

	printTest(my_array);
	printTest(my_array, isEven);
	printTest(my_array, isOdd);

	std::function<bool(const int&)> funcptr = isEven;
	printTest(my_array, funcptr);
	funcptr = isOdd;
	printTest(my_array, funcptr);

	return 0;
}