#include <iostream>
#include <tuple>

using namespace std;

//int my_func()
//{
//	return 0;
//}

auto my_func()
{
	//return tuple<int, int, int>(123, 456, 789);
	return tuple(123, 456, 789, 10);
}

int main()
{
	//tuple<int, int> result = my_func();

	//auto result = my_func();

	//cout << get<0>(result) << " " << get<1>(result) << " " <<  get<2>(result) << endl;

	auto [a, b, c, d] = my_func();
	cout << a << " " << b << " " << c << " " << d << endl;

	return 0;
}