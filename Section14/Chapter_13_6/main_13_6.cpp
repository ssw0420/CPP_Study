#include <iostream>
#include <string>

using namespace std;

template <class T, int size>
class StaticArray_BASE
{
private:
	T m_array[size];

public:
	T* GetArray() { return m_array; }

	T& operator[](int index)
	{
		return m_array[index];
	}

	void print()
	{
		for (int count = 0; count < size; ++count)
			std::cout << (*this)[count] << ' ';
		std::cout << endl;
	}
};

template <class T, int size>
class StaticArray : public StaticArray_BASE<T, size>
{

};

template <int size>
class StaticArray<char, size> : public StaticArray_BASE<char, size>
{
public:
	void print()
	{
		for (int count = 0; count < size; ++count)
			std::cout << (*this)[count];
		std::cout << endl;
	}
};

//template <int size>
//void print(StaticArray<char, size>& array)
//{
//	for (int count = 0; count < size; ++count)
//		std::cout << array[count];
//	std::cout << endl;
//}

int main()
{
	StaticArray<int, 4> int4;
	int4[0] = 1;
	int4[1] = 2;
	int4[2] = 3;
	int4[3] = 4;

	//print(int4); // 1 2 3 4
	int4.print();

	StaticArray<char, 14> char14;
	char14[0] = 'H';
	char14[1] = 'e';
	// ...
	strcpy_s(char14.GetArray(), 14, "Hello, World");

	//print(char14); // H e l l o ,   W o r l d  ? -> partial specialization -> Hello, World

	char14.print();

	return 0;
}