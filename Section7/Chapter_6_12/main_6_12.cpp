#include <iostream>

using namespace std;

int main()
{
	/*const int length = 5;
	int array[length];*/

	int length;
	cin >> length;

	// int* array = new int[length];
	int* array = new int[length](); // = int* array = new int[length]{};

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; ++i)
	{
		cout << array[i] << endl;
		cout << (uintptr_t)& array[i] << endl;
	}

	delete[] array;

	cout << endl;

	int* array2 = new int[length] {11, 22, 33};

	array2[0] = 1;
	array2[1] = 2;

	for (int i = 0; i < length; ++i)
	{
		cout << array2[i] << endl;
		cout << (uintptr_t)&array2[i] << endl;
	}

	delete[] array2;


	cout << endl;

	int* array3 = new int[length] {11, 22, 33, 44, 55, 66};

	array3[0] = 1;
	array3[1] = 2;

	for (int i = 0; i < length; ++i)
	{
		cout << array3[i] << endl;
		cout << (uintptr_t)&array3[i] << endl;
	}

	delete[] array3;


	int fixedArray[5] = { 1, 2, 3, 4, 5 };
	// int* test_array = new int [3] {1, 2, 3, 4, 5}; // too many initializer values
	// int* test_array = new int [] {1, 2, 3, 4, 5}; // too many initializer values
	int* test_array = new int [5] {1, 2, 3, 4, 5};

	// resizing

	delete[] test_array;

	return 0;
}