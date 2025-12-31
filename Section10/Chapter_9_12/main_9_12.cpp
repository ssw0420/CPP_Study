#include <iostream>
#include <cassert>
#include <initializer_list>

using namespace std;

class IntArray
{
private:
	unsigned m_length = 0;
	int* m_data = nullptr;

public:
	IntArray(unsigned length) : m_length(length)
	{
		m_data = new int[length];
	}

	IntArray(const std::initializer_list<int>& list) : IntArray(list.size())
	{
		int count = 0;
		for (auto& element : list)
		{
			m_data[count++] = element;
			//++count;
		}

		//for (unsigned count = 0; count < list.size(); ++count)
		//{
		//	m_data[count] = list[count]; // error
		//}
	}

	~IntArray()
	{
		delete[] this->m_data;
	}

	friend ostream& operator << (ostream& out, IntArray& arr)
	{
		for (unsigned i = 0; i < arr.m_length; ++i)
			out << arr.m_data[i] << " ";
		out << endl;
		return out;
	}

	IntArray& operator = (const IntArray& source)
	{
		if (this == &source) return *this;

		delete[] m_data;

		m_length = source.m_length;
		m_data = new int[m_length];

		for (unsigned i = 0; i < m_length; ++i)
			m_data[i] = source.m_data[i];

		return *this;
	}

	IntArray& operator = (const std::initializer_list<int>& list)
	{
		delete[] m_data;

		m_length = static_cast<unsigned>(list.size());
		m_data = new int[m_length];

		int count = 0;
		for (auto& element : list)
		{
			if (count < m_length)
			{
				m_data[count++] = element;
			}
		}

		return *this;
	}
};

int main()
{
	int my_arr1[5] = { 1, 2, 3, 4, 5 };
	int* my_arr2 = new int[5] {1, 2, 3, 4, 5};

	auto il = { 10, 20, 30 };

	IntArray int_array{ 1, 2, 3, 4, 5 };
	cout << int_array << endl; // 1 2 3 4 5

	int_array = { 10, 20, 30 };
	cout << int_array << endl;

	IntArray other_array(2);
	other_array = int_array;
	cout  << other_array << endl;
}