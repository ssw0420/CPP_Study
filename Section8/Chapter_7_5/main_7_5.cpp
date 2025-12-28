#include <iostream>
#include <array>
#include <tuple>

using namespace std;

int getValue(int x)
{
	int value = x * 2;
	return value;
} // x is destroyed here

int* getValue_ReturnAddress(int x)
{
	int value = x * 2;
	return &value;  // returning address of local variable or temporary : value
}

int* allocateMemory(int size)
{
	return new int[size];
}

int& getValue_ReturnReference(int x)
{
	int value = x * 2;
	return value; // returning address of local variable or temporary : value
}

int& getArray(std::array<int, 100>& my_array, int idx)
{
	return my_array[idx];
}

struct S
{
	int a, b, c, d;
};

S getStruct()
{
	S my_s{ 1, 2, 3, 4 };
	return my_s;
}

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);
}


int main(void)
{
	int value = getValue(3);

	cout << value << endl; // 6


	int* ptr = getValue_ReturnAddress(5);
	cout << *ptr << endl; // 10
	cout << "Hello" << endl;
	cout << *ptr << endl; // -858993460

	int value2 = *getValue_ReturnAddress(3);
	cout << value2 << endl; // 6

	cout << endl;

	// int *array = new int[1024];
	int* array = allocateMemory(1024);
	delete[] array;

	cout << endl;

	int value3 = getValue_ReturnReference(5);
	cout << value3 << endl; // 10

	int& value4 = getValue_ReturnReference(3);
	cout << value4 << endl; // 6
	cout << "Hello" << endl;
	cout << value4 << endl; // -858993460


	std::array<int, 100> my_array;
	my_array[30] = 10;
	my_array[12] = 3;

	getArray(my_array, 30) = 1024;
	getArray(my_array, 12) *= 10;

	cout << my_array[30] << endl; // 1024
	cout << my_array[12] << endl; // 30

	S my_s = getStruct();
	cout << my_s.a << " " << my_s.b << " " << my_s.c << " " << my_s.d << endl; // 1 2 3 4

	cout << endl;

	std::tuple<int, double> my_tp = getTuple();
	cout << std::get<0>(my_tp) << endl; // 10
	cout << std::get<1>(my_tp) << endl; // 3.14
	cout << std::get<int>(my_tp) << endl; // 10

	auto [a, d] = getTuple();
	cout << a << endl;
	cout << d << endl;

	return 0;
}