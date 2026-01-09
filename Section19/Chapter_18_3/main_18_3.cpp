#include <iostream>
#include <sstream>

using namespace std;


int main()
{
	//stringstream os;

	//os << "Hello,"; // << : insertion operator
	////os.str("HELLO");

	//string my_str;
	////os >> my_str; // >> : extraction operator

	////cout << my_str << endl; // Hello,

	//my_str = os.str();
	//cout << my_str << endl; // Hello, World!


	stringstream os;

	os << "Hello, World!";
	os << "Hello, World! 2\n" << endl << "345";
	cout << os.str() << endl;
	// Hello, World!Hello, World! 2
	//
	// 345
	string my_str;

	my_str = os.str();

	cout << my_str << endl;
	// Hello, World!Hello, World! 2
	//
	// 345

	cout << endl;

	stringstream os2;
	int i = 12345;
	double d = 67.89;

	os2 << i << " " << d; // = os << "12345 67.89

	string str1;
	string str2;
	os2 >> str1 >> str2;

	cout << str1 << "|" << str2 << endl; // 12345|67.89

	cout << endl;

	stringstream os3;
	os3 << i << " " << d;
	int i2;
	double d2;

	os3 >> i2 >> d2;
	cout << i2 << "|" << d2 << endl; // 12345|67.89

	cout << endl;

	os3.str(""); // = os.str(string());
	cout << os3.str() << endl;



	return 0;
}