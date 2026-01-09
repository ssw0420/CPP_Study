#include <iostream>
#include <string>

using namespace std;

int main()
{
	string my_str("12345678");

	cout << my_str.size() << endl; // 8
	cout << std::boolalpha;
	cout << my_str.empty() << endl; // false => NOT empty
	cout << my_str.length() << endl; // 8
	cout << my_str.capacity() << endl; // 15
	my_str.reserve(1000);
	cout << my_str.capacity() << endl; // 1007

	cout << my_str.max_size() << endl; // 64bits : 9223372036854775807, 32bits : 2147483647

	string my_str1("");
	cout << my_str1.empty() << endl; // true => EMPTY
	cout << my_str1.length() << endl; // 0
	cout << my_str1.capacity() << endl; // 15
	

	return 0;
}