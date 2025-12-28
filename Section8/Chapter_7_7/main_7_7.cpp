#include <iostream>
#include <string>

using namespace std;

int addInt(int x, int y)
{
	return x + y;
}

double addDouble(double x, double y)
{
	return x + y;
}


int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

void getRandom(int& x) {}
void getRandom(double& x) {}

typedef int my_int;

void test(int x) {}
//void test(my_int x) {} // error C2084: function 'void test(int)' already has a body

void print(char* value) {}
void print(int value) {}
void print(unsigned int value) {}
void print(float value) {}

int main(void)
{
	addInt(1, 2);
	addDouble(1.1, 2.2);

	add(1, 2);
	add(3.0, 4.0);

	int x;
	getRandom(x);
	double d;
	getRandom(d);

	print(0);
	print('a'); // call - void print(int value) {}
	// print("a"); // 'print': no overloaded function could convert all the argument types
	// print(3.14159); // error C2668: 'print': ambiguous call to overloaded function
	print(0u); // u: unsigned
	print(3.14159f); // float

	return 0;
}