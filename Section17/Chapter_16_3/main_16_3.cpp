#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	// vector
	{
		vector<int> container;

		for (int i = 0; i < 10; ++i)
			container.push_back(i);

		auto itr = min_element(container.begin(), container.end());
		cout << *itr << endl; // 0

		itr = max_element(container.begin(), container.end());
		cout << *itr << endl; // 9

		cout << endl;

		itr = find(container.begin(), container.end(), 3);
		container.insert(itr, 128);

		for (auto& e : container) cout << e << " "; // 0 1 2 128 3 4 5 6 7 8 9
		cout << endl;

		sort(container.begin(), container.end());

		for (auto& e : container) cout << e << " "; // 0 1 2 3 4 5 6 7 8 9 128
		cout << endl;

		reverse(container.begin(), container.end());

		for (auto& e : container) cout << e << " "; // 128 9 8 7 6 5 4 3 2 1 0
		cout << endl;
	}

	// list
	{
		list<int> container;

		for (int i = 0; i < 10; ++i)
			container.push_back(i);

		auto itr = min_element(container.begin(), container.end());
		cout << *itr << endl; // 0

		itr = max_element(container.begin(), container.end());
		cout << *itr << endl; // 9

		cout << endl;

		itr = find(container.begin(), container.end(), 3);
		container.insert(itr, 128);

		for (auto& e : container) cout << e << " "; // 0 1 2 128 3 4 5 6 7 8 9
		cout << endl;

		container.sort();

		for (auto& e : container) cout << e << " "; // 0 1 2 3 4 5 6 7 8 9 128
		cout << endl;

		container.reverse();

		for (auto& e : container) cout << e << " "; // 128 9 8 7 6 5 4 3 2 1 0
		cout << endl;
	}
	

	return 0;
}