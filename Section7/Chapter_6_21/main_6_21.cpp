#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	std::vector<int> v;

	std::vector<int> v2 = { 1, 2, 3, 4, 5 };

	cout << v2.size() << endl; // 5

	std::vector<int> v3 = { 1, 2, 3, };

	cout << v3.size() << endl; // 3

	std::vector<int> v4{ 1, 2, 3, }; // uniform initialization

	cout << v4.size() << endl; // 3


	for (auto& itr : v2)
	{
		cout << itr << " ";
	}
	cout << endl;

	cout << v2[1] << endl;
	cout << v2.at(1) << endl;

	v2.resize(10);

	for (auto& itr : v2)
	{
		cout << itr << " "; // 1 2 3 4 5 0 0 0 0 0
	}
	cout << endl;

	return 0;
}