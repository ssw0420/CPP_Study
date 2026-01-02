#include <iostream>
#include <initializer_list>
#include <cassert>

using namespace std;

class IntArray
{
private:
	int m_length = 0;
	int* m_data = nullptr;

public:
	// Constructors
	IntArray() : m_length(0), m_data(nullptr)
	{
		
	}


	IntArray(const initializer_list<int> array_in)
	{
		initialize(array_in);
	}

	// copy constructor : for prevent shallow copy -> double free
	IntArray(const IntArray& other)
	{
		m_length = other.m_length;
		if (other.m_data != nullptr)
		{
			m_data = new int[m_length];

			for (int i = 0; i < m_length; ++i)
			{
				m_data[i] = other.m_data[i];
			}
		}
	}

	IntArray& operator=(const IntArray& other)
	{
		if (this == &other) return *this;

		reset();
		m_length = other.m_length;

		if (other.m_data != nullptr)
		{
			m_data = new int[m_length];
			for (int i = 0; i < m_length; ++i)
			{
				m_data[i] = other.m_data[i];
			}
		}
		return *this;
	}

	int& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	// Destructors
	~IntArray()
	{
		reset();
	}


	// initialize()
	void initialize(const initializer_list<int>& array_in)
	{
		reset();

		m_length = array_in.size();

		if (m_length > 0)
		{
			m_data = new int[m_length];
			assert(m_data != nullptr);

			int i = 0;
			for (auto element : array_in)
			{
				assert(i < m_length);
				m_data[i] = element;
				i++;
			}
		}
	}


	// reset()
	void reset()
	{
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}

	
	// cout
	friend ostream& operator << (ostream& out, const IntArray& array_in)
	{
		for (int i = 0; i < array_in.m_length; ++i)
		{
			out << array_in.m_data[i] << " ";
		}
		return out;
	}


	// resize()
	void resize(int num_in)
	{
		assert(num_in >= 0);

		if (num_in == m_length) return;

		if (num_in == 0)
		{
			reset();
			return;
		}

		int* new_data = new int[num_in];
		assert(new_data != nullptr);

		int min_length = (m_length < num_in) ? m_length : num_in;

		for (int i = 0; i < num_in; ++i)
		{
			if (i < m_length)
			{
				new_data[i] = m_data[i];
			}
			else
			{
				new_data[i] = 0;
			}
		}
	
		reset();
		m_length = num_in;
		m_data = new_data;
	}
	

	// insertBefore(const int & value, const int & ix)
	void insertBefore(const int& value, const int& ix)
	{
		assert(ix >= 0);
		assert(ix <= m_length);
		int new_length = m_length + 1;
		int *new_data = new int[new_length];

		for (int i = 0; i < new_length; ++i)
		{
			if (i < ix)
			{
				new_data[i] = m_data[i];
			}
			else if (i == ix)
			{
				new_data[i] = value;
			}
			else
			{
				new_data[i] = m_data[i - 1];
			}
		}

		reset();
		m_length = new_length;
		m_data = new_data;
	}


	// remove(const int & ix)
	void remove(const int& ix)
	{
		assert(ix >= 0);
		assert(ix < m_length);

		if (m_length == 1)
		{
			reset();
			return;
		}

		int new_length = m_length - 1;
		int* new_data = new int[new_length];

		for (int i = 0; i < ix && i < new_length; ++i)
		{
			new_data[i] = m_data[i];
		}

		for (int i = ix; i < new_length; ++i)
		{
			new_data[i] = m_data[i + 1];
		}

		reset();
		m_length = new_length;
		m_data = new_data;
	}

	// push_back(const int& value)
	void push_back(const int& value)
	{
		resize(m_length + 1);

		m_data[m_length - 1] = value;
	}
};

int main(void)
{
	IntArray my_arr{ 1, 3, 5, 7, 9 };		 // input style { } => use std::initializer_list
	cout << my_arr << endl; // 1 3 5 7 9

	my_arr.resize(10);
	cout << my_arr << endl; // 1 3 5 7 9 0 0 0 0 0

	my_arr.resize(5);
	cout << my_arr << endl;

	my_arr.insertBefore(10, 1);	
	cout << my_arr << endl;	// 1, 10, 3, 5, 7, 9


	my_arr.remove(3);
	cout << my_arr << endl; // 1, 10, 3, 7, 9

	my_arr.push_back(13);
	cout << my_arr << endl; // 1, 10, 3, 7, 9, 13

	return 0;
}