#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl; // 5
}

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	std::array<int, 5> my_arr = { 1, 2, 3, 4, 5 };

	//cout << my_arr[0] << endl;
	cout << my_arr.at(0) << endl; // 1

	cout << my_arr.size() << endl; // 5

	printLength(my_arr);

	array<int, 5> test_arr = { 1, 21, 3, 40, 5 };

	for (auto &element : test_arr)
		cout << element << " "; // 1 21 3 40 5

	cout << endl;

	// sorting

	std::sort(test_arr.begin(), test_arr.end());

	for (auto& element : test_arr)
		cout << element << " "; // 1 3 5 21 40

	cout << endl;

	std::sort(test_arr.rbegin(), test_arr.rend());

	for (auto& element : test_arr)
		cout << element << " "; // 40 21 5 3 1

	cout << endl;

	return 0;
}