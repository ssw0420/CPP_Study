#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

int main()
{
	// vector
	{
		vector<int> container;
		for (int i = 0; i < 10; ++i)
			container.push_back(i);

		vector<int>::const_iterator itr;
		itr = container.begin();
		while (itr != container.end())
		{
			cout << *itr << " "; // 0 1 2 3 4 5 6 7 8 9

			++itr;
		}
		cout << endl;

		for (auto itr = container.begin(); itr != container.end(); ++itr)
			cout << *itr << " "; // 0 1 2 3 4 5 6 7 8 9
		cout << endl;
	}

	cout << endl;

	// list
	{
		list<int> container;
		for (int i = 0; i < 10; ++i)
			container.push_back(i);

		for (auto itr = container.begin(); itr != container.end(); ++itr)
			cout << *itr << " "; // 0 1 2 3 4 5 6 7 8 9
		cout << endl;
	}

	cout << endl;

	// set
	{
		set<int> container;
		for (int i = 0; i < 10; ++i)
			container.insert(i);

		for (auto itr = container.begin(); itr != container.end(); ++itr)
			cout << *itr << " "; // 0 1 2 3 4 5 6 7 8 9
		cout << endl;
	}

	cout << endl;

	// map
	{
		map<int, char> container;
		for (int i = 0; i < 10; ++i)
			container.insert(make_pair(i, char(i + 65)));

		for (auto itr = container.begin(); itr != container.end(); ++itr)
			cout << itr->first << " " << itr->second << " "; // 0 A 1 B 2 C 3 D 4 E 5 F 6 G 7 H 8 I 9 J
		cout << endl;
	}
	


	return 0;
}