#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	string my_str("abcdefg"); // const char

	cout << my_str[0] << endl; // a
	cout << my_str[3] << endl; // d

	my_str[3] = 'z';
	cout << my_str << endl; // abczefg


	try
	{
		//my_str[100] - 'X'; => NOT throw
		my_str.at(100) = 'X'; // => invalid string position
	}
	catch (std::exception& e)
	{
		cout << e.what() << endl;
	}

	cout << my_str.c_str() << endl; // abczefg

	cout << my_str.c_str()[6] << endl; // g

	// const char *arr = my_str.data();
	const char* arr = my_str.c_str();

	cout << (int)arr[6] << endl; // 103
	cout << (int)arr[7] << endl; // 0 (NULL CHAR)

	char buf[20];
	my_str.copy(buf, 5, 1);

	cout << buf << endl; // bczef面面面面面面面面面面面?��

	buf[5] = '\0';
	cout << buf << endl; // bczef

	char buf2[20] = { 0, }; // all value = '\0'
	my_str.copy(buf2, 5, 1);
	cout << buf2 << endl; // bczef


	return 0;
}