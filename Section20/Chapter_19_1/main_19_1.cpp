#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void goodbye(const string& s)
{
	cout << "Goodbye " << s << endl;
}

class Object
{
public:
	void hello(const string& s)
	{
		cout << "Hello " << s << endl;
	}
};

int main()
{
	 //lambda-introducer
	 //lambda-parameter-declaration
	 //lambda-return-type-clause
	 //compound-statement
	auto func = [](const int& i) -> void {cout << "Hello, World!" << endl; };

	func(123);

	[](const int& i) -> void {cout << "Hello, World!" << endl; } (123);

	{
		string name = "JackJack";
		string name2 = "JACK";
		[&]() {std::cout << name << " " << name2 << endl; } (); // JackJack JACK
	}

	cout << endl;

	vector<int> v;
	v.push_back(1);
	v.push_back(2);

	//auto func2 = [](int val) {cout << val << endl; };
	//for_each(v.begin(), v.end(), func2);

	for_each(v.begin(), v.end(), [](int val) {cout << val << endl; });

	cout << endl;

	cout << []() -> int { return 1; }() << endl;

	cout << endl;

	auto func2 = [](int val) {cout << val << endl; };
	std::function<void(int)> func3 = func2;
	func3(123); // 123

	std::function<void(void)>func4 = std::bind(func3, 456);
	func4();

	// placeholders
	{
		Object instance;
		auto f = std::bind(&Object::hello, &instance, std::placeholders::_1);

		// execute
		f(string("World")); // = f("World"); => Hello World

		auto f2 = std::bind(&goodbye, std::placeholders::_1);

		// execute
		f2("World"); // Goodbye World
	}

	return 0;
}