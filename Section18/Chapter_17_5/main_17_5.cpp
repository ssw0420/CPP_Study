#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1("one");
	string str2;

	str2 = str1;
	cout << str1 << " " << str2 << endl; // one one

	str2 = "what";
	cout << str1 << " " << str2 << endl; // one what

	// chaining
	str2.assign("two").append("three").append("four"); // assign, append use reference => can chaining
	cout << str2 << endl; // twothreefour

	string str3("three");
	string str4("four");

	cout << str3 << " " << str4 << endl; // three four

	std::swap(str3, str4);
	cout << str3 << " " << str4 << endl; // four three

	str3.swap(str4);
	cout << str3 << " " << str4 << endl; // three four

	str3.append("three");
	cout << str3 << endl; // threethree

	str3 += "three";
	cout << str3 << endl; // threethreethree

	str4 = str3 + "four";
	cout << str4 << endl; // threethreethreefour

	str4.push_back('A');
	cout << str4 << endl; // threethreethreefourA

	str4 += "BCD";
	cout << str4 << endl; // threethreethreefourABCD


	string str("AAAA");

	str.insert(2, "bbb");
	cout << str << endl; // AAbbbAA

	str.insert(3, string("ccc"));
	cout << str << endl; // AAbcccbbAA

	return 0;
}