#include <iostream>
#include <string>

using namespace std;

void print(int x = 0)
{
	cout << x << endl;
}

void test(int x, int y = 20, int z = 30); // in header

void test(int x, int y, int z)
{
	cout << x << " " << y << " " << z << endl;
}

void printStr(std::string str = "A") {}
void printStr(char ch = ' ') {}

void printInt(int x) {} // ambiguous
void printInt(int x, int y = 20) {}

int main(void)
{
	print(10); // 10
	print(); // 0

	test(100, 200); // 100, 200, 30
	test(100, 200, 300); // 100, 200, 300

	//printStr(); // error C2668: 'printStr': ambiguous call to overloaded function

	// printInt(10); // error C2668: 'printInt': ambiguous call to overloaded function

	return 0;
}