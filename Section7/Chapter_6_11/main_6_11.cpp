#include <iostream>

using namespace std;

int main()
{
	// stack
	// int array[100000000];

	// int var;
	// var = 7;

	int *ptr = new int;
	*ptr = 7;

	int* ptr_1 = new int{ 8 };

	cout << *ptr << endl; // 7
	cout << *ptr_1 << endl; // 8

	cout << endl;

	cout << ptr << endl;
	delete ptr;

	cout << "After Delete" << endl;
	/*cout << ptr << endl;
	cout << *ptr << endl;*/

	delete ptr_1;
	ptr_1 = nullptr; // 0, NULL

	if (ptr_1 != nullptr) // = if(ptr_1)
	{
		cout << ptr_1 << endl;
		cout << *ptr_1 << endl;
	}

	// memory leak
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;

		// not memory leak
		delete ptr;
	}

	int* ptr3 = new(std::nothrow) int{ 7 };

	if (ptr3)
	{
		cout << ptr3 << endl;
		cout << *ptr3 << endl;
	}
	

	return 0;
}