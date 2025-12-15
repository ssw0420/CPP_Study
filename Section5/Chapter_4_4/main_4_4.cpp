#include <iostream>

auto add(int x, int y) -> int;
auto addDouble(int x, int y) -> double;

auto add(int x, int y) -> int
{
	return x + y;
}

auto addDouble(int x, int y) -> double
{
	return x + double(y);
}

int main(void)
{
	using namespace std;

	auto a = 123; // int
	auto b = 123.0; // double
	auto c = 1 + 2; // int
	auto d = 1 + 2.0; // double
	auto result = add(1, 2); // int
	auto result2 = addDouble(1, 2); // double

	return 0;
}