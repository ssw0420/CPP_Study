#include <cassert> // assert.h
#include <array>
#include <iostream>

void printValue(const std::array<int, 5>& my_array, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);

	std::cout << my_array[ix] << std::endl;
}

int main(void)
{
	//	assert(false);

	int number = 5;
	
	// ...

	// number should be 5
	assert(number == 5);

	std::array<int, 5> my_array{ 1, 2, 3, 4, 5 };
	printValue(my_array, 100); // Assertion failed: ix <= my_array.size() - 1


	const int x = 10;
	// assert(x == 5); // runtime - Assertion failed: x == 5
	// static_assert(x == 5, "x should be 5"); // error C2338: static_assert failed: 'x should be 5'

	return 0;
}