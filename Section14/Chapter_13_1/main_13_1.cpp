#include <iostream>
#include "Cents.h"

// template<typename T_NAME>
// template<class T>
template<typename T>
T GetMax(T x, T y)
{
	return (x > y) ? x : y;
}

//double GetMax(double x, double y)
//{
//	return (x > y) ? x : y;
//}
//
//float GetMax(float x, float y)
//{
//	return (x > y) ? x : y;
//}
//
//char GetMax(char x, char y)
//{
//	return (x > y) ? x : y;
//}

int main()
{
	std::cout << GetMax(1, 2) << std::endl;
	std::cout << GetMax(3.14, 1.592) << std::endl;
	std::cout << GetMax(1.0f, 3.4f) << std::endl;
	std::cout << GetMax('a', 'c') << std::endl;

	std::cout << std::endl;

	std::cout << GetMax(Cents(5), Cents(9)) << std::endl;

	return 0;
}