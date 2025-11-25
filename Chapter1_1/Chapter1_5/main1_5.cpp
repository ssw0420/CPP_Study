#include <iostream>

using namespace std;

int multiplyTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;
	
	return sum;
}

void printHelloWorld()
{
	cout << "Hello World " << endl;

	return;
}

int main()
{
	cout << multiplyTwoNumbers(1, 2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;

	printHelloWorld();
	return 0;
}