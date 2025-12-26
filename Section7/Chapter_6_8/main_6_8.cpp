#include <iostream>

using namespace std;

void printArray(int array[]) // = int *array
{
	cout << sizeof(array) << endl; // 8
	cout << *array << endl; // array[0] = 9

	*array = 100;
}

struct MyStruct
{
	int myArray[5] = { 9, 7, 5, 3, 1 };
};

void doSomething(MyStruct ms)
{
	cout << sizeof(ms.myArray) << endl;
}

void doSomething(MyStruct* ms)
{
	cout << sizeof((*ms).myArray) << endl;
}

int main()
{
	int array[5] = { 9, 7, 5, 3, 1 };

	cout << array[0] << " " << array[1] << endl; // value

	// address
	cout << array << endl; // = pointer
	cout << &(array[0]) << endl; // = cout << array << endl;
	cout << *array << endl; // = array[0] = 9

	cout << endl;
	
	char name[] = "jackjack";
	cout << *name << endl; // j

	cout << endl;

	int* ptr = array;
	cout << ptr << endl; // address
	cout << *ptr << endl; // = array[0] = 9

	cout << endl;

	cout << sizeof(array) << endl; // 20
	cout << sizeof(ptr) << endl; // 8
	printArray(array);

	cout << array[0] << " " << *array << endl; // 100 100

	cout << *ptr << " " << *(ptr + 1) << endl; // pointer arithmetic 100 7

	MyStruct ms;
	cout << ms.myArray[0] << endl; // 9
	cout << sizeof(ms.myArray) << endl; // 20

	doSomething(ms); // 20
	doSomething(&ms); // 20


	return 0;
}