#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	const char my_strs[] = "Hello, World";
	const string my_hello_init1 = "Hello, World";
	const string my_hello_init2("Hello, World");
	const string my_hello_init3{ "Hello, World" };
	
	string my_ID = "123";
	//string my_ID2 = 123;

	string test;

	cout << "Hello, World" << endl;
	cout << my_strs << endl;
	cout << my_hello_init1 << endl;
	cout << my_hello_init2 << endl;
	cout << my_hello_init3 << endl;
	
	cout << endl;
	cout << std::numeric_limits<std::streamsize>::max() << endl;
	cout << test.max_size() << endl;

	string a("Hello, ");
	string b("World");
	string hw = a + b; // append

	hw += "I'm good";

	cout << hw << endl; // Hello, WorldI'm good

	string s("Hello, World");
	cout << s.length() << endl; // 12


	cout << "Your name ?";
	std::string name;
	cin >> name;

	cout << "Your age ? ";
	string age;
	cin >> age;

	cout << "Your name is : " << name << endl;
	cout << "Your age is : " << age << endl;

	string text;
	cout << "Text : ";
	cin.ignore();
	std::getline(std::cin, text);
	cout << text << endl;


	int age2;
	cin >> age2;

	// std::cin.ignore(32767, '\n');
	std::cin.ignore(std::numeric_limits<std::streamsize>::max());
	
	string name2;
	std::getline(std::cin, name2);

	cout << "Your age2 is : " << age2 << endl;
	cout << "Your name2 is : " << name2 << endl;


	return 0;
}