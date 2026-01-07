#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>

using namespace std;

void sequence_containers()
{
	// vector
	{
		vector<int> vec; // #include <vector>
		for (int i = 0; i < 10; ++i)
			vec.push_back(i);

		for (auto& e : vec)
			cout << e << " "; // 0 1 2 3 4 5 6 7 8 9
		cout << endl;
	}

	//deque
	{
		deque<int> deq; // #include <deque>
		for (int i = 0; i < 10; ++i)
		{
			deq.push_back(i);
			deq.push_front(i);
		}

		for (auto& e : deq)
			cout << e << " "; // 9 8 7 6 5 4 3 2 1 0 0 1 2 3 4 5 6 7 8 9
		cout << endl;
	}
}

void associative_containers()
{
	// set
	{
		set<string> str_set;

		str_set.insert("Hello");
		str_set.insert("World");
		str_set.insert("Hello");

		cout << str_set.size() << endl; // 2

		for (auto& e : str_set)
			cout << e << " "; // Hello World
		cout << endl;
	}

	// multiset : duplication is allowed
	{
		std::multiset<string> str_multiset;

		str_multiset.insert("Hello");
		str_multiset.insert("World");
		str_multiset.insert("Hello");

		cout << str_multiset.size() << endl; // 3

		for (auto& e : str_multiset)
			cout << e << " "; // Hello Hello World
		cout << endl;
	}

	// map : key / value
	{
		std::map<char, int> map;
		map['a'] = 10;
		map['b'] = 20;
		map['c'] = 50;

		cout << map['a'] << endl; // 10

		map['a'] = 100;

		cout << map['a'] << endl; // 100

		for (auto& e : map)
			cout << e.first << " " << e.second << " "; // a 100 b 20 c 50
		cout << endl;
	}

	// multimap : duplicated keys
	{
		std::multimap<char, int> multimap;
		multimap.insert(std::pair<char, int>('a', 10)); // After C++ 17 - multimap.insert(std::pair('a', 10));
		multimap.insert(std::pair<char, int>('b', 10));
		multimap.insert(std::pair<char, int>('c', 10));
		multimap.insert(std::pair<char, int>('a', 100));

		cout << multimap.count('a') << endl; // 2

		for (auto& e : multimap)
			cout << e.first << " " << e.second << " "; // a 10 a 100 b 10 c 10
		cout << endl;
	}
}

void container_adapters()
{
	// stack
	{
		std::stack<int> stack;
		stack.push(1); // push adds a copy
		stack.emplace(2); // emplace constructs a new object
		stack.emplace(3);
		cout << stack.top() << endl; // 3
		stack.pop();
		cout << stack.top() << endl; // 2
	}

	// queue
	{
		std::queue<int> queue;
		queue.push(1);
		queue.push(2);
		queue.push(3);
		cout << queue.front() << " " << queue.back() << endl; // 1 3
		queue.pop();
		cout << queue.front() << " " << queue.back() << endl; // 2 3
	}

	// Priority queue
	{
		std::priority_queue<int> queue;
		
		for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
			queue.push(n);

		for (int i = 0; i < 10; ++i)
		{
			cout << queue.top() << " "; // 9 8 7 6 5 4 3 2 1 0
			queue.pop();
		}
	}
}

int main()
{
	sequence_containers();

	cout << endl;

	associative_containers();

	cout << endl;

	container_adapters();

	return 0;
}