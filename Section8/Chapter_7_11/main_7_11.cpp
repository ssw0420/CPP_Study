#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int>& stack)
{
	for (auto& e : stack)
		cout << e << " ";
	cout << endl;
}

int main(void)
{
	std::vector<int> v{ 1 ,2, 3 };
	
	// size, capacity

	for (auto& e : v)
	{
		cout << e << " "; // 1 2 3
	}
	cout << endl;
	cout << endl;

	cout << v.size() << endl; // 3
	cout << v.capacity() << endl; // 3

	cout << endl;

	v.resize(10);
	for (auto& e : v)
	{
		cout << e << " "; // 1 2 3 0 0 0 0 0 0 0
	}
	cout << endl;
	cout << endl;

	cout << v.size() << endl; // 10
	cout << v.capacity() << endl; // 10

	cout << endl;

	v.resize(2);
	for (auto& e : v)
	{
		cout << e << " "; // 1 2
	}
	cout << endl;
	cout << endl;

	cout << v.size() << endl; // 2
	cout << v.capacity() << endl; // 10
	//cout << v[2] << endl; // UB
	//cout << v.at(2) << endl; // runtime error!

	cout << endl;

	int* ptr = v.data();
	cout << ptr[2] << endl; // 3

	cout << endl;

	for (unsigned int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " "; // 1 2
	}
	cout << endl;

	v.reserve(100);
	for (unsigned int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " "; // 1 2
	}
	cout << endl;
	cout << v.size() << endl; // 2
	cout << v.capacity() << endl; // 100


	cout << endl;

	std::vector<int> stack;
	
	stack.push_back(3);
	printStack(stack); // 3

	stack.push_back(5);
	printStack(stack); // 3 5

	stack.push_back(7);
	printStack(stack); // 3 5 7

	stack.pop_back();
	printStack(stack); // 3 5

	stack.pop_back();
	printStack(stack); // 3
	
	stack.pop_back();
	printStack(stack); // 

	return 0;
}